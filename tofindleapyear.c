#include <stdio.h>

int main()
{    
    int year;      
    printf("Enter a year:");
    scanf("%d", &year);
          
    if ( year%400 == 0)      
    printf("%d is a leap year", year);  
        
    else if ( year%100 == 0)      
    printf("%d is not a leap year", year); 
         
    else if ( year%4 == 0 )      
    printf("%d is a leap year", year);
    
    else      
    printf("%d is not a leap year", year);      
    
    return 0;    
}

/*Out put:
Enter a year: 2017
2017 is not a leap year

Enter a year: 2020
2020 is a leap year*/
