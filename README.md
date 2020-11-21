BSQ
===

Time:       3 weeks

Team:       1

Language:   C


The project
----

You must find the largest possible square on a board while avoiding obstacles. The board is represented by a file passed as the program’s argument. The file is valid if it is respecting those constraints:
* its first line contains the number of lines on the board (and only that)
* “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for theother lines
* all of the lines are of the same length (except the first one)
* it contains at least one line
* each line is terminated by ‘\n’.You program must print the board, with some “.” replaced by “x” to represent the largest square you found

> If ever there are several solutions, you have to represent only the highest square. If theyare still several solutions, choose the square to the left.

## AUTHORIZED FUNCTIONS

The only system calls allowed are the following ones:
* open
* read
* write
* close
* malloc
* free
* stat

## USAGE:

```
>> ./bsq -h
USAGE
    ./bsq file

DESCRIPTION
    file    file that contains the map
```

## EXAMPLE:

```
>> cat example
. . . o
. . . .
o . . o
>> ./bsq example
. x x o
. x x .
o . . o
```

Author [**Corentin COUTRET-ROZET**](https://github.com/sheiiva)