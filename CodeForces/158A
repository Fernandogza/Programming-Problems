//Problem 158A Next Round
// http://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main () {
  int n, k, i, max;
  int count = 0;
  int arr [50];
  cin >> n >> k;
  for(i=0; i<n; i++) {
    cin >> arr[i];
  }
  max = arr[k-1];
  for(i=0; i<n; i++) {
    if(arr[i]>=max && arr[i] > 0) {
      count++;
    }
  }
  cout << count << endl;
}
