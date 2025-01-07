-- 코드를 입력하세요!
SELECT BOOK_ID, date_format(PUBLISHED_DATE, '%Y-%m-%d') as PUBLISHED_DATE
from BOOK
where YEAR(PUBLISHED_DATE) = '2021' and CATEGORY = '인문'
order by PUBLISHED_DATE;



select book_id, date_format(published_date,'%Y-%m-%d') as published_date
from book
where category = '인문' and year(published_date) = 2021
order by published_date;