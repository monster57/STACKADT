#include "linkList.h"
typedef struct stack
{
	LinkList* list;
	Node** top;
}Stack;
Stack createStack(void);
int push(Stack, void *);
void * pop(Stack );