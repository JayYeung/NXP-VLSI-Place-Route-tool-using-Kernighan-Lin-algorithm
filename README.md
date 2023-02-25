# VLSI-Place-Route-tool-using-Kernighan-Lin-algorithm
Developed a C++ based VLSI Place &amp; Route tool by using the Kernighan-Lin algorithm to optimize the data structure and speed up the run time from 50 to 4500 gates in seven hours for NXP Semiconductors N.V. NXP Semiconductors N.V. is a Dutch semiconductor designer and manufacturer which employs approximately 30,000 people in more than 30 countries.

![example image](/example.png "Example Image")

Prompt: In this assignment you will implement a partitioning algorithm to solve the balanced bi-partitioning (BB)
problem. You should implement the Simulated Annealing (SA) algorithm, or the Kernighan-Lin (KL)
algorithm based on your choice.
A net-list containing a number of cells connected via two-terminal nets is to be partitioned into two
equal size segments. Assume that all cells are of the same unit size. The goal is to partition the net-list
into two segments such that 1) the two segments have equal number of cells and 2) the cutset (the
number of nets from one segment to another) is minimized. Your program should output the two
partition segments and the size of the cutset for the best solution found.
A set of development benchmark netlists will also be provided. These are for your own use during
development and testing. We will allow a maximum of eight hours execution time for any benchmark.
The net-lists will be specified in the following format:
First Line: Number of Cells (c)
Second Line: Number of nets (n)
Next n lines specify the nets.
All nets are assumed to be two terminal nets. There may be parallel nets. Cells are assumed to be
numbered from 1 to c. c is assumed to be even. Each net is specified in a line in the following format:
CellNumber-1 CellNumber-2
The nets are implicitly numbered from 1 to n in the order in which they are specified.
Here is an example net-list.

6 

8

1 5

1 4

1 3

5 2

4 5

3 4

3 2

2 3

The output of your program should have the following format:
First Line: Cutset Size
Second Line: List of Cells in the first segment (separated by spaces)
Third Line: List of Cells in the second segment (separated by spaces)
Following is an example output file:

3

1 5 4 3

2 6 7 8

Benchmark files will be named B1, B2, B3 etc. The corresponding result files should be named R1, R2,
R3 etc.
You are not allowed to use an existing SA or KL library/package. You are allowed and encouraged to
use existing and well-tested random number generators and data structure libraries such as the
Standard Template Library and the C++ Standard Library.

Please submit the following:
1. A report including a clear description of the exact algorithm you have implemented and all the main
data structures. Explain why you think your program is good and include any discussion and data
you choose. (For example, you should include the cutsets, execution times and memory
requirements for the development benchmarks. You should include the execution trajectories in
case of SA or KL. You should include a discussion about how you tuned your program.)
Your program will be evaluated based on how it handles benchmarks with respect to the size of the
netlists handled, cutset sizes, execution times and memory requirements, the approach used,
quality of the report, quality of software and its documentation.
2. Your programs. Only C or C++ will be accepted, and C++ is preferred. The programs should be
modular, well documented, indented and/or pretty-printed, easy to understand and should readily
compiled.
3. Include a single makefile named “Makefile” to compile your program. The executable must be
named “parprog” and must take input from stdin and produce output to stdout. We will run it, for
example, as “parprog &lt; B1 &gt; R1”. Note that we should NOT have to recompile your program for
each netlist.
4. Your submission should include the program source files including the Makefile, the report, and an
executable named parprog.
