-- 코드를 작성해주세요
select count(*) as FISH_COUNT
from FISH_INFO A
join FISH_NAME_INFO B 
on A.FISH_TYPE = B.FISH_TYPE
where B.FISH_NAME in ('BASS', 'SNAPPER')