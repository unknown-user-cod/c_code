// #include <stdio.h>

// int main()
// {
//     int i = 100, j = 100;
//     while (i++ >= 100)
//     {   printf("%d %d \n", i,j);
//         while (j++ >= 210)
//         {
//             if (j == 100){
//                 printf("%d %d\n", i, j);
//                 break;;}
//             else{
//                 printf("--------------%d %d\n", i, j);
//             }
//     return 0;

//         }
//     }
// }

#include <stdio.h>

void power(float num, float power);

int main()
{

    power(5, -3);

    return 0;
}
void power(float num, float power)
{
    float n = num;
    int n2 = power;
    float root = 1 / (power - n2);

    if (power == 0 || num == 1) // special case 
    {
        printf("%d", 1);
    }

    else if (power == n2) // integer power
    {
        for (float i = 1; i < power; i++)
        {
            num *= n;
        }
    }
    else if (power <= -1 && power == n2) // negative power without point
    {
        float power1 = (-1) * (power);
        float num1 = num;
        float n1 = num1;
        for (float i = 1; i < power1; i++)
        {
            num1 *= n1;
        }
        printf("%.4f", 1 / num1);
    }
    else if (power >= 1 && power == n2)
    {
        printf("%.4f\n", num);
    }

    else if (n > 0 && power > 0)
    {

        for (float i = 1; i < n2; i++)
        {

            num *= n;
        }

        float m;
        float j;
        int k = 0;
        for (float i = 1; i < n; i++)
        {
            float m = i;

            for (float l = 1; l < root; l++)
            {
                m *= i;
            }

            if (m == n)
            {
                k = 1;
                if (n2 != 0)
                {
                    printf("%f\n", i * num);
                }
                else
                {
                    printf("%f\n", i);
                }
            }

            else if (m < n)
            {

                for (j = 0; j < i; j++)
                {
                }
            }
        }
        if (k != 1)
        {
            if (n2 != 0);
            {
                printf("%f", j * num);
            }
            if (n2 == 0)
            {
                printf("%f", j);
            }
        }
    }
    else if (n > 0)
    {
        printf("Negative power Root value\n");
    }
    else if (n != 0)
    {
        printf("Complex number not real number\n");
    }
    else if (n == 0 && power != 0)
    {
        printf("%.4f", 0);
    }
    else
    {
        printf("Not legal  in exponential function\n");
    }
}