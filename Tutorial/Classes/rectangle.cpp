//File:   rectangle.cpp
//Date:   2014-02-03
//Author: Zachary Gill
//Implementation of Rectangle class

#include "rectangle.h"


//______________________________________________________________________________
Rectangle::Rectangle()
{
  width_ = 0;
  height_ = 0;
}


//______________________________________________________________________________
Rectangle::Rectangle(int w, int h)
{
  width_ = w;
  height_ = h;
}


//______________________________________________________________________________
void Rectangle::setValues(int w, int h)
{
  width_ = w;
  height_ = h;
}


//______________________________________________________________________________
int Rectangle::area()
{
  return width_ * height_;
}


//______________________________________________________________________________
bool Rectangle::isSquare()
{
  if (width_ == height_)
    return true;
  else
    return false;
}