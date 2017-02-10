#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string bubblesort(string& str1);
bool swap(string& str1, size_t i);

string insersionsortsort(string& str1);

string selectionsort(string& str1);
size_t findMinimumIndex(string& str);
bool swap(string& str1, size_t i, size_t j);

int main(int argc, char** argv) {

  string str1(argv[1]);
  string str2(argv[2]);

  string sortedString = selectionsort(str1);
  cout << sortedString << endl;

//  if(checkPermutation(str1,str2) )
//    printf("They are permutations .. \n");
//  else
//    printf("They are not permutations .. \n");
}

string bubblesort(string& str1) {
  string sortedString = str1;
  bool flag = false;
  size_t k =1;
  do {
    flag = false; // reset
    for(size_t i = 0; i<sortedString.size()-k; i++) {
      if(sortedString[i] > sortedString[i+1]) {
         swap(sortedString, i);
         flag = true;
      }
    }
    k++;
  } while(flag);
  return sortedString;

}

bool swap(string& str, size_t i) {
  if (i >= str.size())
    return false;
  else {
    char a = str[i];
    char b = str[i+1];
    str[i] = b;str[i+1] = a;
  }
}

string insersionsortsort(string& str1) {
  string sortedString;
  sortedString.insert(sortedString.begin(),str1[0]);
  for(size_t i = 1 ; i < str1.size() ; i++) {
    char val = str1[i];
    for(size_t j = 0; j <= sortedString.size(); j++) {
      if(val < sortedString[j] || j == sortedString.size()) {
        sortedString.insert(sortedString.begin()+j,val);
        break;
      }
  } //innter for loop
      } // outer for loop
  return sortedString;
  } // function

string selectionsort(string& str1) {

  string sortedString(str1);

  for(size_t i = 0; i < str1.size()-1; i++) {
    // get the substring
    string s = sortedString.substr(i+1);
    size_t index = findMinimumIndex(s);
    swap(sortedString,i,i+index+1);
  }
  return sortedString;
}

size_t findMinimumIndex(string& str) {
  char min = str[0];
  size_t index = 0;
  for(size_t i = 1 ; i <str.size(); i++) {
    if(str[i] < min) {
      min = str[i];
      index = i;
    }
  }
  return index;
}

bool swap(string& str, size_t i, size_t j) {
  if (i >= str.size() || j >= str.size())
    return false;
  else {
    char a = str[i];
    char b = str[j];
    str[i] = b;str[j] = a;
  }
}
// this program is linear in n

// merge sort, quick sort ?

// complexity ?
