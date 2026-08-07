# Write your MySQL query statement below
with cte as(select E1.name,count(E2.managerId) as report  from Employee E1 inner join Employee E2 on E1.id=E2.managerId group by E1.id)
select name from cte  where report>4
