#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("Please give a number\n");
    scanf("%d",&day);
    switch (day%7)
    {case 1: printf("The day you are trying to find is MONDAY!\n");
    break;
    case 2: printf("The day you are trying to find is TUESDAY!\n");
    break;
    case 3: printf("The day you are trying to find is WEDNESDAY!\n");
    break;
    case 4: printf("The day you are trying to find is THURSDAY!\n");
    break;
    case 5: printf("The day you are trying to find is FRIDAY!\n");
    break;
    case 6: printf("The day you are trying to find is SATURDAY!\n");
    break;
    case 0: printf("The day you are trying to find is SUNDAY!\n");
    break;
    default:
        printf("You can not write this and I am not sorry for that :)\n");}
    return 0;
}
