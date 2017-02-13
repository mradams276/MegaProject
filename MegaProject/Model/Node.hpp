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
    Node<Type>* nodePointer;
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type value);
    void setNodePointer(Node<Type> * nextPointer);
};


/*
Implementation section of the template class goes here
*/

template <class Type>
Node<Type> :: Node<Type>()
{
    nodePointer = nullptr;
    //Not initializing node data because I dun know the type
}

template <class Type>
Node<Type> :: Node<Type>(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node<Type>(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->nodePointer = nextNode;
}

template <class type>
Type Node<Type> :: getNodeData()
{
    return noData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return nodePointer;
}


#endif /* Node_hpp */
