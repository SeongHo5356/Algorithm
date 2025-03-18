from collections import deque

def bfs(city_map, r, c):
    directions = {
        '+': [(-1, 0), (1, 0), (0, -1), (0, 1)],  # N, S, W, E
        '-': [(0, -1), (0, 1)],                   # W, E
        '|': [(-1, 0), (1, 0)],                   # N, S
        '*': []                                   # No movement
    }
    
    queue = deque([(0, 0, 1)])  # (row, col, intersections)
    visited = set((0, 0))
    
    while queue:
        x, y, intersections = queue.popleft()
        
        # Check if we reached the bottom right corner
        if (x, y) == (r - 1, c - 1):
            return intersections
        
        current_symbol = city_map[x][y]
        for dx, dy in directions[current_symbol]:
            nx, ny = x + dx, y + dy
            
            # Check bounds and visited status
            if 0 <= nx < r and 0 <= ny < c and (nx, ny) not in visited and city_map[nx][ny] != '*':
                visited.add((nx, ny))
                queue.append((nx, ny, intersections + 1))
    
    return -1  # No path found

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        r = int(data[index])
        index += 1
        c = int(data[index])
        index += 1
        city_map = [data[index + i] for i in range(r)]
        index += r
        
        result = bfs(city_map, r, c)
        results.append(result)
    
    for res in results:
        print(res)
