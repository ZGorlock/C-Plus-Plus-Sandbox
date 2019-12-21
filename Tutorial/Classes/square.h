//File:   square.h
//Date:   2014-02-03
//Author: Zachary Gill
//Interface of Square class

#ifndef __SQUARE_H__
#define __SQUARE_H__

#ifndef __RECTANGLE_H__
#include "rectangle.h"
#endif

class Square : public Rectangle
{
  public:
    Square();
    Square(int);
    bool isSquare();
} ;

#endif