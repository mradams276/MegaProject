//
//  DoubleList.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/3/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

#include "DoublyLinkedList.hpp"
#inlcude "DoubleList.hpp"

template <class Type>
class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    void addAtIndex(int index, Type value);
    Type getFromIndex(int index);
    Type getFromIndexFast(int index);
};

template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type valueAtIndex
    BiDirectionalNode<Type> * reference;
    if(index < this->getSize() / 2)
    {
        reference =this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
        }
       else
       {
           reference = this->getEnd();
           for(int position = this->getSize() - 1; position > index; position--)
           {
               reference = reference->getPreviousPointer();
           }
       }
        
        valueAtIndex = reference->getNodeData();
        return valueAtIndex;
}
}

template <class Type>
DoubleList<Type> :: DoubleList() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
DoubleList<Type> :: ~DoubleList()
{
    
}
    
    template <class Type>
    void DoubleList<Type> :: add(Type value)
    {
        BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
        if(this->getSize() == 0)
        {
            this->setFront(addedNode);
        }
        else
        {
            this->getEnd()->setNextPointer(addedNode);
            addedNode->setPreviousPointer(this->getEnd());
        }
        this->setEnd(addedNode);
        this->setSize(this->getSize() + 1);
    }


template <class Type>
Type DoubleList<Type> :: remove(int index)
    {
        type derp;
        BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
        for(int spot = 0; spot < index; spot++)
        {
            nodeToTakeOut = nodeToTakeOut->getNextPointer();
        }
        derp = nodeToTakeOut->getNodeData();
        
        BiDirectionalNode<Type> * prev = nodeToTakeOut->getPrevious();
        BiDirectionalNode<Type> * next = NodeToTakeOut->getNextPointer();
        
        prev->setNextPointer(next);
        next->SetPreviousPointer(previous);
        
        delete nodeToTakeOut;
        
        this->setSize(this->getSize() - 1);
        return derp;
    }


template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >=)
}
#endif /* DoubleList_h */