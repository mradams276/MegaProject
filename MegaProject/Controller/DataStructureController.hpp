//
//  DataStructureController.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 5/30/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include <stdio.h>

#include "../Model/Array.hpp"
#include "../Model/Node.hpp"
#include "../Model/Timer.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.h"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include "../Model/Meme.hpp"
#include <string>
#include "../Model/Graph.h"
using namespace std;
class DataStructureController
{
private:
    // Array<int> numberArray;
    Graph<string> KyleGraph;
    // void testIntArray();
    // void testNodeTypes();
    // void testArrayTemplate();
    // void testListIntro();
    // void testAdvancedFeatures();
    // void testListTiming();
    // //meme testing
    // void testMemeQueue();
    // void testNumberStack();
    // //testing
    // void testBinarySearchTreeOperations();
    //
    //test GraphPoints
    void testGraph();
public:
    DataStructureController();
    void start();
};


#endif /* DataStructureController_hpp */
