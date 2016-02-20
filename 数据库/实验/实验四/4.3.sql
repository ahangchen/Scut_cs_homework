SQL> $EXP cwh/cwh FILE=C:\0.DMP

SQL> select*from sc;

SNO                  CNO                       GRADE                            
-------------------- -------------------- ----------                            
0409121              c0001                        65                            
0409111              c0001                        65                            
0501231              c0003                        90                            
0501231              c0002                        85                            
0409111              CS004                        87                            
0501231              EE001                        95                            
0523231              c0003                        89                            
0409111              C0004                        88                            
0501231              c0001                        65                            

已选择9行。

SQL> drop table sc;

表已删除。

SQL> select*from sc;
select*from sc
            *
第 1 行出现错误: 
ORA-00942: 表或视图不存在 


SQL> $imp cwh/cwh file=c:\0.dmp full=y

SQL> select*from sc;

SNO                  CNO                       GRADE                            
-------------------- -------------------- ----------                            
0409121              c0001                        65                            
0409111              c0001                        65                            
0501231              c0003                        90                            
0501231              c0002                        85                            
0409111              CS004                        87                            
0501231              EE001                        95                            
0523231              c0003                        89                            
0409111              C0004                        88                            
0501231              c0001                        65                            

已选择9行。

SQL> spool off
