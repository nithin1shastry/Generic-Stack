/*
Description: This file acts as application file and can perform various operations of stack on different datatypes.
Author: Nithin Shastry M
*/
#include"Stack.h"
#include<iostream>
using namespace std;


int main() {

	Stack *stack_of_double ;

	double iitem;
	//cout << "creating stack of type double" << endl;

	stack_of_double = createStack(2, sizeof(iitem));

	iitem = 55.56;

	push(stack_of_double, (char *)&iitem);

	double item = 456.789;

	try {
		int d=push(stack_of_double, (char *)&item);
	}
	catch (int d) {
		if (d == -1) {
			cout << "Item hasn't added to stack" << endl;
		}
		else if (d == 0) {
			cout << "Item  added to stack" << endl;
		}
	}
	

	double pitem;

	 pop(stack_of_double, (char *)&pitem);
	 cout << pitem<<endl;
	 pop(stack_of_double, (char *)&pitem);
	 cout << pitem<<endl;
	 close(stack_of_double);


	 //creating stack of type character
	 Stack *character_stack;
	 char charitem;
	 character_stack = createStack(1, sizeof(charitem));
	 charitem = 'a';
	 push(character_stack, (char *)&charitem);
	 char c;
	 pop(character_stack, (char *)&c);
	 cout << c << endl;
	 char d;
	 pop(character_stack, (char *)&d);//prints stack is empty
	 cout << d<< endl;

	 close(character_stack);

	




	getchar();
	return 0;
}