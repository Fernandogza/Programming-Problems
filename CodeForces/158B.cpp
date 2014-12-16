// Problem 158B Taxi
// http://codeforces.com/problemset/problem/158/B

#include <iostream>
using namespace std;

int main () {
  int n, temp;
  int taxis = 0;
  int cant1 = 0;
  int cant2 = 0;
  int cant3 = 0;
  
  cin >> n;
  
  for(int i=0; i<n; i++) {
    cin >> temp;
    if(temp == 1)
      cant1++;
    else if(temp == 2)
      cant2++;
    else if(temp == 3)
      cant3++;
    else
      taxis++;
  }
  if(cant1 >= cant3) {
    taxis+=cant3;
    cant1= cant1-cant3;
    cant3=0;
  }
  else {
    taxis+=cant1;
    cant3 = cant3 - cant1;
    cant1=0;
  }
  taxis+=cant2/2;
  if(cant2%2 ==0)
    cant2 = 0;
  else
    cant2 = 1;
    
  if(cant1 && cant2) {
    taxis++;
    cant2--;
    cant1--;
    if(cant1)
      cant1--;
  }
  taxis+=cant1/4;
  cant1= cant1%4;
  taxis+=cant1;
  taxis+=cant3;
  taxis+=cant2;
  cout << taxis << endl;
}
