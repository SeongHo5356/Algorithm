-- 코드를 작성해주세요
select count(*) as FISH_COUNT
from FISH_INFO A
join FISH_NAME_INFO B 
on A.FISH_TYPE = B.FISH_TYPE
where B.FISH_NAME in ('BASS', 'SNAPPER')


# SELECT count(*) AS FISH_COUNT
# FROM fish_info as f
# WHERE EXISTS(
#     SELECT *
#     FROM fish_name_info as n
#     WHERE (f.fish_type = n.fish_type) AND (n.fish_name IN ('BASS', 'SNAPPER'))
# )