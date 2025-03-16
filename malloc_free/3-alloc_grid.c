#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers and initialises it to 0
 * @width: number of columns
 * @height: number of rows
 * Description: as above
 * Return: pointer to allocated 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i--)
free(grid[i]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
