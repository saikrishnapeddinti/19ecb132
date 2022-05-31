#include<stdio.h>  
  int main()  
{  
    int a[10 ], i, *ptr;  
 printf("Enter %d integer numbers\n", 10);  
 for(i = 0; i < 10; i++)  
        scanf("%d", &a[i]);  
  ptr = &a[10 - 1];  
   printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < 10; i++)  
        printf("%d\n", *ptr--);  
  return 0;  
}  


Enter 10 integer numbers
1
2
3
4
5
6
7
8
9
0

Elements of array in reverse order ...
0
9
8
7
6
5
4
3
2
1