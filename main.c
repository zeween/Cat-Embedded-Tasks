#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[100];

   //Prompt the user to enter their name

   printf("Enter your name : ");
   scanf("%s",name);

   //print the massege
   printf("Congrat %s\n",name);
    return 0;
}
