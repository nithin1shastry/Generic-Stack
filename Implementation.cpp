/*
Description: This file contains all the implementations of the various methods used for implementation of Stack library
Author: Nithin Shastry M
*/

#include"Stack.h"
#include<iostream>
using namespace std;
void Stack::setNitems(int nitems) {
	this->nitems = nitems;
}


void Stack::setSize(int size) {
	this->size = size;
}


void Stack::setBeg(char *beg) {
	//cout << (int*) &beg[0]<<endl;
	//this->beg =&beg[0];
	this->beg = beg;
}


void Stack::setEnd(char *end) {

	this->end = &end[nitems*size-size];
}


void Stack::setSp(char *sp) {
	this->sp = sp;
	//this->soi();

}

inline int Stack::getNitems()
{
	return (this->nitems);
}

inline int Stack::getSize()
{
	return (this->size);
}

inline char * Stack::getBeg()
{
	return(this->beg);
}

inline char * Stack::getEnd()
{
	return (this->end);
}

inline char * Stack::getSp()
{
	return (this->sp);
}

Stack *createStack(int nitems, int size)//creating stack
{

	Stack *newStack = new Stack();

	char *array = new char[nitems*size];

	newStack->setNitems(nitems);
	//cout<<newStack->getNitems()<<endl;

	newStack->setSize(size);
	//cout << newStack->getSize() << endl;

	//cout << (int*)&array[0]<<endl;
	newStack->setBeg(&array[0]);
	//cout << newStack->getBeg() << endl;
	//cout << (int*)&array[nitems*size - size] << endl;

	newStack->setEnd(array);
	//cout << newStack->getEnd() << endl;

	newStack->setSp(&array[0]);
	//cout << newStack->getSp() << endl;

	return newStack;
}

void myMemcpy(char *destination, char *source, int size)//method to perform memory copy
{

	for (int i = 0; i < size; i++)
		destination[i] = source[i];
}


int push(Stack * stack, char * item)//to perform push operation on stack
{
	//cout << *(double*)item << endl;
	if (stack->getSp() > stack->getEnd()) {
		//cout << "SP" << (int*)stack->getSp() << endl;
		//cout << "ENd:" <<(int *) stack->getEnd() << endl;
		cout << "STACK OVERFLOW" << endl;
		return -1;
	}
	myMemcpy(stack->getSp(), item, stack->getSize());
	stack->setSp(stack->getSp() + stack->getSize());
	//stack->soi();

	return 0;
}

int  pop(Stack * stack, char * item)//method to perform pop operation on stack
{
	if (stack->getSp() == stack->getBeg()) {
		cout << "Empty Stack" << endl;
		return -1;
	}
	stack->setSp(stack->getSp() - stack->getSize());

	myMemcpy(item, stack->getSp(), stack->getSize());

	return 0;
}

void close(Stack *S) {//deallocating stack memory
	delete(S);
}

