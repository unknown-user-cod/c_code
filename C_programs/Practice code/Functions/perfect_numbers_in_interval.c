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
    
return 0;
}