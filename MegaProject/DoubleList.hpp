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
DoubleList<Type> :: DoubleList() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >=)
}
#endif /* DoubleList_h */
