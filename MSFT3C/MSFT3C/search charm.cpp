//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <iostream>
//
//using namespace std;
//
//
//string word;
//string story;
//vector<string> tokens;
//
//int a = 0, b = 0;
//string c;
//
//
//void readFile();
//void traverse();
//void printFile();
//string uCase(string);
//
//int main()
//{
//  readFile();
//
//  traverse();
//
//  printFile();
//
//  return 0;
//}
//
//void readFile()
//{
//  fstream fs;
//  fs.open("input2.txt", fstream::in);
//
//  getline(fs, word);
//  string tmp;
//  while (getline(fs, tmp))
//    story += " " + tmp;
//  
//  int tc = 0;
//  string token = "";
//  for (size_t i = 0; i < story.size(); i++) {
//    if (isalnum(story[i]))
//      token += story[i];
//    else if (token > "") {
//      tc++;
//      tokens.push_back(token);
//      token = "";
//    }
//  }
//
//  return;
//}
//
//void traverse()
//{
//  for (size_t i = 0; i < tokens.size(); i++) {
//    string t = uCase(tokens[i]);
//    if (t.find(uCase(word)) == 0) {
//      b++;
//      if (t == uCase(word))
//        a++;
//      if (c == "")
//        c = tokens[i];
//    }
//
//  }
//  return;
//}
//
//void printFile()
//{
//  fstream fs;
//  fs.open("output2.txt", fstream::out);
//
//  fs << a << ";" << b << ";" << c;
//
//  fs.close();
//
//  return;
//}
//
//string uCase(string s)
//{
//  string o = "";
//  for (size_t i = 0; i < s.length(); i++) {
//    o += toupper(s[i]);
//  }
//  return o;
//}