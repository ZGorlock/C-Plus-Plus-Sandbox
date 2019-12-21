#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


int volume(int width, int height, int depth)
{
    return width * height * depth;
}

int main()
{
    int width = 4;
    int height = 4;
    int length = 6;

    int v = volume(width, height, length);

    printf("hi this cube is volume %d\n", v);

  system("PAUSE");
  return 0;
}