#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(int argc, char** argv) {

  if(argc < 2) {
    printf("./problem1_3 string \n");
    return 1;
  }

  string str(argv[1]);
  size_t strLength = str.size();

  if(strLength > 128) {
    printf("String is not unique \n");
    return 1;
  }

  int checker = 0;
  bool flag = true;

  for(size_t i = 0; i < strLength; i++) {
    int val = (int)(str.at(i) -'a');
    if((checker & (1<< val) ) > 0) {
      flag = false;
      break;
    }
    checker = checker | (1<<val);
  }

  if(flag == false)
    printf("String is not unique \n");
  else
    printf("String is unique \n");
}
