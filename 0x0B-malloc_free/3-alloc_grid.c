#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
    {
        return NULL;
    }

    int **grid = (int **) malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < height; i++)
    {
        grid[i] = (int *) malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        for (int j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return grid;
}

