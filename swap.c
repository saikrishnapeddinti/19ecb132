#include <stdio.h>
  
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
  
    int temp = x;
    x = y;
    y = temp;
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}


Enter Value of x 44

Enter Value of y 43

After Swapping: x = 43, y = 44