#include <stdio.h>

int main(){
    long int i;
    char j;
    float k;
    double m;
    unsigned int n;
    short int p;

    unsigned char g;

    printf("%d  %d  %d %d %d  %d %d",sizeof(i),sizeof(j),sizeof(k),sizeof(m),sizeof(n),sizeof(p),sizeof(g));
return 0;
}