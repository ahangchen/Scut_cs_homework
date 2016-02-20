SQL> create or replace procedure Add_Student
  2  (
  3  SNO Students.sno%type,
  4  SNAME Students.sname%type,
  5  SEX Students.sex%type,
  6  BIRTH Students.BDATE%type,
  7  HEIGHT Students.height%type,
  8  DEPARTMENT Students.department%type
  9  )
 10  AS
 11  BEGIN
 12  insert into Students
 13  values
 14  (SNO,SNAME,SEX,BIRTH,HEIGHT,DEPARTMENT);
 15  END;
 16  /

过程已创建。

SQL> CREATE OR REPLACE PROCEDURE UPD_GRADE
  2  (SNO SC.SNO%TYPE,CNO SC.CNO%TYPE,GRADE SC.GRADE%TYPE)
  3  AS
  4  BEGIN
  5  UPDATE SC
  6  SET SC.GRADE=GRADE
  7  WHERE SC.SNO=SNO AND SC.CNO=CNO;
  8  END;
  9  /

过程已创建。

SQL> CREATE OR REPLACE PROCEDURE DISP_STUDENT
  2  (SNO1 SC.SNO%TYPE, SUM_CREDIT OUT COURSES.CREDIT%TYPE, AVG_GRADE OUT SC.GRADE%TYPE)
  3  AS
  4  csno students.sno%type;
  5  csname students.sname%type;
  6  cssex students.sex%type;
  7  csheight students.height%type;
  8  csdept students.department%type;
  9  ccno sc.cno%type;
 10  cgrade sc.grade%type;
 11  
 12  CURSOR mycur is
 13  SELECT SNO,SNAME,SEX,HEIGHT,department,
 14  cno,grade
 15  FROM STUDENTS natural join sc
 16  WHERE SNO=SNO1;
 17  
 18  BEGIN
 19  open mycur;
 20  loop
 21  fetch mycur into csno,csname,cssex,csheight,csdept,ccno,cgrade;
 22  Exit when mycur%notfound;
 23  dbms_output.put_line(csno||','||csname||','||cssex||','||csheight||','||csdept||','||ccno||','||cgrade);
 24  end loop;
 25  
 26  SELECT SUM(CREDIT) INTO SUM_CREDIT
 27  FROM STUDENTS NATURAL JOIN COURSES NATURAL JOIN SC
 28  WHERE SNO=SNO1;
 29  SELECT AVG(GRADE) INTO AVG_GRADE
 30  FROM STUDENTS NATURAL JOIN COURSES NATURAL JOIN SC
 31  WHERE COURSES.CREDIT>3 AND SNO=SNO1;
 32  DBMS_OUTPUT.PUT_LINE(SUM_CREDIT);
 33  DBMS_OUTPUT.PUT_LINE(AVG_GRADE);
 34  END ;
 35  /

过程已创建。

SQL> Create or replace procedure cal_gpa
  2  (sno1 sc.sno%type, gpa out courses.credit%type)
  3  as
  4  cgrade sc.grade%type;
  5  ccredit courses.credit%type;
  6  scredit courses.credit%type;
  7  pcredit courses.credit%type;
  8  Cursor c is
  9  select (case when SC.GRADE>=85 then 4 when 85>SC.GRADE and SC.GRADE>=75 then 3 when 75>SC.GRADE and SC.GRADE>=60 then 2 when 60>SC.GRADE then 1 end) gradepoint,credit
 10  from sc natural join courses natural join students
 11  where sno=sno1;
 12  
 13  begin
 14   select sum(credit) into scredit
 15  from courses natural join sc natural join students
 16  where  sno=sno1;
 17  
 18  pcredit:=0;
 19  open c;
 20  loop
 21  fetch c into cgrade, ccredit;
 22  exit when c%notfound;
 23  pcredit:=pcredit+cgrade*ccredit;
 24  end loop;
 25  gpa:=pcredit/scredit;
 26  dbms_output.put_line(gpa);
 27  end;
 28  /
过程已创建。

SQL> spool off;
