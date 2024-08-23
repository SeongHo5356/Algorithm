import sys

def reverseSentence(sentence):
    reverseWordList = []

    for word in sentence:
        reverse_word = ''
        for i in range(len(word)):
            reverse_word += word[-(i+1)]
        reverseWordList.append(reverse_word)
    
    return reverseWordList


n = int(sys.stdin.readline())

for _ in range(n):
    sentence = sys.stdin.readline().split()
    reverseWordList = reverseSentence(sentence)
    
    answer =str(reverseWordList).replace('[', '').replace(']','').replace(',','').replace("'",'') 
    
    print(answer)
    