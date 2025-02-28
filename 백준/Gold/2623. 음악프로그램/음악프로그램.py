from collections import deque

def topological_sort(n, graph, indegree):
    order = []
    queue = deque()
    
    # Start with all nodes with no incoming edges
    for i in range(1, n + 1):
        if indegree[i] == 0:
            queue.append(i)
    
    while queue:
        current = queue.popleft()
        order.append(current)
        
        # Decrease the indegree of neighboring nodes
        for neighbor in graph[current]:
            indegree[neighbor] -= 1
            if indegree[neighbor] == 0:
                queue.append(neighbor)
    
    # If the order contains all nodes, we have a valid topological sort
    if len(order) == n:
        return order
    else:
        return []  # Cycle detected or not all nodes were included

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    # Read N (number of singers) and M (number of assistant PDs)
    N, M = map(int, data[0].split())
    
    # Initialize the graph and indegree list
    graph = [[] for _ in range(N + 1)]
    indegree = [0] * (N + 1)
    
    # Read each assistant PD's order
    for i in range(1, M + 1):
        order = list(map(int, data[i].split()))
        k = order[0]
        for j in range(1, k):
            u = order[j]
            v = order[j + 1]
            graph[u].append(v)  # u -> v
            indegree[v] += 1     # Increase indegree of v
    
    # Perform topological sorting
    result = topological_sort(N, graph, indegree)
    
    # Output result
    if result:
        for singer in result:
            print(singer)
    else:
        print(0)  # No valid ordering found
