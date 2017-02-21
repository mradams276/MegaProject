//
//  Array.h
//  MegaProject
//
//  Created by Adams, Kyle on 2/15/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Array_h
#define Array_h

#indluce ".hpp"
#include "Node.hpp"

template <class Type>
class Array
{
private:
    Node<Type> * front;
    int size;
public:
    //Constructors
    Array<Type>();
    Array<Type>(int size);
    
    //Destructor
    ~Array<Type>();
    //Copy Constructor
    Array<Type>(const Array<Type> & toBeCopied);
    //Assignment Operator Overload
    void operator = (const Array<Type> & toBeAssigned);
    
    
    //Methods
    int getSize() const;
    Node<Type> * getFront() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
};

//Implementations

/*
 Creates an array of specified size by linking Node<Type> together.
 */
template <class Type>
Array<Type> :: Array()
{
    //Do not use!!!
}

template <class Type>
Array<Type> :: ~Array()
{
    int cout = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        //Move to next node in array
        front = front->getNodePointer();
        cout << "Moving to the next node. At: " << cout << endl;
        //Delete the front pointer
        delete remove;
        cout << "Moving to new front pointer." << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << cout << endl;
    }
}

template <class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this->size = toBeCopied.getSize();
    
    //Build Data Structure
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setNodePointer(front);
        front = temp;
    }
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> * updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated->setNodeData(copyTemp->getNodeData());
        updated = updated->getNodePointer();
        copyTemp = copyTemp->getNodePointer();
    }
}
template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * currentNode = new Node <Type>();
        currentNode->setNodePointer(front);
        front = currentNode;
    }
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >=0 && index < size);
    Type value;
    
    Node<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer()
    }
    
    value = current->getNodeData();
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type Value)
{
    assert(index >= 0 && indes < size);
    Node<Type> * current
}


#endif /* Array_hpp */
