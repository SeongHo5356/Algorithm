import itertools

def minority_judgement(a):
    cnt = 0
    for i in range(1, a):
        if a % i == 0: cnt+=1
        if cnt == 2: break
    if cnt == 1: return True
    else: return False

# a자리 수 만들기
# answers 에서 몇개 빼서 a자리 수만듦
def make_num(answers): 
    lst = []
    for i in range(1, len(answers)+1):
        temp = list(itertools.permutations(answers, i))
        for cb in temp:
            b = int(str(cb).replace("(",'').replace(")",'').replace(',','').replace("\'",'').replace(' ',''))
            if b not in lst:
                lst.append(b)
    return lst
def solution(numbers):
    ans = 0
    numbers = [number for number in numbers] 
    lst = make_num(numbers)
    for num in lst:
        if minority_judgement(num) == True:
            ans+=1
        
    return ans