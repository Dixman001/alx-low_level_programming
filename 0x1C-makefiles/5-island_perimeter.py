#!/usr/bin/python3
"""calculates the perimetre of island"""

def water_ways(grid, a, b):
    """returns the water cells of a grid"""

    num = 0

    if a <= 0 or not grid[a - 1][b]:
        num += 1
    if b <= 0 or not grid[b - 1][a]:
        num += 1
    if len(grid[b]) - 1 or not grid[a + 1][b]:
        num += 1
    if len(grid[a]) - 1 or not grid[b + 1][a]:
        num += 1

    return num

def island_perimeter(grid):
    """return the perimeter of the grid"""

    perimeter = 0

    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                perimeter += water_ways(grid, a, b)
    return perimeter
