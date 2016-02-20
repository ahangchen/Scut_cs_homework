SQL> create table students as select*from sys.students;

表已创建。

SQL> create table courses as select*from sys.courses;

表已创建。

SQL> create table sc as select * from sys.sc;

表已创建。

SQL> alter table students add constraint pk_student primary key(sno);

表已更改。

SQL> alter table sc add constraint pk_sc primary key(sno,cno);

表已更改。

SQL> alter table courses add constraint pk_course primary key(cno);

表已更改。

SQL> Create table Credits as
  2  (
  3  	select a.sno, b.sumcredit, c.nopass from
  4  (SELECT SNO FROM SC) a,
  5  (SELECT SNO,SUM(CREDIT) SUMCREDIT FROM SC NATURAL JOIN COURSES WHERE SC.GRADE>59 GROUP BY SNO)  b,
  6  (SELECT SNO, COUNT(CNO) NOPASS FROM SC NATURAL JOIN COURSES WHERE SC.GRADE<60 GROUP BY SNO) c
  7  where a.sno = b.sno (+)
  8  and a.sno = c.sno (+)
  9  );

表已创建。

SQL> select*from credits;

SNO                   SUMCREDIT     NOPASS                                      
-------------------- ---------- ----------                                      
0409111                       6                                                 
0409111                       6                                                 
0409111                       6                                                 
0501231                      14                                                 
0501231                      14                                                 
0501231                      14                                                 
0501231                      14                                                 
0409121                       4                                                 
0523231                       3                                                 

已选择9行。

SQL> Create view STUDENT_GRADE
  2  AS
  3  (
  4  	SELECT SNAME, CNAME, GRADE FROM STUDENTS, COURSES, SC
  5  	WHERE STUDENTS.SNO=SC.SNO AND COURSES.CNO=SC.CNO
  6  );

视图已创建。

SQL> CREATE TRIGGER UPD_CREDIT
  2  	AFTER INSERT ON SC
  3  	referencing new as new
  4  	FOR EACH ROW
  5  	declare v_sumcredit number(32);
  6  	v_nopass integer;
  7  	BEGIN
  8  	select SUM(CREDIT) into v_sumcredit FROM SC NATURAL JOIN COURSES  WHERE SC.GRADE>59 and SNO=:new.SNO GROUP BY SNO  ;
  9  	select COUNT(CNO) into v_nopass FROM SC NATURAL JOIN COURSES WHERE SC.GRADE<60 and cno=:new.cno GROUP BY SNO  ;
 10  	INSERT INTO CREDITS VALUES
 11  	(:new.SNO, v_sumcredit, v_nopass);
 12  	END;
 13  /

触发器已创建

SQL> create or replace trigger Upd_StuView
  2  instead of  insert
  3  on student_grade
  4  referencing new as new for each row
  5  declare tsno integer;
  6  tcno varchar(20) ;
  7  begin
  8  select sno into tsno
  9  from students
 10  where sname=:new.sname;
 11  select cno into tcno
 12  from courses
 13  where cname=:new.cname;
 14  insert into sc
 15  values(
 16  tsno,
 17  tcno,
 18  :new.grade);
 19  end;
 20  /

触发器已创建

SQL> alter table SC drop primary key;

表已更改。

SQL> alter table SC drop foreign key;
alter table SC drop foreign key
                    *
第 1 行出现错误: 
ORA-00905: 缺失关键字 


SQL> alter table SC drop constraint foreign key;
alter table SC drop constraint foreign key
                                       *
第 1 行出现错误: 
ORA-01735: 无效的 ALTER TABLE 选项 


SQL> Create user stu identified by  "stu";

用户已创建。

SQL> grant connect, resource to stu;

授权成功。

SQL> grant select on SC to stu;

授权成功。

SQL> 
SQL> Create user tec identified by  "tec";

用户已创建。

SQL> grant connect, resource to stu;

授权成功。

SQL> grant select on SC,STUDENTS,COURSES to stu;
grant select on SC,STUDENTS,COURSES to stu
                  *
第 1 行出现错误: 
ORA-00990: 权限缺失或无效 


SQL> 
SQL> Create user jiao identified by  "jiao";

用户已创建。

SQL> grant connect, resource to stu;

授权成功。

SQL> grant select,update on STUDENTS,COURSES to jiao;
grant select,update on STUDENTS,COURSES to jiao
                               *
第 1 行出现错误: 
ORA-00905: 缺失关键字 


SQL> grant connect, resource to tec;

授权成功。

SQL> grant select on SC to tec;

授权成功。

SQL> grant select on Students to tec;

授权成功。

SQL> grant select on Students to tec;

授权成功。

SQL> grant connect, resource to jiao;

授权成功。

SQL> grant select,update on STUDENTS to jiao
  2  grant select,update on COURSES to jiao;
grant select,update on COURSES to jiao
*
第 2 行出现错误: 
ORA-00933: SQL 命令未正确结束 


SQL> grant select,update on STUDENTS to jiao;

授权成功。

SQL> grant select,update on COURSES to jiao;

授权成功。

SQL> spool off;
