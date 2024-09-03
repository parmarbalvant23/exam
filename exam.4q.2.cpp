#include <stdio.h>

 main() 
 
 {
    int a, b, c;
    
   
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    int lowest;

   
    if (a <= b) 
	{
        if (a <= c) 
		{
            lowest = a; 
        } else 
		{
            lowest = c; 
        }
    }
	 else 
	{
        if (b <= c) 
		{
            lowest = b; 
        } 
		else 
		{
            lowest = c; 
            
        }
    }
    
   
    printf("The lowest value is: %d\n", lowest);
    
    
    
}
