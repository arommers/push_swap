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

To sort the input arguments, the Push Swap program uses two stacks (Stack A and B) and a set of allowed operations. It starts with all the numbers in stack A, and an empty stack B. The allowed operations include:

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

The goal is to sort the integers in Stack A in ascending order, using only the allowed moves listed above in the least amount of moves. The program will write each executed move to the `STDOUT` followed by a `'\n`. After running push swap, Stack A will be sorted and Stack B empty.

An example:

`./push_swap 548 0 -2146 12 32`
`ra`\
`pb`\
`pb`\
`ra`\
`ra`\
`ra`\
`pa`\
`pa`\
`sa`

These moves are realized by pointer manipulation in our linked lists.

## Approach

- Parsing, put numbers in stack A if no errors are detected. Each individual number/value was stored in a node of a linked list.
- Assign an index to each node and respective value.
- Check if the numbers in Stack A are all sorted. If so, end the program without printing anything otherwise sort and print the executed moves to the `STDOUT`.

## Algorithm

When approaching the Push Swap project, one of the biggest challenges was deciding which sorting algorithm to use. There amount of algorithms to choose from, each with its own strengths and weaknesses are plenty. However, at the time, I had limited knowledge of the efficiency of these algorithms, so it was challenging to make an informed decision.

After some research and experimentation, I ultimately chose to implement radix sorting. Radix sort is a non-comparative sorting algorithm that sorts data by grouping elements into "buckets" based on their digits or bits. In our case the two buckets are our two stacks. I was drawn to radix sorting because of its efficiency with large numbers of input and the use of bitwise operations. Up until this point I knew of bitwise operations, but never had the opportunity to apply them. It seemed like a great opportinity.

The radix sort algorithm is for non-negative integers. However, we’ll have negative numbers in this project, so we should simplify the numbers before we start. 

The reason for this is twofold. First, Radix sort is a sorting algorithm that works by sorting the elements based on their digits. It sorts the elements by comparing the digits at different positions in each element. Since radix sort relies on the relative order of digits within the elements,  it can only sort non-negative integers by their binary, decimal, or other positional representation. Negative integers cannot be sorted directly with   radix sort because their binary representation involves a sign bit.\
Second, because radix's efficienct is based on the amount of bits respresenting an integer. If we can reduce our big numbers to, at maximum, the        biggest index in our linked list, it will significantly reduce

For example, if we need to sort these numbers

```87 -487 781 -100 101 0 1```

We want to replace them with 0, 1, 2, ...

```-487 -100 0 1 87 101 781``` becomes ```0 1 2 3 4 5 6```

```87 -487 781 -100 101 0 1``` becomes ```4 0 6 1 5 2 3```

So, instead of sorting ```87 -487 781 -100 101 0 1```, now we only need to sort ```4 0 6 1 5 2 3```.

With this idea, we can simplify any list of integers to make them in the range [0,N) ( ≥ 0 and < N, N is the size of the list).

In binary sorting of radix sort, each element in the list is viewed as a string of bits, and the algorithm sorts the elements based on the values of each bit position, starting from the least significant bit (rightmost) to the most significant bit (leftmost). This process is repeated until all bit positions have been considered, and the list is sorted. As mentioned above, one of the reasons why we reduce the actual numbers to inde values. Less bits to take into consideration.

#### The Actual Sorting

When we take our earlier input ```4 0 6 1 5 2 3``` their binary values will be ```100 000 110 001 101 010 11```.
The first argument will be at the top of our stack and subsequent numbers will be added behind it.

Starting at the least significant bit, we use bitwise operations `(ARG & 1)` and check to see if there is either a `1` or a `0`
If it's a 0 (lower in value), it get's pushed to Stack B, otherwise it rotates to the bottom. After all 0's have been pushed to Stack B, we push em all back to Stack A sorting the least significant bit position in 0's and 1's. We then move one bit to the left and perform the same sorting process.

```bash
100                             100
000                             000 
110                             110
001                    010      010
101             001    110      001
010             101    000      101
011             011    100      011
----   ----     ----   ----     ----   ----
a      b        a      b        a      b
```
We move over one bit and repeat this process.

```bash
100                             100
000                             000 
110                             001
010                    101      101
001             010    001      010
101             110    000      110
011             011    100      011
----   ----     ----   ----     ----   ----
a      b        a      b        a      b
```

Our list is now sorted for the second digit. We repeat this process one last time for the last available digit.

```bash
100                             000
000                             001 
001                             010
101                    011      011
010             100    010      100
110             101    001      101
011             110    000      110
----   ----     ----   ----     ----   ----
a      b        a      b        a      b
```

As you can see, the list is now completely sorted.

## Sources

- [Radix sort](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
- [Visualizer](https://github.com/o-reo/push_swap_visualizer)
