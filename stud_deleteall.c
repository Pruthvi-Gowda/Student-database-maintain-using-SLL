#include"student.h"
void deleteAll(SLL **ptr)
{
SLL *del=*ptr;
while(del)
{
*ptr=del->next;
free(del);
del=*ptr;
}
printf("All records deleted\n");
}