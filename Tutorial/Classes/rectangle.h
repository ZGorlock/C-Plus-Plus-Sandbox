//File:   rectangle.h
//Date:   2014-02-03
//Author: Zachary Gill
//Interface of Rectangle class

#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

class Rectangle
{
  public:
    Rectangle ();
    Rectangle (int, int);
    void      setValues (int, int);
    int       area      ();
    bool      isSquare  ();
  protected:
    int width_, height_;
} ;

#endif