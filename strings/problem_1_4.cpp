// can this problem be done effeciently using recursion ???? check ...

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool checkSubstring(string &str) {

  if(str.size() == 2)
    if(str[0] == str[1])
      return false;
    else
      return true;
  else {
    string str2 = str.erase(0,1);
    cout << str2 << endl;
    return checkSubstring(str2);
  }

}


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


  if(checkSubstring(str) == false)
    printf("String is not unique \n");
  else
    printf("String is unique \n");
}
