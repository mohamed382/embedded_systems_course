#include <stdio.h>
#include <stdlib.h>

// Functions
unsigned long long int factorial_func(int);

int main()
{

    unsigned int num ;
    printf("Enter number : ");
    scanf("%d",&num);

    unsigned long long int str_var ;
    str_var = factorial_func(num);
    printf("FACT = %lld",str_var);

//    unsigned long long int fact = 1 ;
//
//    if(num < 0 || num > 20)
//    {
//        while(num > 20 || num < 0)
//        {
//            printf("Enter positive number between 0 - 20 : ");
//            scanf("%d",&num);
//        }
//
//    }
//
//    if(scanf("%d",&num) == 0)
//    {
//        while(scanf("%d",&num) == 0)
//        {
//            printf("Enter only integer number  : ");
//            while(getchar() != '\n'); // clear input buffer
//            scanf("%d",&num);
//        }
///*
//  while (scanf("%d", &num) != 1) {
//        printf("Invalid input. Please enter an integer value: ");
//        // clear input buffer
//        while (getchar() != '\n');
//    }
//    printf("You entered: %d\n", num);
//*/
//    }
//
//
//
//    if(num >= 0 && num <= 20)
//    {
//        while(num > 0 && num <= 20)
//        {
//            fact *= num ;
//            num--;
//        }
//        printf("FACT = %lld",fact);
//    }



    return 0;
}

unsigned long long int factorial_func(int num)
{

  unsigned long long int fact = 1 ;

    if(num < 0 || num > 20)
    {
        while(num > 20 || num < 0)
        {
            printf("Enter positive number between 0 - 20 : ");
            scanf("%d",&num);
        }

    }

    if(scanf("%d",&num) == 0)
    {
        while(scanf("%d",&num) == 0)
        {
            printf("Enter only integer number  : ");
            while(getchar() != '\n'); // clear input buffer
            scanf("%d",&num);
        }
/*
  while (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer value: ");
        // clear input buffer
        while (getchar() != '\n');
    }
    printf("You entered: %d\n", num);
*/
    }



    if(num >= 0 && num <= 20)
    {
        while(num > 0 && num <= 20)
        {
            fact *= num ;
            num--;
        }
        //printf("FACT = %lld",fact);
        return fact ;
    }

}

