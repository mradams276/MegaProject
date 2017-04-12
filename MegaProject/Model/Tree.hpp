//
//  Tree.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 4/11/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Tree_h
#define Tree_h


#endif /* Tree_h */

template <class Type>
class Tree
{
private:
    int height;
    int size;
    bool complete;
    bool balanced;
    
public:
    virtual ~Tree();
    virtual void printToFile() = 0;
    virtual void inOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    virtual void preOrderTraversak() = 0;
    
    int getHeight() const;
    int getSize() const;
    bool isComplete() const;
    bool isBalanced() const;
    
    void setHeight(int height);
    void setSize(int size)
    void setComplete(bool complete);
    void setBalanced(bool balanced);
};

template <class Type>
bool Tree<Type> :: isComplete() const
{
    return this->complete;
}

template <class Type>
void Tree<Type>
