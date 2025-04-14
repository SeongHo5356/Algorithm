def solution1(phone_book):
    answer = True
    phone_book.sort()
    for i in range(len(phone_book)-1):
        if phone_book[i+1][:len(phone_book[i])] == phone_book[i]:
            answer = False
    return answer

















def solution(phone_book):
    phone_book.sort()
    for i in range(len(phone_book)-1):
        if phone_book[i+1][:len(phone_book[i])] == phone_book[i]:
            return False
    return True



