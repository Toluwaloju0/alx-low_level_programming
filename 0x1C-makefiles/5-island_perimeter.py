#!/usr/bin/python3
""" A module to calculate the perimeter of an island"""


def island_perimeter(grid):
    """ A function to return the perimeter of a grid
    Args:
        grid: list of list of integers
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid)):
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
