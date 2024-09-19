import itertools
def solution(health, dungeons):
    ans = 0
    now = [dungeon[0] for dungeon in dungeons]  #80 50 30
    use = [dungeon[1] for dungeon in dungeons]  #20 40 10
    len_dungeon = len(dungeons)
    # [(0, 1, 2), (0, 2, 1), (1, 0, 2), (1, 2, 0), (2, 0, 1), (2, 1, 0)]
    orders = list(itertools.permutations([i for i in range(len_dungeon)], len_dungeon))
    temp = health
    for dungeon_order in orders:
        cnt = 0
        health = temp
        for order in dungeon_order:
            if now[order] <= health:
                health -= use[order]
                cnt += 1
        if cnt >= ans:
            ans = cnt

    return ans