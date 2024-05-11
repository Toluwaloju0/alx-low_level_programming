#!/usr/bin/python3
""" A module to calculate the perimeter of an island"""


def island_perimeter(grid):
    """ A function to return the perimeter of a grid
    Args:
        grid: list of list of integers
    """

    try:
        perimeter = 0

        for a in grid:
            for b in a:
                if b == 1:
                    continue
                else:
                    for i in range(len(grid)):
                        for j in range(len(grid[i])):
                            if grid[i][j] == 1:
                                if i == 0 or grid[i - 1][j] == 0:
                                    perimeter += 1
                                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                                    perimeter += 1
                                if j == 0 or grid[i][j - 1] == 0:
                                    perimeter += 1
                                if j == len(grid[i]) - 1:
                                    perimeter += 1
                                if grid[i][j + 1] == 0:
                                    perimeter += 1

                    return perimeter
            return 2 * (len(grid) + len(grid[0]))

    except Exception:
        return 0
