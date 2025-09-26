-- 코드를 입력하세요
SELECT a.name, a.datetime
from ANIMAL_INS a left join ANIMAL_OUTS b on a.ANIMAL_ID = b.ANIMAL_ID
where b.datetime is null
order by a.datetime
limit 3;