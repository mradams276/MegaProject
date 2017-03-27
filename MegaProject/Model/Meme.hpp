//
//  Meme.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/27/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef Meme_hpp
#define Meme_hpp
#include <stdio.h>
#include <string>

using namespace std;

class Meme
{
private:
    string title;
    int dankness;
    double hipsterQuotient;
    bool mainstream;
public:
    Meme();
    Meme(string title);
    int getDankness();
    double getHipsterQuotient();
    bool isMainstream();
    string getTitle();
    void setTitle(string title);
    void setDankness(int dank);
    void setHipsterQuotient(double hipsterQuotient);
    void setMainstream(bool mainstream);
    
    bool operator < (Meme & compared);
    bool operator > (Meme & compared);
    bool operator == (Meme & compared);
};


#endif /* Meme_hpp */
