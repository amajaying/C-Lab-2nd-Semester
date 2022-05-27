## Scope of the variable
Block<br>
Program<br>
Global<br>
Function<br>
File<br>

any variable with ``'static'`` cannot be used outside of the file in filescope

## Storage Class:

**auto specifier**

**static specifier**<br>
- when you declare a variable with static it automatically starts with 0.<br>
- when you declare a variable with static it is not available outside of the file.<br>
- static int cant be declared twice in a same program.<br>

**register specifier**<br>

**extern specifier**<br>
- it searches for the variable in the same file or other files.<br>
Example: <br>``extern int a; 
int main(){printf("%d",a);}
int a = 6``<br>
Output: <br> ``6``<br>


