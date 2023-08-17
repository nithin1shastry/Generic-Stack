# Generic-Stack

Project Name

Stack Library 

Project Description

This project allows the user to create stack of different datatypes using a single program. The project is implemented using
C++ language.

Description of Functions

NAME           createStack
    
SYNOPSIS       Used to create stack of items provided number of items to be added into stack and size of the item.

DESCRIPTION    createStack function has parameters number of items and size of the item and returns object of type stack.
               The prototype of the function can be defined as Stack *createStack(int nitems, int size).

NAME           push

SYNOPSIS       Used to push items onto the stack.

DESCRIPTION    push function has parameter of type stack pointer and item of character pointer type and a return type of int.
               push returns 0 if the item is successfully inserted in stack and returns -1 if item is not inserted.
               The prototype of the function can be defined as int push(Stack * stack, char * item)


NAME           pop

SYNOPSIS       Used to pop items from the stack.

DESCRIPTION    pop function has parameter of type stack pointer and item of character pointer type and a return type of int.
	       pop returns 0 if the item is successfully inserted in the stack and returns -1 if the item is not inserted.
	       The prototype of the function can be defined as int pop(Stack * stack, char *item);

NAME           close

SYNOPSIS       Used to deallocate memory assigned to the stack.

DESCRIPTION    close function has a parameter of type stack pointer and has a return type of void.
	       Once the function is called the function deallocates the alloted memory for the stack.
	       The prototype of the function can be defined as void close(Stack *stack);
