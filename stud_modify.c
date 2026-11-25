#include "student.h"
void modifyData(SLL **ptr)
{
SLL *pos=*ptr;
char op,name[50],s[50];
float per;
int roll,c=0;
printf("\033[1;33mr/R : Search by rollno\nn/N : Search by name\np/P : Search by percentage\033[0m\n");
printf("\033[1;34mEnter which record to search for modification : \033[0m");
scanf(" %c",&op);
switch(op)
{
case 'r': case 'R':
a:
pos=*ptr;
c=0;
printf("Enter rollno : ");
scanf("%d",&roll);
while(pos)
{
if(pos->rollno ==roll)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
printf("Enter the new name : ");
scanf("%s",name);
do
{
printf("Enter new percentage : ");
scanf("%f",&per);
if(per<0 || per>=100)
printf("\033[31mInvalid percentage, try again!!\033[0m\n");
}while(per<0 || per>=100);
strcpy(pos->name,name);
pos->percentage=per;
printf("Updated successfully\n");
return;
}
pos=pos->next;
}
break;
case 'n': case 'N':
c=0;
pos=*ptr;
printf("Enter name : ");
scanf("%s",name);
while(pos)
{
if(strcmp(pos->name,name)==0)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
c++;
}
pos=pos->next;
}
if(c==1)
{
pos=*ptr;
while(pos)
{
if(strcmp(pos->name,name)==0)
{
printf("Enter new name : ");
scanf("%s",s);
do
{
printf("Enter new percentage : ");
scanf("%f",&per);
if(per<0 || per>=100)
printf("\033[31mInvalid percentage, try again!!\033[0m\n");
}while(per<0 || per>=100);
strcpy(pos->name,s);
pos->percentage=per;
printf("Updated successfully\n");
return;
}
pos=pos->next;
}
}
else if(c>1)
goto a;
break;
case 'p': case 'P':
c=0;
pos=*ptr;
printf("Enter percentage : ");
scanf("%f",&per);
while(pos)
{
if(pos->percentage==per)
{
printf("%d %s %.2f\n",pos->rollno,pos->name,pos->percentage);
c++;
}
pos=pos->next;
}
if(c==1)
{
pos=*ptr;
while(pos)
{
if(pos->percentage==per)
{
printf("Enter new name : ");
scanf("%s",s);
do
{
printf("Enter new percentage : ");
scanf("%f",&per);
if(per<0 || per>=100)
printf("\033[31mInvalid percentage, try again!!\033[0m\n");
}while(per<0 || per>=100);
strcpy(pos->name,s);
pos->percentage=per;
printf("Updated successfully\n");
return;
}
pos=pos->next;
}
}
else if(c>1)
goto a;
break;
default:printf("\033[31mInvalid option\033[0m\n");
break;
}
}
