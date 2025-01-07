-- 코드를 입력하세요!!!
SELECT A.TITLE, A.BOARD_ID,B.REPLY_ID,B.WRITER_ID,B.CONTENTS,date_format(B.CREATED_DATE, '%Y-%m-%d') as CREATED_DATE
from USED_GOODS_BOARD A
join USED_GOODS_REPLY B
on A.BOARD_ID = B.BOARD_ID
where YEAR(A.CREATED_DATE) = '2022' and MONTH(A.CREATED_DATE) = '10'
order by B.CREATED_DATE asc, A.TITLE asc;



select a.title, a.board_id, b.reply_id, b.writer_id, b.contents, date_format(b.created_date, '%Y-%m-%d') as created_date
from used_goods_board a
join used_goods_reply b on a.board_id = b.board_id
where year(a.created_date) = '2022' and month(a.created_date) = '10'
order by b.created_date asc, a.title asc;