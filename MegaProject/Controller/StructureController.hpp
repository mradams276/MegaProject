//
//  MegaController.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#indlude "../Model/Array.hpp"
#include <string>
using namespace std;

class StructureController
{
private:
    Node<int> numberNode;
    Node<string> wordNode;
    Array<int> numberArray;
    
    void testIntArray();
    void testNodeTypes();
    void testArrayTemplate();
    void testAdvancedFeatures();
public:
    StructureController();
    void start();
};

#endif /* MegaController_hpp */
