# Introduction to C++ Basics

## Table of content 

Link to some [solutions](solutions/)

- [Description](#description)
- [1.1 Statements](#11-statements)
- [1.3 Objects and variables](#13-objects-and-variables)
- [1.4 Variable assignment](#14-variable-assignment)
- [1.6 Uninitialized varaibles and UB](#16-uninitialized-variables-and-ub)
- [1.10 Expressions](#110-expression)

## Description

This is just to collect all questions after each page on the learncpp site.

### 1.1 Statements

#### What is a statement? 

Is an instruction in a program that tells the computer to perform an action

#### What is a function?

Is a set of instructions that can be gathered and reused.

#### What is the name of the function that all programs must have?

main ()

#### What happens when the program is run?

The main() function is called and if compiled correctly, main() will execute the instructions provided in the program.

#### What symbol are statements in C++ often ended with?

A semicolon (;)

#### What is a syntax error?

The syntax is referred to the structure of a certain language.
A syntax **error** would result in a sort of grammatical error when writing C++ code.

#### What is the C++ Standard Library?

The C++ Standard library is the library provided when installing a C++ compiler.
The standard library provides the possibility of writing/reading to/from a terminal

____

### 1.3 Objects and variables

#### What is data?

Data is any information that can be processed, stored or manipulated by a computer.

#### What is a value?

A value is what information (e.g. 5, 'H') the piece of data represents.

#### What is an object?

An object is a block of memory that stores certain data. When that memory is needed, the compiled program calls that block and retrieves the data stored at the object.

#### What is a variable?

A variable is a named identifier for an object. 

#### What is an identifier?

An identifier is a "name" / "id" for any object to make the object for human-readable and easier to understand. 

#### What is a data type used for?

To determine what piece of values an object is supposed to store.

#### What is an interger?

An integer is a certain data type that stores interger values of numbers (e.g. 1,2,3,4,5)

_____

### 1.4 Variable assignment

#### What is the difference between initialization and assignment?

**Initialization:** declaring a varaible with an identifier and no value..
**Assignment:** assigning a value to a certain declared variable.

#### What form of initialization should you prefer when you want to initialize a variable with a specific value?

A direct list initialization is preffered since it is unanimous and behaves the same when assigning different data types.
`int x {7};`

#### What are default-initialization and value-initialization? What is the behavior of each? Which should you prefer?

A **default initialization** refers to a variable declaration with no value initialization and will be assigned an intermediate value (random) and can be destructive. 

A **value initialization** is prefer since the value assignend to a variable will be predictable.

____

### 1.6 Uninitialized varaibles and UB

#### What is an uninitialized variable? Why should you avoid using them?

An unitialized variable is a variable without an assigned value at runtime. 
Avoid them to remove the possibility of using randomized values at pre defined address where that objects lives.

#### What is undefined behavior, and what can happen if you do something that exhibits undefined behavior?

Undefined behaviour is a behaviour in a compiled program that is syntactically correct but not logically. This behaviour can differ from compiler to compiler and computer to computer.
It is where uninitialized variables can use "old" data that is stored on certain addresses.

___

### 1.10 Expressions

#### What is the difference between a statement and an expression?

**Statement:** An statement is the instruction (expression included) that is later compiled.
**Expression:** An expression is the evaluation of a data that should later be executed.

### Summary 

#### What is the difference between initialization and assignment? How many times can a variable be initialized or assigned a value?

An assignment is the process of determining a variable a value.
An intiazlization is the process of identifying a type, with or without a value.

#### When does undefined behavior occur? What are the consequences of undefined behavior?

It might never occur, or it might occur when a certain logic inside a program accesses a variable with garbage value(a value that can be random)

#### Program solution

Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

Link to [solution](solutions/1-exam.cpp)
