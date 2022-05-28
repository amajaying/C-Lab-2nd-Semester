# Dynamic Memory Allocation
Memory divides into 4 parts:
- stack: all local variables
- heap: memory address at the runtime (heap is present in RAM).
- data: all global static, local static variables and global variables 
- code: all codes

# malloc
- syntax: malloc(size);
- memory created by malloc has garbage value. No default initialization.

# calloc
- syntax: calloc(number of nodes, size of each node);
- it has default initialization. Memory is initialized with 0.

# realloc
- realloc(pointer variable name, new size);
- it can be used to change the size of the memory.

# free

`` Dynamic memory donot destroy automatically. You have to explicitily destroy it.``
`` use free(variable name) to destroy it.``

<hr>

# File Handling


