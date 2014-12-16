//Problem 1A Theatre Square
//http://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>
using namespace std;

int main () {
  int n, m, a;
  cin >> n >> m >> a;
  cout << ceil(n/a) * ceil(m/a) << endl;
}
