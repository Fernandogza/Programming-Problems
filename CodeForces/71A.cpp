//Problem 71A Way Too Long Words
// http://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main () {
  int cases;
  string input;
  cin >> cases;
  while(cases--) {
    cin >> input;
    if(input.length() > 10) {
      cout << input[0] << input.length()-2 << input[input.length()-1] << endl;
    }
    else {
      cout << input << endl;
    }
  }
}
