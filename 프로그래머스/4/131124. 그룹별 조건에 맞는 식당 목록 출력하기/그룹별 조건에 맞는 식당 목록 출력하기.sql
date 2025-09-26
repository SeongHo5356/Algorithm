-- 코드를 입력하세요
SELECT a.MEMBER_NAME, b.REVIEW_TEXT, DATE_FORMAT(b.REVIEW_DATE,"%Y-%m-%d") as REVIEW_DATE
from MEMBER_PROFILE a 
join REST_REVIEW b on a.MEMBER_ID = b.MEMBER_ID
where a.MEMBER_ID = (select member_id
                     from REST_REVIEW 
                     group by member_id
                     order by COUNT(member_id) desc limit 1)
order by REVIEW_DATE, REVIEW_TEXT
                     