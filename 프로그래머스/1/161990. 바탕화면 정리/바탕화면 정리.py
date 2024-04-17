def solution(wallpaper):
    x, y = [], []
    for i in range(len(wallpaper)):
        for k in range(len(wallpaper[i])):
            if wallpaper[i][k] == '#':
                x.append(i)
                y.append(k)
    answer = [min(x), min(y), max(x)+1, max(y)+1]
    return answer