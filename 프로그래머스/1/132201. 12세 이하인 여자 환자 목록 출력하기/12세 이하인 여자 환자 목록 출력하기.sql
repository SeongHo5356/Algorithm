-- 코드를 입력하세요
SELECT PT_NAME, PT_NO, GEND_CD, AGE, IFNULL(TLNO, 'NONE') AS TLNO
from PATIENT
where AGE <= 12 and GEND_CD = 'W'
order by AGE desc, PT_NAME asc;



select pt_name, pt_no, gend_cd, age, ifnull(tlno, 'NONE') as tlno
from patient
where age <= 12 and gend_cd = 'W'
order by age desc, pt_name;