/*
Description: This file contains the class declaration along with its data members and member functions and other functions to 
                  implement Stack library.
Author: Nithin Shastry M
*/

#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Stack {//class with name Stack

	int nitems;//private data members
	int size;
	char *beg;
	char *end;
	char *sp;

public:  void setNitems(int nitems);//member functions
		    void setSize(int size);
			void setBeg(char *beg);
			void setEnd(char *end);
			void setSp(char *sp);
			
			//void soi();

			inline int getNitems();
			inline int getSize();
			inline char *getBeg();
			inline char *getEnd();
			inline char *getSp();


};

Stack *createStack(int nitems, int size);//function to create stack

void myMemcpy(char *destination, char *source, int size);//to implement memory copy

int push(Stack * stack, char * item);//to push into stack

int  pop(Stack * stack, char * item);//pop elements from stack

void close(Stack *S);//to deallocate memory from stack


































































/*#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Stack {//class with name Stack

           	int nitems;//private data members
			int size;
			char *beg;
			char *end;
			char *sp;

public:   Stack *createStack(int nitems, int size);
		     int push(Stack *stack, char *item);
		     int pop(Stack *stack, char *item);
		     void closeStack(Stack *stack);

};

Stack * Stack::createStack(int nitems, int size)
{
	Stack *newStack = new Stack();

	char *array = new char[nitems*size];

	newStack->nitems = nitems;

	newStack->size = size;
	
	newStack->beg = &array[0];

	newStack->end = &array[nitems*size - size];
	
	newStack->sp = &array[0];
	
	return newStack;
}

void myMemcpy(char *destination,char *source,int size)
{

	for (int i = 0; i < size; i++)
		destination[i] = source[i];
}
int Stack::push(Stack * stack, char * item)
{
	if (stack->sp == stack->end) {
		cout << "STACK OVERFLOW" << endl;
		return -1;
	}
	myMemcpy(stack->sp, item, stack->size);
	stack->sp =  stack->sp + stack->size ;
	return 1;
}

int Stack::pop(Stack * stack, char * item)
{
	stack->sp=(char *)((int *)stack->sp - ((stack->size) / 4));

	memcpy(item, stack->sp, stack->size);
}*/

