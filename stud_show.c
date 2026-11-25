#include "student.h"
void printNode(SLL *ptr)
{
if(ptr==0)
{
printf("No record found\n");
return;
}
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
}