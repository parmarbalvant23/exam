#include <stdio.h>

 main() 
 
 {
    int num, count = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num < 0)
	{
        num = -num;
    }

  
    if (num == 0) 
	{
        count = 1;
    }
	 else 
	{
        
        for (; num > 0; num /= 10) 
		{
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

  
}
