#!/usr/bin/python3
"""
Island preimeter calculator
"""


def island_perimeter(grid):
    """defition of island-perimeter"""
    peri = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row == 0 or grid[row - 1][column] == 0:
                    peri += 1

                if column == 0 or grid[row][column - 1] == 0:
                    peri += 1

                if row == len(grid) - 1 or grid[row + 1][column] == 0:
                    peri += 1

                if column == len(grid[row]) - 1 or grid[row][column + 1]:
                    peri += 1
    return peri + 1
