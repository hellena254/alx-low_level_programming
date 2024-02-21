#!/usr/bin/python3


def island_perimeter(grid):
	"""
	Calculates the perimeter of the island described in the grid.

	Args:
	- grid: List of lists of integers, where 1 represents land and 0 represents water.

	Returns:
	- Int: The perimeter of the island.
	"""

	perimeter = 0

    	# Iterate through each cell in the grid
	for i in range(len(grid)):
		for j in range(len(grid[0])):
			if grid[i][j] == 1:
                		# Check top
                		if i == 0 or grid[i-1][j] == 0:
					perimeter += 1
                		# Check bottom
                		if i == len(grid) - 1 or grid[i+1][j] == 0:
                    			perimeter += 1
                		# Check left
                		if j == 0 or grid[i][j-1] == 0:
                    			perimeter += 1
               	 		# Check right
                		if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    			perimeter += 1

	return perimeter
