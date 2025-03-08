def josephus_problem(n, k):
    people = list(range(1, n + 1))  # List of people from 1 to n
    result = []  # To store the removal order
    index = 0  # Start index
    
    while people:
        index = (index + k - 1) % len(people)  # Find the index of the next person to remove
        result.append(people.pop(index))  # Remove the person and append to result
    
    # Format the output as specified
    return "<" + ", ".join(map(str, result)) + ">"

# Input handling
n, k = map(int, input().split())
# Calculate the result
output = josephus_problem(n, k)
# Print the result
print(output)
