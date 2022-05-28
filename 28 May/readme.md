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

# fopen
- syntax: fopen(filename, mode); 
- mode: r, w, a
# fclose

# fgetc
- syntax: fgetc(file pointer);
- read one character at a time.

# fputc
- syntax: fputc(character, file pointer);
- write one character at a time.

# fprintf
- syntax: fprintf(file pointer, format, ...);
- write formatted string to file.

# fscanf
- syntax: fscanf(file pointer, format, ...);
- read formatted string from file.

# fread
- syntax: fread(buffer, size of each element, number of elements, file pointer);
- read data from file to buffer.

# fwrite
- syntax: fwrite(buffer, size of each element, number of elements, file pointer);
- write data from buffer to file.

# to close a loop:
if ( c == EOF ) break;