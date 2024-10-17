S = input()

for A in range(1, 1000):
    A_str = str(A)
    if S.startswith(A_str):
        pos = len(A_str)
        cur = A
        while pos < len(S):
            cur += 1
            cur_str = str(cur)
            if S.startswith(cur_str, pos):
                pos += len(cur_str)
            else:
                break
        if pos == len(S):
            B = cur
            print(f"{A} {B}")
            exit()
