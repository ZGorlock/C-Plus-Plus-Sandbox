#include <iostream>
#include <string>
#include <regex>

#include "tre\regex.h" //includes tre

using namespace std;

int main()
{
  int hr;

  regex_t a;
  string regex = "^test\\s([[:print:]]*)\\stest\\s([[:print:]]*)$"; //the regular expression
  //surround anything you want to extract in (), the start and end location of the corresponding material in the string will be stored later

  //create regex expression
  hr = regcomp(&a, regex.c_str(), REG_EXTENDED | REG_ICASE | REG_NEWLINE | REG_UNGREEDY);

  if (hr) { //error
    cout << "regcomp error: ";
    switch (hr) { //error codes
      case REG_BADPAT:
        cout << "invalid regexp";
        break;
      case REG_ECOLLATE:
        cout << "invalid collating element referenced";
        break;
      case REG_ECTYPE:
        cout << "unknown character class name";
        break;
      case REG_EESCAPE:
        cout << "last character of regex was a \\";
        break;
      case REG_ESUBREG:
        cout << "invalid back reference";
        break;
      case REG_EBRACK:
        cout << "[] imbalance";
        break;
      case REG_EPAREN:
        cout << "\\(\\) or () imbalance";
        break;
      case REG_EBRACE:
        cout << "\\{\\} or {} imbalance";
        break;
      case REG_BADBR:
        cout << "{} content invalid";
        break;
      case REG_ERANGE:
        cout << "invalid character range";
        break;
      case REG_ESPACE:
        cout << "out of memory";
        break;
      case REG_BADRPT:
        cout << "invalid use of repitition operators";
        break;
    }
    cout << endl;
  }
  else { //success
    cout << "regex expression loaded" << endl;

    string testStr = "test a variable test another variable"; //string to test against regex

    regaparams_t params;
    params.cost_ins = 1;
    params.cost_del = 1;
    params.cost_subst = 1;
    params.max_cost = INT_MAX; //any cost (you will definitely get a match but its the cost I am interested in in this case)
    params.max_ins = INT_MAX;
    params.max_del = INT_MAX;
    params.max_subst = INT_MAX;
    params.max_err = INT_MAX;
    
    regmatch_t pmatch[10]; //stores the segment match locations
    regamatch_t match; //stores return data from the match
    match.nmatch = 10;
    match.pmatch = pmatch;

    //compare match to regex a
    hr = regaexec(&a, testStr.c_str(), &match, params, NULL);

    if (hr) { //error
      cout << "regexec error: ";
      //error codes
      switch (hr) {
        case REG_NOMATCH:
          cout << "no match";
          break;
        case REG_ESPACE:
          cout << "out of memory";
          break;
      }
      cout << endl;
    }
    else { //success
      cout << "Match: (" << match.cost << ")" << endl; //get the cost of the transformation from the string to the expression format
      for (size_t i = 1; i < match.nmatch; i++) { //pmatch[0] is just the start and end for the whole string
        if (pmatch[i].rm_eo > -1 && pmatch[i].rm_so > -1)
          cout << pmatch[i].rm_so << " - " << pmatch[i].rm_eo << " - " << testStr.substr(pmatch[i].rm_so, (pmatch[i].rm_eo - pmatch[i].rm_so)) << "|" << endl; //variables are extracted
      }
    }

    regfree(&a); //free the regex
  }

  system("PAUSE");
  return 0;
}