/*
Have the computer print 
HI, WHAT’S YOUR NAME? 
on one line. The user then enters his or her name immediately after the question mark. The computer then 
skips two lines and prints 
WELCOME (name) 
LET’S BE FRIENDS! 
on two consecutive lines. Use a character-type array to represent the user’s name. Assume the name 
contains fewer than 20 characters. */

#include <stdio.h>

int main(){
    char name[20];
    printf("Enter your name - ");
    gets(name);
    printf("WELCOME %s,\nLET'S BE FRIENDS! ",name);
    
return 0;
}