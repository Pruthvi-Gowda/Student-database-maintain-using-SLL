#include "student.h"
  
void addBegin(SLL **ptr)
{
int roll=1;
SLL *new,*last=*ptr;
new=malloc(sizeof(SLL));
printf("enter name\n");
scanf("%s",new->name);
 do
 {
 printf("enter percentage\n");
 scanf("%f",&new->percentage);
 if(new->percentage<0 || new->percentage>100)
 printf("invalid percentage,Try again!!\n");
 }while(new->percentage<0 || new->percentage>100);
 while(last)
 {
 if(last->rollno== roll)
 {
 roll++;
 last=*ptr;
 }
 else
 last=last->next;
 }
 new->rollno=roll;
 new->next=*ptr;
 *ptr=new;
 }