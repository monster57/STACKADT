#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
#include "expr_assert.h"

void test_createStack_create_a_stack_that_does_not_contain_any_data(){
	Stack stack = createStack();
	assert(stack.list!=NULL);
	assert(*(stack.top)==NULL);
}

void test_push_should_return_the_no_of_element_of_the_stack(){
	Stack stack  = createStack();
	int a = 5;
	int value = push(stack ,&a);
	assertEqual(value,1);
}

void test_push_should_add_a_element_to_the_top_of_the_list_of_integer_type(){
	Stack stack  = createStack();
	int a = 5;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}


void test_push_should_add_a_element_to_the_top_of_the_list_of_float_type(){
	Stack stack  = createStack();
	float a = 5.6;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}

void test_push_should_add_a_element_to_the_top_of_the_list_of_char_type(){
	Stack stack  = createStack();
	char a = 'a';
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}

void test_push_should_add_a_element_to_the_top_of_the_list_of_double_type(){
	Stack stack  = createStack();
	double a = 2.3;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}

void test_push_should_add_a_element_to_the_top_of_the_list_of_long_int_type(){
	Stack stack  = createStack();
	long int a = 1234567890;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}

void test_push_should_add_a_element_to_the_top_of_the_list_of_singed_char_type(){
	Stack stack  = createStack();
	signed char a = 101;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}


void test_push_should_add_a_element_to_the_top_of_the_list_of_unsigned_char_type(){
	Stack stack  = createStack();
	unsigned char a = 255;
	int value = push(stack ,&a);
	assert((*stack.top)->data == &a);
}
void test_push_should_push_the_element_at_the_top(){
	Stack stack = createStack();
	int a =5 , b= 6;
	int value = push(stack  , &a);
	assert((*stack.top)->data == &a);
	value  = push(stack  , &b);
	assert((*stack.top)->data == &b);
}

void test_pop_should_take_a_element_out_from_the_top(){
	Stack stack = createStack();
	int a =5 , b= 6;
	int * pop_element;
	int value = push(stack  , &a);
	value  = push(stack  , &b);
	assert((*stack.top)->data == &b);
	pop_element = pop(stack);
	assert((*stack.top)->data == &a);
}