#!/usr/bin/python3

"""
Defines a function island_perimeter that returns
the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Parameters:
    grid (list of lists of integers):
        A list of lists of integers representing the grid.
        0 represents a water zone, 1 represents a land zone.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check all four sides
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
