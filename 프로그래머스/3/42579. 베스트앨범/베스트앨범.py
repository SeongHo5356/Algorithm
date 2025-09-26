def solution_before(genres, plays):
    answer = []    
    # [장르, 재생횟수, 고유 번호] 리스트
    temp = [[genres[i], plays[i], i] for i in range(len(genres))]
    
    # 각 장르에 맞게 정렬하고, 많이 재생될수록, 고유번호가 낮을 수록
    temp = sorted(temp, key=lambda x:(x[0], -x[1], x[2])) 
    
    dict_count = {}
    for i in range(len(genres)):
        if genres[i] in dict_count:
            dict_count[genres[i]] += plays[i] 
        else :
            dict_count[genres[i]] = plays[i]
    
    dict_count = sorted(dict_count.items(), key=lambda x: -x[1])
    for key, value in dict_count :
        cnt = 0
        for tp in temp:
            if tp[0] == key and cnt <= 1:
                answer.append(tp[2])
                cnt += 1
    
    return answer


def solution(genres, plays):
    answer = []
    songs = [[genres[i], plays[i], i] for i in range(len(plays))]
    songs.sort(key = lambda x:(x[0], -x[1], x[2]))
        
    dict_count = {}
    for genre, play, num in songs:
        if genre in dict_count:
            dict_count[genre] += play
        else:
            dict_count[genre] = play
    sorted_items = sorted(dict_count.items(), key=lambda x: -x[1])
    
    for key, value in sorted_items:
        cnt = 0
        for genre, play, num in songs:
            if genre == key and cnt < 2:
                answer.append(num)
                cnt += 1
    return answer
        
    