#!/usr/bin/python3
"""A Technical interview question
"""

def island_perimeter(grid):
    n_row = len(grid)
    n_col = len(grid[0])
    col_count = 0
    row_count = 0

    # maximum none zero
    # check for the row that has more than none zero character
    # creates a new list that forms from each column in grid
    max_nz = max(sum(grid[r][c] for r in range(n_row)) for c in range(n_col))
    new_list = [[0 for _ in range(max_nz)] for _ in range(n_col)]
    for col in range(n_col):
        non_zero_count = sum(grid[row][col] for row in range(n_row))
        for i in range(non_zero_count):
            new_list[col][i] = 1

    for rows in grid:
        if isinstance(rows, list):
            if 1 in rows:
                row_count += 1

    for rows in new_list:
        if isinstance(rows, list):
            if 1 in rows:
                col_count += 1
    parameter = 2 * (row_count + col_count)
    return parameter
