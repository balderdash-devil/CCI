#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;


bool checkPermutation(string& str1, string& str2);

int main(int argc, char** argv) {

  string str1(argv[1]);
  string str2(argv[2]);

  if(checkPermutation(str1,str2) )
    printf("They are permutations .. \n");
  else
    printf("They are not permutations .. \n");
}

bool checkPermutation(string& str1, string& str2) {

  int count[128] = {0};
  for(size_t i = 0; i < str1.size(); i++) {
    count[(int)(str1.at(i))]++;
  }

  for(size_t i = 0;i < str2.size(); i++) {
    if(--count[(int)(str2.at(i))] < 0)
      return false;
  }

  return true;
}

// this program is linear in n
