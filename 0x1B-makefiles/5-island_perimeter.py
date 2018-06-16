#!/usr/bin/python3
'''Island perimeter algorithm'''


def island_perimeter(grid):
    height = len(grid)
    prev = []
    total = 0
    for x in grid:
        width = len(x)
    if width > 2 and height > 2:
        for x in range(width - 2):
            prev.append(0)
        for h in range(1, height - 1):
            for w in range(1, width - 1):
                if grid[h][w]:
                    total += 4
                    if prev[w - 1]:
                        total -= 2
                    if grid[h][w - 1]:
                        total -= 2
                prev[w - 1] = grid[h][w]
    return(total)
