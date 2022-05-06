#String:

collection of characters 
"ABC" "ZXY"

every string in C is ended with null character
"ABC" == "ABC\0"

string is represented with a character array
char a[5]="ABCD";
a[A|B|C|D|\0]

if:
char a[5]={'A','B','C'};
a[A|B|C|\0|\0]

char a[]="abc"
a[a|b|c|\0]
a[4]

char a[]={'A','B','C'}
a[A|B|C]
a[3]