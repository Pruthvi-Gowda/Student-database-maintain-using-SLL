#include"student.h"
void sortData(SLL **ptr)
{
SLL *pos=*ptr;
int c=0,i,j;
char ch;
while(pos)
{
c++;
pos=pos->next;
}
printf("\033[1;33mn/N : Sort with name\np/P : Sort with percentage\033[0m\n");
printf("\033[1;34mEnter your option : \033[0m");
scanf(" %c",&ch);
pos=*ptr;
SLL *p1,*p2,t;

p1=*ptr;
switch(ch)
{
case 'n': case 'N' :
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if(strcmp(p1->name,p2->name)>0)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
break;
case 'p': case 'P' :
for(i=0;i<c-1;i++)
{
p2=p1->next;
for(j=0;j<c-1-i;j++)
{
if(p1->percentage<p2->percentage)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name,p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name,t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
break;
}
}
