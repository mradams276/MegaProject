//
//  IntNode.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
public:
    //Constructors
    IntNode();
    IntNode(int value);
    //Creates IntNode
    IntNode(int value, IntNode * nextNode);
    //Methods
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode* updatedNode);
};

#endif /* IntNode_hpp */
