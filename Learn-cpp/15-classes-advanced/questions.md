# Classes advanced

## Questions

### 15.2.1a What is the purpose of defining member functions outside the class definition?
- a) To make the class definition shorter and easier to manage.
- b) To separate the public interface from the implementation details.
- c) When defined in a source file, to minimize recompilation times when an implementation detail changes.
- d) All of the above.

**Anwser:** d) all of the above

### 15.2.1b How do you define a member function outside the class definition?

- a) Simply define the function as a normal function without any class prefix.
- b) Define the function with the class name prefixed using the scope resolution operator (::).
- c) Declare the function inside the class definition and define it outside using the friend keyword.
- d) None of the above.

**Anwser:**  b) Define the function with the class name prefixed using the scope resolution operator (::).

### 15.2.1c When should trivial member functions be defined inside the class definition?

- a) Always, to improve performance.
- b) When the functions have a single line of code.
- c) When the functions are called frequently.
- d) It is not recommended to define any member functions inside the class definition.

**Anwser:** b) When the functions have a single line of code.

### 15.2.1d Where should the class definition be placed to facilitate reuse in multiple files or projects?

- a) In a .cpp file with the same name as the class.
- b) In a separate header file with the same name as the class.
- c) In a .cpp file that includes the header file.
- d) Anywhere in the code, as long as the functions are defined outside the class.

**Anwser:** b) In a separate header file with the same name as the class.

### 15.2.1e Which of the following is true about the one-definition rule for classes and member functions?

a) It prohibits defining a class in a header file.
b) It allows including the class definition multiple times in the same file.
c) Member functions defined inside the class definition are exempt from the one-definition rule.
d) Non-trivial member functions should always be defined in the header file.

**Anwser:** Member functions defined inside the class definition are implicitly inline, and thus exempt from the one-definition rule.

### 15.5.2 If we remove the const from the print() function declaration and definition, the program will no longer compile. Why not?

**Anwser:** Because t2 is a const object, so only const member functiosn can be called on t2.

### 