#include"student.h"
void deleteNode(SLL **ptr)
{
char op,s[50];
SLL *del=*ptr,*prev;
int roll,c=0;
printf("\033[1;33mDelete based on - \nr/R : Rollno\nn/N : Name\033[0m\n");
printf("\033[1;34mEnter Delete based on : \033[0m");
scanf(" %c",&op);
switch(op)
{
case 'r': case 'R' :
a:
printf("Enter rollno to be deleted : ");
scanf("%d",&roll);
del=*ptr;
while(del)
{
if(del->rollno==roll)
{
if(del==*ptr)
*ptr=del->next;
else
prev->next=del->next;
free(del);
printf("Node deleted successfully\n");
break;
}
prev=del;
del=del->next;
}
break;
case 'n': case 'N' :
c=0;
del=*ptr;
printf("Enter name to be deleted : ");
scanf("%s",s);
while(del)
{
if(strcmp(del->name,s)==0)
{
c++;
printf("%d %s %f\n",del->rollno,del->name,del->percentage);
}
del=del->next;
}
del=*ptr;
if(c==1)
{
while(del)
{
if(strcmp(del->name,s)==0)
{
if(del==*ptr)
*ptr=del->next;
else
prev->next=del->next;
free(del);
printf("Node deleted successfully\n");
break;
}
prev=del;
del=del->next;
}
}
else if(c>1)
goto a;
break;
default:printf("\033[31mInvalid option\033[0m\n");
}
return ;
}
