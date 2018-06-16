#!/usr/bin/python3
'''Island perimeter algorithm'''


def island_perimeter(grid):
    '''Finds perimeter of an island'''
    height = len(grid)
    prev = []
    total = 0
    for x in grid:
        width = len(x)
    if width > 0 and height > 0:
        for x in range(width - 1):
            prev.append(0)
        for h in range(height):
            for w in range(width):
                if grid[h][w]:
                    total += 4
                    if height * width == 1:
                        return
                    if w > 0:
                        if prev[w - 1]:
                            total -= 2
                        if grid[h][w - 1]:
                            total -= 2
                        prev[w - 1] = grid[h][w]
    return(total)
