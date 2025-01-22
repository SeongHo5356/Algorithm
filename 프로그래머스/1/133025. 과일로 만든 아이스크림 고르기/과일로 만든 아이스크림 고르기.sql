-- 코드를 입력하세요!!!!!!!!!!!
-- SELECT FLAVOR from FIRST_HALF where TOTAL_ORDER > 3000;
-- select FLAVOR from ICECREAM_INFO where INGREDIENT_TYPE = 'fruit_based' order by total_order



SELECT A.flavor
FROM FIRST_HALF A
JOIN ICECREAM_INFO B ON A.FLAVoR = B.FLAVOR
WHERE A.TOTAL_ORDER > 3000 AND B.INGREDIENT_TYPE = 'fruit_based'
order by A.total_order desc