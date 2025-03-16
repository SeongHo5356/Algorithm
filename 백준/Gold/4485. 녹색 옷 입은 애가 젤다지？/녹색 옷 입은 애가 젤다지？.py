import sys
import heapq

def dijkstra(cave, n):
    # Directions for moving up, down, left, right
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    # Priority queue for the minimum cost path
    pq = [(cave[0][0], 0, 0)]  # (cost, x, y)
    # Initialize the distance table
    dist = [[float('inf')] * n for _ in range(n)]
    dist[0][0] = cave[0][0]

    while pq:
        current_cost, x, y = heapq.heappop(pq)

        # If we reached the bottom-right corner, return the cost
        if x == n - 1 and y == n - 1:
            return current_cost

        # Explore neighbors
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                new_cost = current_cost + cave[nx][ny]
                if new_cost < dist[nx][ny]:
                    dist[nx][ny] = new_cost
                    heapq.heappush(pq, (new_cost, nx, ny))

    return dist[n - 1][n - 1]

def main():
    input = sys.stdin.read
    data = input().strip().splitlines()
    
    index = 0
    problem_number = 1
    results = []

    while index < len(data):
        n = int(data[index])
        if n == 0:
            break
        
        index += 1
        cave = []
        for _ in range(n):
            row = list(map(int, data[index].split()))
            cave.append(row)
            index += 1

        min_cost = dijkstra(cave, n)
        results.append(f"Problem {problem_number}: {min_cost}")
        problem_number += 1

    print("\n".join(results))

if __name__ == "__main__":
    main()
