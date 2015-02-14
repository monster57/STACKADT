#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack createStack(){
 LinkList *list = calloc(sizeof(Stack), 1);
 Stack stack = {list , &list->tail};
 return stack;
}

int push(Stack stack, void *data){
	Node *node = create_node(data);
	if(data == NULL) return -1;
	add_to_list(stack.list, node);
	return stack.list->numOfElements;
}

void * pop(Stack stack){
	return deleteElementAt(stack.list,stack.list->numOfElements-1);
}