#include <stdio.h>

int main()
{
    int num, i = 0, j = 1, s = 0, k = 0, m;
    int b, c, a,p=0,z=10;
    printf("--");
    scanf("%d", &num);
    a = num;
    m = num;

    while (i < num)
    {
        j = j * 10;
        num = num / 10;
    }
    j = j / 10;
    b = j;
    //printf("%d\n",b);

    while (m > i)
    {
        s = m % 10;
        s = s * j;
        k = k + s;
        j = j / 10;
        m = m / 10;
    }
    while (b > z)
    {
        c = a % z;
        if (c>0)
        {
            b=z;
        }
        
      else
        {
            p++;
        }
        
        //b = b / 10;
        a=a/10;
        //z=z*10;
    }
    //printf("%d\n",p);
    while (p > 0)
    {
        printf("0");
        p--;
    }

    printf("%d", k);

    return 0;
}