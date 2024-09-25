import itertools 


def solution(word):
    cnt = 0
    a = ['A','E','I','O','U']
    ans = []    # AEIOU의 조합으 저장할 리스트
    word = tuple([n for n in word]) # word to list: "AA" -> ('A','A')

    for i in range(1,6):
        b =list(itertools.product(a, repeat = i))
        ans += b
    
    ans = sorted(ans)
    ans[0] = tuple(('A'))
    
    for i in range(len(ans)):
        if len(word) == 1:
            if ans[i][0] == word[0]:
                print(i+1)
                return i+1
        if ans[i] == word: 
            print(i+1)
            return i+1




        

        