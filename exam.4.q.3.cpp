#include <stdio.h>

 main() 
 
 {
    int start;

    
    printf("Enter the starting number: ");
    scanf("%d", &start);

    
    if (start <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    
    printf("Natural numbers in reverse order:\n");
    while (start > 0) 
	{
        printf("%d\n", start);

    return 0;
}
        start--;
    }
