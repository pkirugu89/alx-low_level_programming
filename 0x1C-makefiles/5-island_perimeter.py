#!/usr/bin/python3
"""
Function that finds the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Function that calculates the island's perimeter.
    Args:
        grid (List[List[int]]): A list of lists representing the island
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            print(f"Processing cell ({i}, {j}), value: {grid[i][j]}")
            if grid[i][j] == 1:
                # Every land cell contributes 4 to the perimeter
                perimeter += 4
                print(f"Perimeter after adding 4: {perimeter}")
            # checks if there's a left island
            if j > 0 and grid[i][j - 1] == 1:
                # Deduct 2 if the left neighbor is also land
                perimeter -= 2
                print(f"Perimeter after deducting 2: {perimeter}")
            # check if there's an island northwards (top)
            if i > 0 and grid[i - 1][j] == 1:
                # Deduct 2 if the top neighbor is also land
                perimeter -= 2
                print(f"Perimeter after deducting 2: {perimeter}")

    return perimeter
