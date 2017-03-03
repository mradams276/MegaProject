//
//  Node.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/13/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class Type>
class Node
{
private:
    Type nodeData:
    Node<Type> * nextPointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNextPointer();
    void setNodeData(Type value);
    void setNextPointer(Node<Type> * nextPointer);
};


/*
Implementation section of the template class goes here
*/

template <class Type>
Node<Type> :: Node()
{
    nextPointer = nullptr;
    //Not initializing node data because I dun know the type
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nextPointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->nextPointer = nextNode;
}

template <class type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNextPointer()
{
    return nextPointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type data)
{
    this->nodeData = data;
}

template <class Type>
void Node<Type> :: setNextPointer(Node<Type> * pointer)
{
    this->nextPointer = pointer;
}


#endif /* Node_hpp */
