-- 코드를 입력하세요!!!!!!
SELECT MEMBER_ID, MEMBER_NAME, GENDER, date_format(DATE_OF_BIRTH, '%Y-%m-%d') AS DATE_OF_BIRTH
from MEMBER_PROFILE
Where  month(DATE_OF_BIRTH) = 3 and GENDER = 'W' and TLNO is not null
order by MEMBER_ID asc