-- 코드를 작성해주세요
select ID,	LENGTH
from FISH_INFO
where LENGTH > 10
order by LENGTH desc, ID
limit 10