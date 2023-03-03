#include "Func_prototype.h"

float Add(float num1 ,float num2)
{
    return num1 + num2 ;
}
float Sub(float num1 , float num2)
{
    return num1 - num2 ;
}
float Mult(float num1 , float num2)
{
    return num1 * num2;
}
float Div(float num1 , float num2)
{
    while(num2 == 0)
    {
        printf("Enter num2 = ");
        scanf("%f",&num2);
    }
    return num1 / num2;
}

void show_result(int option)
{
    float result ;
    float n , m ;
    printf("Enter Two numbers : ");
    scanf("%f%f",&n,&m);

    switch(option)
    {
        case 1 :
            result = Add(n,m);
            printf("SUM = ");
            break;
        case 2 :
            result = Sub(n,m);
            printf("SUB = ");
            break;
        case 3 :
            result = Mult(n,m);
            printf("MULT = ");
            break;
        case 4 :
            result =  Div(n,m);
            printf("DIV = ");
            break;
        default:
            printf("Enter only from 1 : 4 ");

    }
    printf("%f ",result);

}
