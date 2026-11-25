#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}SLL;

void addBegin(SLL **);
void deleteNode(SLL **);
void printNode(SLL *);
void modifyData(SLL **);
void saveFile(SLL *);
void exit_sll(SLL **);
void reverserec(SLL **);
void sortData(SLL **);
void deleteAll(SLL **);
void reverseData(SLL **);
void readFile(SLL **);
