//File:   square.cpp
//Date:   2014-02-03
//Author: Zachary Gill
//Implementation of Square class

#include "square.h"


//______________________________________________________________________________
Square::Square()
{
  width_ = 0;
  height_ = 0;
}


//______________________________________________________________________________
Square::Square(int s)
{
  width_ = s;
  height_ = s;
}

bool Square::isSquare()
{
  return true;
}