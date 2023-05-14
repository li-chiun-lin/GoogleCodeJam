# Problem

Long ago, an alien civilization built a giant monument. The floor of the monument looked like this:

```text
###############
#.............#
#.###########.#
#.#.........#.#
#.#.#######.#.#
#.#.#.....#.#.#
#.#.#.###.#.#.#
#.#.#.#.#.#.#.#
#.#.#.###.#.#.#
#.#.#.....#.#.#
#.#.#######.#.#
#.#.........#.#
#.###########.#
#.............#
###############
```

Each '#' represents a red tile, and each '.' represents a blue tile. The pattern went on for miles and miles (you may, for the purposes of the problem, assume it was infinite). Today, only a few of the tiles remain. The rest have been damaged by methane rain and dust storms. Given the locations and colours of the remaining tiles, can you find the center of the pattern?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each one starts with a line containing N, the number of remaining tiles. The next N lines each contain Xi, Yi, and the tile colour (either '#' or '.').
