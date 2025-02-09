# C++ Vector Iterator Invalidation Bug

This repository demonstrates a subtle but common bug in C++ when using iterators with the `std::vector` container. The bug arises from modifying the vector while iterating through it using an index-based approach.

## The Bug

The `bug.cpp` file contains a function that attempts to remove elements from a vector within a loop.  The loop's logic is flawed, causing iterator invalidation and leading to undefined behavior.

## The Solution

The `bugSolution.cpp` file provides a correct way to modify the vector while iterating. It uses iterators correctly and avoids the issues present in the original code.

## How to Run

1. Clone this repository.
2. Compile and run both `bug.cpp` and `bugSolution.cpp` using a C++ compiler (like g++).
3. Observe the output. The incorrect loop will either crash or produce unexpected results, while the corrected version will work as expected.