#include "student.h"
void saveFile(SLL *ptr)
{
SLL *pos=ptr;
FILE *fp=fopen("student.dat","w");
while(pos)
{
fprintf(fp,"%d %s %f\n",pos->rollno,pos->name,pos->percentage);
pos=pos->next;
}
fclose(fp);
}