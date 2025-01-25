-- 코드를 입력하세요!!!!!!!!!!!!!
select MEMBER_ID, MEMBER_NAME, GENDER, date_format(DATE_OF_BIRTH, '%Y-%m-%d') as DATE_OF_BIRTH
from member_profile
where gender = 'W' and TLNO is not null and month(DATE_of_birth) = 3 
order by member_id asc