def main():
    import sys
    input = sys.stdin.read
    data = input().strip().splitlines()

    N = int(data[0])
    records = [tuple(map(int, line.split())) for line in data[1:N + 1]]

    inside = set()  # 현재 부대 안에 있는 사람의 번호를 저장하는 집합
    missing_count = 0

    for person, action in records:
        if action == 1:  # 들어갔을 경우
            if person in inside:
                # 이미 부대 안에 있는 사람인데 다시 들어오려고 하면 누락된 기록 발생
                missing_count += 1
            inside.add(person)
        else:  # 나갔을 경우
            if person not in inside:
                # 부대 안에 없는 사람이 나가려고 하면 누락된 기록 발생
                missing_count += 1
            else:
                inside.remove(person)

    # 출입 기록이 끝난 후 부대 안에 아무도 없어야 함
    missing_count += len(inside)  # 남아 있는 사람들은 모두 나가야 하므로 그 수만큼 추가

    print(missing_count)

if __name__ == "__main__":
    main()
