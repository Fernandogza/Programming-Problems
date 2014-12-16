//Problem 1A Theatre Square
//http://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <math.h>
using namespace std;

#include <iostream>
#include <math.h>
using namespace std;

int main () {
  long long n, m, a;
  cin >> n >> m >> a;
  cout << (n/a+((n%a)?1:0))*(m/a+((m%a)?1:0)) << endl;
}
