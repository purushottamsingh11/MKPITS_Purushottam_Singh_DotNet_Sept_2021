
--SUBQUERY   IN   SQL

--subqueary always enclose with parenthesis i.e. ().
--** A subqueary can have only one column name after SELECT keyword
--     (means as we seen below in subqueary part after SELECT keyword we can use only one column name i.e. emp_salary )
-- four condition of subqueary 1.subqueary comes after where caluse
--                             2.subqueary always enclose with parenthesis i.e. ().
--                             3.we must use comprasion operator befor subqueary
--                             4.A subqueary can have only one column name after SELECT keyword because this column name compair wiht same column name just befor outside the subqueary 

select * from employees;
select * from department;

-- QUESTION-1.==> DISPLAY EMPLOYEE NAME and SALARY WHOSE SALARY IS SAME AS 'taka sinha' salary
select emp_name,emp_salary from employees where emp_salary >  
                                       (select emp_salary from employees where  emp_name='taku sinha');


-- QUESTION-2.==> DISPLAY COMPLETE INFORMATION of employee WHOSE SALARY IS SAME AS 'sivani devi' salary
                --AND empdep_id IS SAME AS 'sivani devi' empdep_id
select * from employees where emp_salary > (select emp_salary from employees where  emp_name='sivani devi') 
                                                                   AND
                              empdep_id = (select empdep_id  from employees where  emp_name='sivani devi' );



