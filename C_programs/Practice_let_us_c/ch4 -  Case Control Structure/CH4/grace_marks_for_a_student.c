/*Write a program which to find the grace marks for a student 
using switch. The user should enter the class obtained by the 
student and the number of subjects he has failed in. 

− If the student gets first class and the number of subjects he 
failed in is greater than 3, then he does not get any grace. 
If the number of subjects he failed in is less than or equal 
to 3 then the grace is of 5 marks per subject. 

− If the student gets second class and the number of subjects 
he failed in is greater than 2, then he does not get any 
grace. If the number of subjects he failed in is less than or 
equal to 2 then the grace is of 4 marks per subject. 

− If the student gets third class and the number of subjects 
he failed in is greater than 1, then he does not get any 
grace. If the number of subjects he failed in is equal to 1 
then the grace is of 5 marks per subject*/
#include <stdio.h>

int main(){
    int class_obtained=0,number_failed_subjects=0;
    printf("Class obtained - ");
    scanf("%d",&class_obtained);

    printf("Number of subjects he failed - ");
    scanf("%d",&number_failed_subjects);

    //switch (class_obtained=1)
    if (class_obtained==1/* condition */)
    {
        /* code */
        switch (number_failed_subjects)
        {
        case 1:
            printf("grace is of 5 marks");
            break;

        case 2:
        printf("grace is of 5 marks");
        break;

        case 3:
            printf("grace is of 5 marks");
            break;    
        default:
            printf("grace is of 0 marks");
            break;
        }
    }
    //switch (class_obtained=2)
    if (class_obtained==2/* condition */)
{
    /* code */


    switch (number_failed_subjects)
    {
    case 1:
        printf("grace is of 4 marks");
        break;
    case 2:
        printf("grace is of 4 marks");
        break;
    
    default:
        printf("grace is of 0 marks");
        break;
    }
}
    //switch (class_obtained=3)
    if (class_obtained==3/* condition */)
{
    /* code */


    switch (number_failed_subjects)
    {
    case 1:
        printf("grace is of 5 marks");
        break;
    
    default:
        printf("grace is of 0 marks");
        break;
    }
}
    return 0;}