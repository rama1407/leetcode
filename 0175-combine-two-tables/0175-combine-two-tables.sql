# Write your MySQL query statement below
select firstname,lastname,city,state From
Person left Join Address 
ON Person.PersonId = Address.PersonID
;

