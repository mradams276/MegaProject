//
//  Stack.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/1/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

template <class Type>
class Stack : DoublyLinkedList<Type>
{
private:
public:
    Stack();
    ~Stack();
    void add(Type value);
    Type remove(int index);
    Type pop();
    Type peek();
    Type push(Type data);
};

//The add method only adds to the end on a stack.  Never at an index.

template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}

/*
 Adds the supplied object to the stack at the end.
 Increases the size by 1.
 Adjusts the end pointer to reflect the new end of the stack.
 */
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode
        (addedThing);
    
    if(this->size == 0 || this->front == nullptr || this->end == nullptr)
    {
        this->front = addToStack;
    }
    else()
    {
        this->end->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->end);
    }
    this->front = addToStack;
    this->size++;}
#endif /* Stack_h */
