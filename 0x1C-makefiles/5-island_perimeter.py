#!/usr/bin/python3
"""island
    """


def island_perimeter(grid):
    """perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i > 0 and grid[i-1][j] == 0:
                    perimeter += 1
                if j > 0 and grid[i][j-1] == 0:
                    perimeter += 1
                if i < j-1 and grid[i+1][j] == 0:
                    perimeter += 1
                if j < i-1 and grid[i][j+1] == 0:
                    perimeter += 1
    return(perimeter * 2)
