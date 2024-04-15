# Write your MySQL query statement below
# Write your MySQL query statement below
(select u.name as results
from Users u
join MovieRating m on u.user_id = m.user_id
group by u.user_id
order by count(movie_id) desc, name asc
limit 1)
union all
(select title as results
from Movies u
join MovieRating m on u.movie_id = m.movie_id
where year(created_at) = '2020' and month(created_at) = '02'
group by u.movie_id
order by avg(rating) desc, title asc
limit 1)