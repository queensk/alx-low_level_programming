#!/usr/bin/python3
"""
Module that calculates the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Args:
        grid: A list of lists of integers,
        where 0 represents water and 1 represents land.

    Returns:
        The perimeter of the island in the grid.
    """

    # Set the initial perimeter to zero
    perimeter = 0

    # Iterate over the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the current cell is land
            if grid[i][j] == 1:
                # Add 4 to the perimeter for every land cell
                perimeter += 4

                # If the cell to the left is land,
                # subtract 2 from the perimeter
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

                # If the cell above is land, subtract 2 from the perimeter
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

    # Return the calculated perimeter
    return perimeter
