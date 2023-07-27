#!/usr/bin/python3
"""A Technical interview question
"""

def island_perimeter(grid):
    """The perimeter of a square is 4L and for a rectangle is 2(L + W)
    Get perimeter for square by calculating the length of the grid
    and for the rectangle i iterate through the first cell or the cell
    with the maximum amount of elements and get the len of that cell
    then add it to the length of the grid, so width + length
    """
    square_len = len(grid)
    rec_len = len(grid)
    rec_width = None
    l_cell = grid[0]

    for rows in grid:
        for cells in rows:
            if isinstance(cells, list) and (len(cells) > len(l_cell)):
                l_cell = cells
    rec_width = len(l_cell)
    perimeter = (2 *(rec_width + rec_len)) - (2 * square_len)
    return perimeter
