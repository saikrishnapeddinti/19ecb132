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
