def find_AB(s):
    n = len(s)
    
    # A의 자리수는 1, 2, 3자리일 수 있다. 따라서 최대 3자리까지 시도.
    for length in range(1, 4):
        # A 후보는 s의 첫 length 자리
        A = int(s[:length])
        current_number = A
        i = length
        valid = True
        
        # 계속해서 A, A+1, A+2, ... 를 맞추는지 확인
        while i < n:
            current_number += 1
            next_number_str = str(current_number)
            next_len = len(next_number_str)
            
            # 다음 숫자들이 맞아 떨어지는지 확인
            if s[i:i + next_len] != next_number_str:
                valid = False
                break
            
            # 다음 숫자로 넘어가기 위해 인덱스 이동
            i += next_len
        
        if valid:
            return A, current_number
    
    return None

# 입력 받기
S = input().strip()

# 결과 출력
A, B = find_AB(S)
print(A, B)
