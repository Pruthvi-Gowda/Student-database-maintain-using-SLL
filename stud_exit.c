#include "student.h"
void exit_sll(SLL **ptr)
{
char ch;
l:
printf("s\033[1;33m/S : Save and exit\ne/E : Exit without saving\033[0m\n\n");
printf("\033[1;34mEnter option : \033[0m");
scanf(" %c",&ch);
switch(ch)
{
case 's': case 'S': saveFile(*ptr);
printf("\033[32mRecords saved successfully\033[0m\n");
break;
case 'e': case 'E': deleteAll(ptr);
printf("\033[31mRecords not saved\033[0m\n");
break;
default:printf("\033[31mInvalid option\033[0m\n");
goto l;
}
}
