#!/usr/bin/python3

def calculate_island_perimeter(grid):
    """Calculate the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        int: The perimeter of the island defined in the grid.
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    land_edges = 0
    land_size = 0

    for row in range(grid_height):
        for col in range(grid_width):
            if grid[row][col] == 1:
                land_size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    land_edges += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    land_edges += 1
    return land_size * 4 - land_edges * 2
