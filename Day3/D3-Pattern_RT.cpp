#include <iostream>
using namespace std;
int main(){
  int n=5;
  // for row
  for(int row=1;row<=n;row++){
    // For spaces
    for(int col=1;col<=(row-1);col++){
      cout<<"  ";
    }
    // For stars
    for(int col=1;col<=(n-row+1);col++){
      cout<<"* ";
    }
    // For new row
    cout<<endl;
  }
  return 0;
}