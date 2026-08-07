# Write your MySQL query statement below
select name,bonus from EMPLOYEE E left join BONUS B on e.empID=B.empID where bonus<1000 or bonus is null
