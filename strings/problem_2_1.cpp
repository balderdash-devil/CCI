#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(int argc, char** argv) {

  // check every element with every other element

  // will this take n^2 computations ? : yes

  // can we do faster ?

  // what about memory ?


  string str1(argv[1]);
  string str2(argv[2]);

  if(str1.size() != str2.size()) {
    printf("They are not permutations .. \n");
    return 1;
  }

  for(size_t str1_index = 0 ; str1_index < str1.size(); str1_index++) {
    char val = str1[str1_index];
    for(size_t str2_index = 0 ; str2_index < str2.size(); str2_index++) {
      if(val == str2[str2_index])
      {
        str2.erase(str2_index,1);
        cout <<str2 << endl;
        break;
      }
    }
  }

  if(str2.size() == 0)
    printf("They are permutations .. \n");
  else
    printf("They are not permutations\n");

}


// it is linear in size of the string .. can we do better ?

// is this really linear erase might have a linear complexity itself ...
