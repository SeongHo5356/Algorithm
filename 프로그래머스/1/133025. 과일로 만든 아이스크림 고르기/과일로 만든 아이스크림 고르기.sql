-- 코드를 입력하세요!!
-- SELECT FLAVOR from FIRST_HALF where TOTAL_ORDER > 3000;
-- select FLAVOR from ICECREAM_INFO where INGREDIENT_TYPE = 'fruit_based' order by total_order

select A.FLAVOR
from FIRST_HALF A
join ICECREAM_INFO B on A.FLAVOR = B.FLAVOR
where A.TOTAL_ORDER > 3000 and B.INGREDIENT_TYPE = 'fruit_based'
order by A.TOTAL_ORDER DESC