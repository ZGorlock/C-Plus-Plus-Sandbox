//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//
//string word;
//vector<string> grid;
//vector<vector<bool> > use;
//int xDim, yDim;
//int index = 0;
//
//
//void readFile();
//bool traverse(vector<vector<bool> >, int, int, int);
//void fixGrid();
//void printFile();
//
//int main()
//{
//  readFile();
//  if (grid.size() == 0)
//    return false;
//
//  vector<string> tmpGrid = grid;
//  vector<vector<bool> > tmpUse = use;
//  traverse(use, 0, 0, 0);
//  
//  fixGrid();
//  printFile();
//
//  return 0;
//}
//
//void readFile()
//{
//  fstream fs;
//  fs.open("input1.txt", fstream::in);
//
//  getline(fs, word);
//
//  string tmp = "";
//  while (getline(fs, tmp))
//    grid.push_back(tmp);
//
//  fs.close();
//
//  if (grid.size() > 0) {
//    xDim = grid[0].length();
//    yDim = grid.size();
//  }
//
//  vector<bool> tmpB;
//  for (int i = 0; i < xDim; i++) {
//    tmpB.push_back(false);
//  }
//  for (int i = 0; i < yDim; i++) {
//    use.push_back(tmpB);
//  }
//
//  return;
//}
//
//bool traverse(vector<vector<bool> > tmpUse, int x, int y, int index)
//{
//  if (x == xDim - 1 && y == yDim - 1 && index == word.length() - 1) {
//    if (grid[y][x] == word[index]) //if right char
//      tmpUse[y][x] = true;
//    use = tmpUse;
//    return true;
//  }
//  else {
//    if (grid[y][x] == word[index]) { //if right char
//
//      tmpUse[y][x] = true;
//      vector<vector<bool> > tmpTmpUse;
//
//      if (x < xDim - 1) {
//        if (!tmpUse[y][x + 1]) {
//          tmpTmpUse = tmpUse;
//          bool right = traverse(tmpTmpUse, x + 1, y, index + 1);
//          if (right) //move right
//            return true;
//        }
//      }
//      
//      if (y < yDim - 1) {
//        if (!tmpUse[y + 1][x]) {
//          tmpTmpUse = tmpUse;
//          bool down = traverse(tmpTmpUse, x, y + 1, index + 1);
//          if (down) //move down
//            return true;
//        }
//      }
//
//      if (x > 0) {
//        if (!tmpUse[y][x - 1]) {
//          tmpTmpUse = tmpUse;
//          bool left = traverse(tmpTmpUse, x - 1, y, index + 1);
//          if (left) //move left
//            return true;
//        }
//      }
//
//      if (y > 0) {
//        if (!tmpUse[y - 1][x]) {
//          tmpTmpUse = tmpUse;
//          bool up = traverse(tmpTmpUse, x, y - 1, index + 1);
//          if (up) //move up
//            return true;
//        }
//      }
//
//
//    }
//  }
//
//  return false;
//}
//
//void fixGrid()
//{
//  for (int i = 0; i < yDim; i++) {
//    for (int j = 0; j < xDim; j++) {
//      if (!use[i][j])
//        grid[i][j] = '.';
//    }
//  }
//
//  return;
//}
//
//void printFile()
//{
//  fstream fs;
//  fs.open("output1.txt", fstream::out);
//
//  for (size_t i = 0; i < grid.size(); i++)
//    fs << grid[i] << endl;
//
//  fs.close();
//
//  return;
//}