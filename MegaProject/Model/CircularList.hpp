//
//  CircularList.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/3/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    void add(Type data);
    Type remove(int index);
    Type getFromINdex(int index);
    Type setAtIndex(int index, Type data);
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    
}


template <class Type>
CircularList<Type> :: ~CircularList()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}

template <class Type>
BiDirectionalNode<Type> * CircularList<Type> :: findNode(int index)
{
    BiDirectionalNode<Type> * nodeToFind;
    if(index < this->getSize() / 2)
    {
        nodeToFind = this->getFront();
        for(int spot = 0; spot < index; spot++)
        {
            nodeToFind = nodeToFind->getNextPointer();
        }
    }
    else
    {
        nodeToFind = this->getEnd();
        for(int spot = this->getSize() -1; spot > index; spot--)
        {
            nodeToFind = nodeToFind->getPreviousPointer();
        }
    }
    return nodeToFind;
}

template<class Type>
void CircularList<Type> :: add(Type data)
{
    BiDirectionalNode<Type> * addMe = new BiDirectionalNode<Type>(data);
    
    if(this->getSize() == 0)
    {
        this->setFront(addMe);
        this->setEnd(addMe);
        addMe->setPreviousPointer(this->getFront());
        this->getFront()->setNextPointer(this->getEnd());
    }
    else
    {
        this->getEnd()->setNextPointer(addMe);
        addMe->setPreviousPointer(this->getEnd());
        addMe->setNextPointer(this->getFront());
        this->getFront()->setPreviousPointer(addMe);
        this->setEnd(addMe)
    }
    this->setSize(this->getSize() + 1);
}
/*
 1) Method is made, uses template
 2) Calls addMe to start the replacing proccess
 3) Checks to see if the list has any data already, if it doesn't it will add your new value to the front/head of the list
 4) If there is already a value in the front of the list, it will find the next pointer that doesn't have a value yet.  Then it will add the value there
 5) Adds one more to the size of the list
 */
template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->getSize());
    
    Type removedValue;
    
    BiDirectionalNode<Type> * removed = findNode(index);
    
    removedValue = removed->getNodeData();
    
    BiDirectionalNode<Type> * oldPrevious = removed->getPreviousPointer();
    BiDirectionalNode<Type> * oldNext = removed->getNextPointer();
    
    if(this->getSize() > 1)
    {
        oldPrevious->setNextPointer(oldNext);
        oldNext->setPreviousPointer(oldPrevious);
        
        if(index == 0)
        {
            this->setFront(this->getFront()->getNextPointer());
        }
        else if(index == this->getSize() - 1)
        {
            this->setEnd(this->getEnd()->getPreviousPointer());
        }
    }
    else
    {
        this->setFront(nullptr);
        this->setEnd(nullptr);
    }
    
    delete removed;
    this->setSize(this->getSize()-1);
    
    return removedValue;
}


template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type retrieved;
    
    BiDirectionalNode<Type> * current = findNode(index);
    
    retrieved = current->getNodeData();
    
    return retrieved;
}

template <class Type>
Type CircularList<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < this->getSize());
    
    Type replaced;
    
    BiDirectionalNode<Type> * current = findNode(index);
    
    replaced = current->getNodeData();
    current->setNodeData(data);
    
    return replaced;
}


#endif /* CircularList_h */
