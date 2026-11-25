#include"student.h"
void reverseData(SLL **ptr)
{
SLL **a,*pos=*ptr;
int c=0,i;
while(pos)
{
c++;
pos=pos->next;
}
pos=*ptr;
a=malloc(sizeof(SLL *)*c);
for(i=0;i<c;i++)
{
a[i]=pos;
pos=pos->next;
}
for(i=c-1;i>=0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*ptr=a[c-1];
printf("Reverse link done Successfully\n");
}