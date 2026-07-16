# C++

## Description
This repository contains implementations of basic C++ utalizing Streams, Classes and Structs, Friend functions and friend classes, Constructors, Operator Overloading, Shallow copies and deep copies, Standard Template Library(STL), Containers and iterators, Templates, Smart pointers, Inheritence, Polymorpism, Overriding functions, Memory Management, Exceptions, Namespace, Type Specifiers, and Lambda expressions.

Utalizes: C++11, C++14, C++17 and C++20

## File Descriptions

### Grade Tester
C++ program demonstrating user input handling, loops, and basic statistics by collecting student grades and calculating the average, maximum, and minimum values.

### Constructor_FriendClasses
This project models a country’s cylindrical airspace using object-oriented design in C++, with classes representing 3D points, the airspace boundary, and radar detection. It determines whether an enemy aircraft violates the airspace by checking its position relative to the defined cylindrical region. The goal was to understand *Constructors* and *Friend Classes* and their utalization across multiple files.

### Assorted_Chocolates&Boxes
C++ implementation of a Chocolate and ChocolateBox class system featuring delegating constructors, Rule of Five, dynamic 2D arrays, and overloaded operators for combining, comparing, and printing assorted chocolate boxes

### Assignment4_Solution
C++ program that parses a 3D terrain file to map connectivity between 46 cities on an island using STL containers and file I/O.

### Radar & Airspace (Interception Detection)
A C++ program modeling radar-based airspace violation detection. Built from three cooperating classes: `Point3D` (a 3D coordinate/vector supporting addition, subtraction, and magnitude), `Airspace` (a cylindrical no-fly zone defined by a radius, height, and center point), and `Radar` (a positioned sensor that checks whether an object violates a given airspace). Demonstrates class design, encapsulation with getters/setters, and method chaining via reference-returning setters, driven by an interactive tester.

### Assorted Chocolates & Boxes
A C++ exercise in operator overloading and dynamic memory management. The `Chocolate` class (type and cocoa percentage) uses delegating constructors, a copy constructor, and overloaded operators (==, +, !, <<, >>). The `ChocolateBox` class manages a 2D dynamic array of Chocolate pointers (Chocolate**) and implements the full rule of five (copy/move constructors, copy/move assignment, and destructor) for safe deep copying, along with its own overloaded operators. Includes a test driver.

### Doubly Linked List (Smart Pointers)
A generic doubly linked list implemented in C++ with templates and smart pointers. The templated `Node<T>` holds a shared_ptr to the next node and a weak_ptr to the previous node, deliberately breaking the reference cycle that would otherwise cause a memory leak. The driver builds both string and integer lists, prints them forward and in reverse, and demonstrates automatic RAII-based cleanup as nodes fall out of scope.
