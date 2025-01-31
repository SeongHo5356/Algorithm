-- 코드를 입력하세요!!
SELECT a.rest_id, a.REST_NAME, a.food_type, a.favorites, a.address, round(avg(b.review_score),2) as score 
from rest_info a 
join rest_review b on a.rest_id = b.rest_id
group by a.rest_id
having a.address like '서울%'
order by score desc, favorites desc