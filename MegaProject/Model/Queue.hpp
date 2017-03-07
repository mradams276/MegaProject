//
//  Queue.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/3/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Queue : public DoubleLinkedList<Type
{
    
};`

/*
 all this is doing is removing memory allocations
 Same destructor as list, array, stack... since it is a linear data structure.
 */

template <class Type>
Queue<Type> :: ~Queue()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}
/*
 The add method only adds to the end on a stack.  Never at an index
 Implemented only to avoid abstract status in this class.
 */
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}

/*
 1. Creates a new node
 2. If the stack is empty sets front to the new node
 3. Else sets the end's next to point to the new node and the new nodes previous to end
 4. Move end to the new node.
 5. Increases the size by 1
 */
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode<Type>(addedThing);
    
    if(this->getSize() == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront(addToStack);
    }
    else
    {
        this->getEnd()->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addToStack);
    this->setSize(this->getSize() + 1);
}
/*
 Used to avoid abstract status.
 Asserts that the size is correct and calls the pop method.
 */
template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() - 1 && this->getSize() > 0;
           return pop();
}
  
           
           
template <class Type>
           Type Stack<Type> :: peek()
           {
               assert(this->getSize() > 0);
               return this->end->getNodeData();
           }
           
/*
1. Assert size > 0
2. Get data from end node
3, Move end to ends previous
4. Delete old end node
5. Decrease size
*/
           
           template <class Type>
           Type Stack<Type> :: pop()
    {
               assert(this->getSize() > 0);
               Type removed = this->getEnd()->getNodeData();
               
               BiDirectionalNode<Type> * update = this->getEnd();
               update = update->getPreviousPointer();
               
               if(update != nullptr)
               {
                   update->setNextPointer(nullptr);

               }
               
               delete this->getEnd();
               
               this->setEnd(update);
               
               this->setSize(this->getSize() - 1);
               
               return removed;
           }
           
    }
/*
 Add to queue:
 1. Create Node
 2. If size == 0, adjust front to point to new node
 3. Else, add new node to ends next
 4. Move end to new node
 5. Adjust size + 1
*/
template <class Type>
void Queue<Type> :: enqueue(Type insertedValue)
{
    BiDirectionalNode<Type> * added = new BiDirectionalNode<Type>(insertedValue);
    
    if(this->getSize() == 0 || this-> getFront() == nullptr || this->getEnd() == nullptr)
    {
        this-> setFront(added);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
        added->setPreviousPointer(this->getEnd());
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1);
}


/*
 1. Assert size is valid.
 2. Get data from front node.
 3. If size == 1, set end to nullptr
 4. Else, move front to front next
 4a Set new fronts previous to nullptr
 5. Delete old front node
 6. Adjust size down by 1
 7. Return old value
 if size == 1
    adjust end to null
 else
    move front to next
 get data from front
 delete old front node
 adjust size
 return value
 */
template <class Type>
type Queue<Type> :: dequeue()
{
    assert(this->getSize() > 0);
    
    Type removedValue = this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this->getFront();
    
    if(this->getSize() == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer());
    }
    this->setFront()->setPreviousPointer(nullptr);
    
    delete removeMe;
    this->setSize(this->getSize() - 1);
    
    return removedValue;

/*
 1. Check that the size is greater than 0.
 2. Return the front objects data.
 */
template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    
    return this->getFront()->getNodeData();
}














#endif /* Queue_h */
