#!/usr/bin/python3
""" Technical interview preparation """


def island_perimeter(grid):
    """ Function that returns the perimeter of the island
    described in grid"""

    perimeter = 0
    add = 0
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                add = 0
                count = count + 1
                if 0 <= (j + 1) < len(grid[i]):
                    add = add + grid[i][j + 1]
                if 0 <= (j - 1) < len(grid[i]):
                    add = add + grid[i][j - 1]
                if 0 <= (i + 1) < len(grid):
                    add = add + grid[i + 1][j]
                if 0 <= (i - 1) < len(grid):
                    add = add + grid[i - 1][j]

                if add == 0 and count != 0:
                    perimeter = perimeter + 4
                if add == 1:
                    perimeter = perimeter + 3
                if add == 2:
                    perimeter = perimeter + 2
                if add == 3:
                    perimeter = perimeter + 1
                if add == 4:
                    perimeter = perimeter + 0
    return(perimeter)
