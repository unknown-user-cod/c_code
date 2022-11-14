#include <stdio.h>

int main(){
   unsigned long int i;
    char c;
    for (size_t i = 0; i <=255; i++)
    {
        printf("%c  %d\n",i,i);
    }
    c=255;
    printf("%c",c);

    // printf("--");
    // scanf("%ld",&i);
    // while (i>0)
    // {
    //     printf("%ld",i%10);
    //     i=i/10;
    // }
    
    return 0;

}