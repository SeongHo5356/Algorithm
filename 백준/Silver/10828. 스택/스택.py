import sys
input = sys.stdin.read

n, *commands = input().splitlines()

stack = []
result = []

for command in commands:
    if command.startswith('push'):
        _, num = command.split()
        stack.append(int(num))

    elif command == 'top':
        result.append(stack[-1] if stack else -1)

    elif command == 'size':
        result.append(len(stack))

    elif command == 'pop':
        result.append(stack.pop() if stack else -1)

    elif command == 'empty':
        result.append(0 if stack else 1)

# 결과를 한 번에 출력
sys.stdout.write('\n'.join(map(str, result)) + '\n')
