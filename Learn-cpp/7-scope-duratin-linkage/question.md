# Scope, duration, linkage  


## Question

### 7-3-2. What’s the difference between a variable’s scope, duration, and lifetime? By default, what kind of scope and duration do local variables have (and what do those mean)?

Local variable are defined and survives inide the block of {} code it is declared inside. If a variable is defined inside main(). It will survive until main is joined.

- **Scope**: The brackets that a variable would survive in.
- **Duration**: When a varaible is created and destroyed.
- **Lifetime**: The actual time between when it is created and destroyed

###  7-7-1 What kind of scope, duration, and linkage do global variables have?

* Global variables have global scope (a.k.a. file scope), which means they can be accessed from the point of declaration to the end of the file in which they are declared.

* Global variables have static duration, which means they are created when the program is started, and destroyed when it ends.

* Global variables can have either internal or external linkage, via the static and extern keyword respectively.

### 7-11-1 What effect does using keyword static have on a global variable? What effect does it have on a local variable?

- Using static on a global variable will ensure that the variable has internal linkage and not live through other files.
- Using static on a local variable will do the same, so if a variable is static in a function call. 
That variable will live through and not be destroyed (e.g. not change its value)

### 