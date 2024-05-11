#!/usr/bin/python3
""" A module to calculate the perimeter of an island"""


def check_0(grid):
    """To check if grid contains 0
    Args:
        grid: list of list of number
    """

    for a in grid:
        for b in a:
            if b == 0:
                return 1
    return 0


def island_perimeter(grid):
    """ A function to return the perimeter of a grid
    Args:
        grid: list of list of integers
    """

    try:
        perimeter = 0

        if check_0(grid) == 0:
            return 2 * (len(grid) + len(grid[0]))

        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    if i == 0 or grid[i - 1][j] == 0:
                        perimeter += 1
                    if i == len(grid) - 1 or grid[i + 1][j] == 0:
                        perimeter += 1
                    if j == 0 or grid[i][j - 1] == 0:
                        perimeter += 1
                    if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                        perimeter += 1
        return perimeter
    except Exception:
        return 0
