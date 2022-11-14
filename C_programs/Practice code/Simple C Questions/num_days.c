#include <stdio.h>

int main(){
    int mounths_name;
    printf("--");
    scanf("%d",&mounths_name);
    switch (mounths_name)
    {
    case 2:
        printf("28");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31");
        break;
    
    case 4:
    case 6:
    case 11:
    case 9:
        printf("30");
        break;
    default:
        break;
    }
return 0;
}