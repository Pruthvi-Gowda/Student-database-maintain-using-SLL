#include"student.h"
int main()
{
SLL *head=0;
readFile(&head);
char c; 
while(1)
{
printf("\n\n\033[93;1m********** STUDENT RECORD MENU **********\n");
printf("a/A : Add new record\nd/D : Delete a record\ns/S : Show the list    \nm/M : Modify a record\nv/V : Save record\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\ne/E : Exit\n");
printf("-----------------------------------------\033[0m\n");
printf("\033[1;34mEnter your choice : \033[0m");
scanf(" %c",&c);
printf("\033[93;1m-----------------------------------------\033[0m\n\n");
switch(c)
{
case 'a': case 'A': addBegin(&head);
break;
case 'd': case 'D': deleteNode(&head);
break;
case 's': case 'S': printNode(head);
break;
case 'm': case 'M': modifyData(&head);
break;
case 'v': case 'V': saveFile(head);
break;
case 'e': case 'E': exit_sll(&head);
                    return 0;
break;
case 't': case 'T': sortData(&head);
break;
case 'l': case 'L': deleteAll(&head);
break;
case 'r': case 'R': reverseData(&head);
break;
default:printf("\033[31mEnter valid option\033[0m\n");
break;
}
}
return 0;
}
