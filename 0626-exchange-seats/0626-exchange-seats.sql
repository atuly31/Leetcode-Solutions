# Write your MySQL query statement below
SELECT 
CASE
  WHEN (id = (SELECT MAX(id) FROM Seat) AND id MOD 2 = 1) THEN id
  WHEN (id MOD 2 = 1) THEN id+1
  WHEN (id MOD 2 = 0) THEN id-1
END AS id, student
FROM Seat
ORDER BY 