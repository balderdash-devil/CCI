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

  char result[512];

  int k = 512-1;
  for(int i = str.size()-1; i >0 ; i--) {

    if(str[i] == ' ') {
      result[k] = '0';
      k--;
      result[k] = '2';
      k--;
      result[k] = '%';
      k--;
    } else
    {
      result[k] = str[i];
      k--;
    }

  }
  cout << string(result) << endl;

  return 1;
}
