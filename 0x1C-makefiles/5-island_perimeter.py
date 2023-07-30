#!/usr/bin/python3
"""A Technical interview question
"""

def island_perimeter(grid):
    """Took me 2 days
    """
    n_row = len(grid)
    n_col = len(grid[0])
    perimeter = 0

    for r in range(n_row):
        for c in range(n_col):
            if grid[r][c] == 1:
                if r == 0 or grid[r - 1][c] == 0:
                    perimeter += 1
                if r == n_row - 1 or grid[r + 1][c] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c - 1] == 0:
                    perimeter += 1
                if c == n_col - 1 or grid[r][c + 1] == 0:
                    perimeter += 1
    return perimeter
