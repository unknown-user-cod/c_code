/*
Check whether a number is prime, Armstrong or perfect number using
functions.
*/
int prime_perfect_armstrong(int a)
{

}
int prime(int a)
{
    int i;
for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            break;
    }
    if (i == a)
        printf("%d is prime", a);
        return 1;
    else
        printf("%d not prime",a);
        return 0; 


}
int armstrong(int a)
{

}
int perfect(int a)
{
    int i,j=0;
for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            j=j+i;
            break;
        }
    }
    if (j == a)
        return 1;
    else
        return 0; 

}
#include <stdio.h>

int main(){
    int num,result;
    printf("Enter number please --");
    scanf("%d",&num);
    result = prime_perfect_armstrong(num);
    if (result==1)
    {
        printf("");
    }
    else if (result==2)
    {
        printf("");
    }
    else
    {
        printf("");
    }
    

return 0;
}