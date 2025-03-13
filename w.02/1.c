#include <stdio.h>
#include <stdlib.h>

int main()
{
    int working_hours;
    float h_rate=50.0;
    float salary;

    //ask user to enter the working hours
    printf("enter number of working hours: ");
    scanf("%d",&working_hours);

    //check working hours and salary
    if (working_hours<40)
    {
    salary=working_hours*h_rate*0.9;//10% deduction
    }else {
    salary=working_hours*h_rate;}

    // print salary
    printf("The employee's salary for the week is :%0.2f",salary);
    return 0;
}
