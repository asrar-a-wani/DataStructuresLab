
# Library Management System (C)

A simple console-based Library Management System developed in C. The project uses a singly linked list to store and manage book records dynamically.

## Features

- Add new books to the library.
- Display all registered books.
- Search for books using their ID.
- Issue books.
- Return issued books.
- Delete book records.
- Track the availability status of books.

## Data Structures Used

**Singly Linked List**

Each book is represented as a node containing:

- Book ID
- Book Title
- Author Name
- Issue Status
- Pointer to the next node

The linked list allows dynamic memory allocation, making it possible to add and remove book records without specifying a fixed capacity.

## Concepts Implemented

- Structures in C
- Pointers
- Dynamic memory allocation (`malloc` and `free`)
- Singly linked list traversal and manipulation
- Linear searching
- Conditional statements and switch cases
- Modular programming using functions

## Compilation and Execution

Make sure GCC is installed.

Compile the source file.
Compiled using DEV C++
## Limitations

- Book records are currently stored in memory.
- Records are lost when the program terminates.
- Searching is performed using linear search.
- The application operates through a command-line interface.

## Future Improvements

- Implement file handling to preserve records between executions.
- Add search functionality by title and author.
- Implement sorting of book records.
- Improve input validation and error handling.

## Purpose

This project was developed as part of learning Data Structures and Algorithms in C, with a focus on understanding linked lists, pointers and dynamic memory allocation.
