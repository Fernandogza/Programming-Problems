// Problem 118A String Task
// http://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

int main () {
  string word;
  string result = "";
  cin >> word;
  transform(word.begin(), word.end(), word.begin(), ::tolower);
  for(int i=0; i<word.length(); i++) {
    if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y' || 
       word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
      continue;    
    }
    else {
      result.append(".");
      result.append(word, i, 1);
    }
  }
  cout << result << endl;
}
