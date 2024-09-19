-- 코드를 입력하세요
SELECT USER_ID, PRODUCT_ID
from ONLINE_SALE
group by USER_ID, PRODUCT_ID
HAVING count(*) > 1
order by USER_ID asc, PRODUCT_ID desc