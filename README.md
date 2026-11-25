# Student Record Management System

A menu-driven Student Record Management System developed using **C Programming** and **Singly Linked Lists (SLL)**.

This project demonstrates data structures, dynamic memory allocation, modular programming, searching, sorting, and file handling.

## Features

- **Add Student:** Add new student records with automatically generated unique roll numbers.
- **Delete Student:** Delete records using roll number or student name.
- **Show Students:** Display all student records in tabular format.
- **Modify Student:** Update student details using roll number, name, or percentage.
- **Save Records:** Store student records in `student.dat`.
- **Load Records:** Restore previously saved records when the application starts.
- **Sort Records:** Sort students alphabetically by name or by percentage in descending order.
- **Delete All:** Delete all student records and release allocated memory.
- **Reverse List:** Reverse the singly linked list by changing node pointers.
- **Exit:** Save and exit or exit without saving.

## Technologies Used

- Language: C
- Data Structure: Singly Linked List
- Memory Management: `malloc()` and `free()`
- File Handling: File operations in C
- Compiler: GCC
- Build Tool: Makefile
- Environment: Ubuntu Linux (WSL)

## Project Structure

```text
Student-Record-Management-System/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_delete.c
├── stud_deleteall.c
├── stud_show.c
├── stud_modify.c
├── stud_read.c
├── stud_save.c
├── stud_sort.c
├── stud_reverse.c
├── stud_exit.c
├── Makefile
├── student.dat
└── README.md
```

## Compilation

Compile the project using:

```bash
make
```

This generates the executable named `student`.

## Execution

Run the application:

```bash
./student
```

## Cleaning Generated Files

Remove object files and the executable:

```bash
make clean
```

## Concepts Learned

- Structures and self-referential structures
- Singly linked list operations
- Dynamic memory allocation and deallocation
- Modular programming using multiple source files
- Searching and sorting algorithms
- File handling and persistent data storage
- Makefile and compilation process
- Memory management

## Project Objective

The objective of this project is to develop practical knowledge of C programming, linked-list data structures, memory management, and file handling by implementing a real-world student record management application.

---

**Project:** Mini Project – II  
**Domain:** C Programming and Data Structures  
**Executable:** `student`
