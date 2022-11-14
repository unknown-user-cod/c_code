/*(a) Write down macro definitions for the following: 
1. To test whether a character entered is a small case letter or 
not. 
2. To test whether a character entered is a upper case letter or 
not. 
3. To test whether a character is an alphabet or not. Make 
use of the macros you defined in (1) and (2) above. 
4. To obtain the bigger of two numbers. 
*/

#include <stdio.h>
#define SMALL_LETTER(x) (x<='z' && x>='a') 
#define BIG_LETTER(x) (x<='Z' && x>='A')
#define ALPHABET(x) (x<='A' || x>='z')
#define COMPARE(x,y) (x<y)


int main(){
    char x;
    int a,b;
    printf("--");
    scanf("%c",&x);
    if (SMALL_LETTER(x))
    {
        printf("small case letter");

    }
    else if (BIG_LETTER(x))
    {
        printf("upper case letter");

    }
    else if (ALPHABET(x))
    {
        printf("an alphabet");

    }

    printf("--");
    scanf("%d %d",&a,&b);
    if (COMPARE(a,b))
    {
        printf("%d is greater ",b);

    }
    else if (COMPARE(b,a))
    {
        printf("%d is greater",a);

    }
    
        printf("byeeee");
    
    
    
return 0;
}