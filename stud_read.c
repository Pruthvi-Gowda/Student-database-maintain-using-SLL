#include"student.h"
void readFile(SLL **ptr)
{
int c=0,i;
char s[100];
SLL *pos=*ptr;
FILE *fp=fopen("student.dat","r");
if(fp==0)
{
printf("file not present\n");
return;
}
while(fgets(s,100,fp)!=0)
c++;
rewind(fp);
for(i=0;i<c;i++)
{
SLL *new;
new=malloc(sizeof(SLL));
new->next=0;
fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage);
if(*ptr==0)
*ptr=new;
else
{
SLL *prev=*ptr;
while(prev->next)
prev=prev->next;
prev->next=new;
}
}
printf("data stored into structure\n");
fclose(fp);
}