//
//  IntNodeArray.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"

class IntNodeArray
{
private:
    IntNode * head;
    int size;
public:
    IntNodeArray(int bigness);
    int getSize();
    int getFromIndex(int index);
    void setAtIndex(int index, value int);
};

#endif /* IntNodeArray_hpp */
