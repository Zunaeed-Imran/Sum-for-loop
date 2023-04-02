#include <iostream>
using namespace std;
int main () {
  int sum=0, n;

  cout << "Enter Number: ";
  cin >> n;

  for(int i = 0; i <= n; i++) {
   sum += i;
  }

  cout << sum;
  return 0;
}