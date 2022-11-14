#include <stdio.h>

int n_natural_number(int a,int n)
{
    if (n==0)
    {
        return 0;
    }
    a++;
    n--;
    printf("%d  ",a);
    n_natural_number(a,n);
    

}

int main(){
int n;
    printf("--");
    scanf("%d",&n);
    n_natural_number(0,n);
return 0;
}