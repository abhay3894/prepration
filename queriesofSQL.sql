/*third highest salary from the employeeinfo table;*/

SELECT*
FROM Emloyeeinfo
ORDER BY salary DESC
LIMIT 2,1;

/*third lowestsalary from the employeeinfo table;*/

SELECT*
FROM Emloyeeinfo
ORDER BY salary ASC
LIMIT 2,1;

/*find the Nth highest query from the table without using TOP/Limit keyword; (n = 1,2,3,4.....);*/

SELECT salary
FROM employeeinfo e1
WHERE N - 1 = 
(SELECT COUNT(DISTINCT salary)
FROM employeeinfo e2
WHERE e2.salary > e1.salary);

/*write a query to find duplicates rows in a table;*/

SELECT*,COUNT(empid)
from employeeinfo
GROUP BY empid
HAVING COUNT > 1;

/*write a query to find first and last record;*/

/*first record;*/
SELECT* from employeeinfo
WHERE EmpID = (SELECT MIN(EmpID)
FROM employeeinfo);

/*last record*/
SELECT* from employeeinfo
WHERE EmpID = (SELECT MAX(EmpID)
FROM employeeinfo);

/*How do you copy all rows of a table using SQL query*/

CREATE table empdetail AS SELECT FROM employeeinfo;

/*select only few colums*/

CREATE table empsalary AS SELECT EmpID,salary FROM employeeinfo;

/*retrieve the list of employee working on same department*/

SELECT DISTINCT E.EmpID, E.EmpFname, E.department
FROM Emloyeeinfo E,Emloyeeinfo e1
WHERE E.department = E1.department
AND E.EmpID != E1.EmpID;

/* retrieve the last 3 records from the Employeeinfo table*/

SELECT* FROM (employeeinfo
ORDER BY EmpID DESC LIMIT 3)
temp ORDER BY EmpID ASC;

SELECT* FROM temp ORDER BY EmpID ASC;

/*fetch detail of the employee whose EmpLname(last name) ends with 'A' and contains five alphabets*/

SELECT* FROM employeeinfo WHERE EmpLname LIKE '_____a'