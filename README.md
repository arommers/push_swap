<img src="https://github.com/arommers/push_swap/blob/master/Codam%20Logo.png?raw=true" alt="CODAM" style="max-width: 50%;">


# Push Swap

Push Swap is a sorting algorithm implementation designed as a project for School 42. The program takes an unsorted list of integers as input and should sort integers in ascending order using only two stacks and a limited set of operations. The aim of the project is to test the student's understanding of various sorting algorithms and data structures and their ability to implement this in code.

In this repository, you'll find my implementation of the push swap algorithm, as well as detailed information on how to use the program and how it works under the hood. I've also included my thought process and some tips for how to approach the project. Whether you're a 42 student looking to learn more about algorithm design and optimization, or just someone curious about the push swap algorithm, I hope this repository will be a helpful resource for you.

## Installation and Usage

To install Push Swap [download](https://github.com/arommers/push_swap/archive/master.zip) the program and use the command 'cd' to move to the push_swap folder.

Run 'make' to compile all the files and run the executable 'push_wap' followed by a random number of integers

```bash
./push_swap 24 -1 5673 -298 69 420
```
## Instructions

To sort the input list, the Push Swap program uses two stacks and a set of allowed operations. The program starts with all the numbers in stack A, and an empty stack B. The allowed operations include:

- `sa`: swap a - swap the first two elements of stack A
- `sb`: swap b - swap the first two elements of stack B
- `ss`: swap both - swap the first two elements of both stacks A and B
- `pa`: push a - take the first element from stack B and put it on top of stack A
- `pb`: push b - take the first element from stack A and put it on top of stack B
- `ra`: rotate a - shift all elements of stack A up by one. The first element becomes the last one
- `rb`: rotate b - shift all elements of stack B up by one. The first element becomes the last one
- `rr`: rotate both - rotate both stacks A and B at the same time
- `rra`: reverse rotate a - shift all elements of stack A down by one. The last element becomes the first one
- `rrb`: reverse rotate b - shift all elements of stack B down by one. The last element becomes the first one
- `rrr`: reverse rotate both - reverse rotate both stacks A and B at the same time

## Sources

- [Radix sort](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
- [Visualizer](https://github.com/o-reo/push_swap_visualizer)
