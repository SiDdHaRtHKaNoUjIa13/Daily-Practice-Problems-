# Write your MySQL query statement below
select P.product_Name ,S.year,S.price
from sales S
LEFT JOIN Product P
on s.product_id = p.product_id;