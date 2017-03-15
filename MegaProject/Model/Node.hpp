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
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNextPointer();
    void setNodeData(Type value);
    void setNextPointer(Node<Type> * nextPointer);
private:
    Type nodeData;
    Node<Type> * changedPointer;
};


/*
Implementation section of the template class goes here
*/

template <class Type>
Node<Type> :: Node()
{
    this->changedPointer = nullptr;
    //Not initializing node data because I dun know the type
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->changedPointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->changedPointer = nextNode;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNextPointer()
{
    return changedPointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type data)
{
    this->nodeData = data;
}

template <class Type>
void Node<Type> :: setNextPointer(Node<Type> * pointer)
{
    this->changedPointer = pointer;
}


#endif /* Node_hpp */
