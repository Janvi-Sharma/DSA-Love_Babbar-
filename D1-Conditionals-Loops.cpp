#include <iostream>
using namespace std;
int main() {
  // Unique for loop
  int n = 5;
  for (;;) {
    if (n > 1) {
      cout << n << endl;
    } else {
      break;
    }
    n--;
  }
  // Variable  scoping
  if (true) {
    cout<<"--------"<<endl;
    int n = 3;
    cout << n << endl;
    if (true) {
      int n = 5;
      cout << n << endl;
    }
    cout<<n<<endl;
  }
}