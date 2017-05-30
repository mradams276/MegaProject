//
//  HashNode.h
//  MegaProject
//
//  Created by Adams, Kyle on 5/30/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef HashNode_h
#define HashNode_h

template <class Type>
class HashNode
{
private:
    Type data;
    long key;
public:
    HashNode();
    HashNode(Type data);
    Type getData();
    long getKey();
    void setData();
};
template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = rand();
}
template <class Type>
HashNode<Type> :: HashNode(Type data)
{
    this->key = rand();
    this->data = data;
}
template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}
template <class Type>
void HashNode<Type> :: setData(Type data)
{
    this->data = data;
}
template <class Type>
Type HashNode<Type> :: getData()
{
    return this->data;
}
#endif /* HashNode_h */
