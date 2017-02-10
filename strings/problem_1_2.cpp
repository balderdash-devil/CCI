#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(int argc, char** argv) {

  if(argc != 2 ) {
    printf("./Problem1 string \n");
    return 1;
  }

  string s1(argv[1]);

  size_t length_s1 = s1.size();

  bool flag = true;

  bool allcharacters[128] = {false}; // array must be initialized with a brace colon


  if(length_s1 > 128) {
    printf("The string is not unique\n");
    return 1;
  }


  for(int i = 0 ; i < length_s1; i++) {
    int val = (int)(s1.at(i));
    if(allcharacters[val])
    {
      flag = false;
      break;
    }
    allcharacters[val] = true;

  }

  if(flag == false)
    printf("string is not unique\n");
  else
    printf("string is unique\n");

  return 1;

}
