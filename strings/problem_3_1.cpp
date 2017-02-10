#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include<stdlib.h>

using namespace std;

int main(int argc, char** argv) {

  if(argc < 3)
  {
    printf("./problem_3_1 string count \n");
    return 1;
  }

  string str(argv[1]);
  string newstring;
  int size = atoi(argv[2]);

  for(int i = 0; i < size ; i++) {
    if(str[i] != ' ')
      newstring.insert(newstring.end(), str[i]);
    else
      newstring.append("%20");
  }

  cout << newstring << endl;
  return 1;
}
