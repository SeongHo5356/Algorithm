I, N, K = map(int, input().split())
ink_string = input()
grid = []
player_pos = None

for y in range(N):
    row = list(input())
    for x, cell in enumerate(row):
        if cell == '@':
            player_pos = (y, x)
            row[x] = '.'  # Remove player from grid, we'll track position separately
    grid.append(row)

commands = input()

ink_amount = 0
jump_count = 0
I_len = len(ink_string)
N_range = range(N)

for c in commands:
    if c == 'U':
        ny, nx = player_pos[0] - 1, player_pos[1]
    elif c == 'D':
        ny, nx = player_pos[0] + 1, player_pos[1]
    elif c == 'L':
        ny, nx = player_pos[0], player_pos[1] - 1
    elif c == 'R':
        ny, nx = player_pos[0], player_pos[1] + 1
    elif c == 'j':
        ink_amount += 1
        continue  # Go to next command
    elif c == 'J':
        jump_count += 1
        ink_color = ink_string[(jump_count - 1) % I_len]
        m_i = ink_amount
        y_i, x_i = player_pos

        for dy in range(-m_i, m_i + 1):
            max_dx = m_i - abs(dy)
            for dx in range(-max_dx, max_dx + 1):
                a, b = y_i + dy, x_i + dx
                if 0 <= a < N and 0 <= b < N:
                    cell = grid[a][b]
                    if cell == '#' or ('A' <= cell <= 'Z'):
                        grid[a][b] = ink_color
        ink_amount = 0
        continue  # Go to next command
    else:
        continue  # Invalid command, ignore

    # Movement commands
    if 0 <= ny < N and 0 <= nx < N:
        cell = grid[ny][nx]
        if cell != '#' and not ('A' <= cell <= 'Z'):
            player_pos = (ny, nx)
        # else: movement blocked by obstacle, ignore command
    # else: movement out of bounds, ignore command

# After processing all commands, place the player back on the grid
grid[player_pos[0]][player_pos[1]] = '@'

# Output the grid
for row in grid:
    print(''.join(row))
