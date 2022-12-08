# 0x1C. C - Makefiles
## island_perimeter
- A Python function that calculates the perimeter of an island in a grid.
> Installation
- To install the island_perimeter function, clone this repository and run the following command:
```
pip install .
```

> Usage
- To use the island_perimeter function, import it from the island_perimeter module:
```
from island_perimeter import island_perimeter
```
- Then, call the island_perimeter function with a grid as the input argument:
```
grid = [[0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]]

perimeter = island_perimeter(grid)
```
- The island_perimeter function returns the perimeter of the island in the grid, which is the total length of the island's boundary.

> Arguments

- The island_perimeter function takes a single argument:

- grid: A list of lists of integers, where 0 represents water and 1 represents land. The grid must be rectangular and cannot be empty.
> Returns
- The island_perimeter function returns an integer representing the perimeter of the island in the grid.

> Example
- Here is an example of how to use the island_perimeter function:

from island_perimeter import island_perimeter

```
grid = [[0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]]

perimeter = island_perimeter(grid)

print(perimeter)  # Output: 12
```
- This code will calculate the perimeter of the island in the given grid and print the result to the console. The output will be 12, which is the correct perimeter of the island in the given grid.

> License
- This project is licensed under the MIT License. See the [LICENSE](https://opensource.org/licenses/MIT) file for details.