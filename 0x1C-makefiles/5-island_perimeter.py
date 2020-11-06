#!/usr/bin/python3
"""Defines an island perimeter."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    toul = len(grid)
    oordh = len(grid[0])
    mourabamahsour = 0
    mourabaa = 0

    for i in range(toul):
        for j in range(oordh):
            if grid[i][j] == 1:
                mourabaa += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    mourabamahsour += 2
                    
    return (mourabaa * 4) - (mourabamahsour * 2)
