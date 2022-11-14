#include <stdio.h>

void prime(int a)
{

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            break;
    }
    if (i == a)
        printf("%d is prime", a);
    else
        printf("%d not prime",a); 
}
#include <stdio.h>

    int main()
    {
        int a;
        printf("--");
        scanf("%d",&a);
        prime(a);
        return 0;
    }