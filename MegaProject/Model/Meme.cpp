//
//  Meme.cpp
//  MegaProject
//
//  Created by Adams, Kyle on 3/27/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include "Meme.hpp"




void Meme :: setTitle(string title)
{
    this->title = title;
}

void Meme :: setHipsterQuotient(double hipsterQuotient)
{
    
}










bool Meme :: operator < (Meme & comparedMeme)
{
    if(this->isMainstream() && comparedMeme.isMainstream())
    {
        if(this->getDankness() < comparedMeme.getDankness())
        {
            return true;
        }
        return false;
    }
    return false;
}
