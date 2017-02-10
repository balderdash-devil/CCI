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

  bool flag = true;// is it unique ?
  for(size_t i = 0; i < length_s1; i++) {
    for(size_t j = i+1; j < length_s1; j++) {
      if(s1[i] == s1[j])
        flag = false;
    }
  }

  if(flag)
    printf("string is unique \n");
  else
    printf("string is not unique \n");
}
