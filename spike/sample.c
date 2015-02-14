#include <stdio.h>
#include <stdlib.h>

struct number {
	int number;
};

struct add{
	int a;
	int b;
	struct number *num;
};

int main(){
	int c;

	struct add adddtion;
	struct add *adding;
	struct add **double_adding;
	struct number n;
	
	double_adding = &adding;
	adding = &adddtion;
	adddtion.a = 10;
	adddtion.b = 12;
	c=adddtion.a+adddtion.b;
	printf("value of c is %d\n", c);
	c = (*adding).a+adding->b;
	printf("value of c is %d\n",c );
	c= (**double_adding).a+(**double_adding).b;
	printf("value of c is %d\n",c );
	n.number = 1;
	adddtion.num  = &n;
	printf("The value of num is %d" ,  adddtion.num->number);


	return 0;
}