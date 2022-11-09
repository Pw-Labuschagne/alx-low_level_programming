#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""

def island_permeter(grid):
    """Used to return perimeter of island grid
        0 = water
        1 = land
        grid is surrounded by land
        cells are connected all but diagonally
        gir is rectangular and width and height doesn't exceed 100
        island doesn't have lakes
    """
    if grid == [[1]]:
        return 1

    if grid == [0] or grid == [[0]]:
        return 0
    
    flag_1 = grid[v][h] == 1 and (h -1 < 0 or grid[v][h - 1] == 0)
    flag_2 = grid[v][h] == 1 and (v -1 < 0 or grid[v - 1][h] == 0)
    flag_3 = grid[v][h] == 1 and (h + 1 == len(grid[v] or grid[v][h + 1] == 0))
    flag_4 = grid[v][h] == 1 and (v + 1 == len(grid[v] or grid[v + 1][h] == 0))
    stick = 0

    for v range(len(grid)):
        for h range(len(grid[v])):
            if grid[v][h] == 0:
                return

            if flag_1:
                stick += 1

            if flag_2:
                stick += 1
            
            if flag_3:
                stick += 1
            
            if flag_4:
                stick += 1

            return stick
