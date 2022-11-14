#include <stdio.h>

void prime(int a,int b)
{
    int i;
    for (; a <= b; a++)
    {
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
                break;
        }
        if (i == a)
            printf(" %d ", a); /* code */
        
    }
}
#include <stdio.h>

int main(){
    int a,b;
    printf("--");
    scanf("%d %d",&a,&b);
    prime(a,b);
return 0;
}