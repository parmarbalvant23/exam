#include <stdio.h>

 main() 
 
 {
    
    int a, b;
    int area;

  
    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    
    area = (a * a) + (2 * a * b) + (b * b);

   
    printf("The area is: %d\n", area);

    return 0;
}
