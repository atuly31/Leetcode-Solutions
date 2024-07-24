# Write your MySQL query statement below
select u.name, sum(amount) as balance    from Users as u
join Transactions as t on u.account = t.account

group by t.account having sum(amount)>10000 ;