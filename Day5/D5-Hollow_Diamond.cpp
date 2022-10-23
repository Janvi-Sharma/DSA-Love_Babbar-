#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the total number of rows:";
  cin>>n;
  int m=n/2;
  for(int row=1;row<=m;row++){
    for(int col=1;col<=m;col++){
      if(col==m-row+1){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    for(int col=1;col<=m-1;col++){
      if(col==row-1){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
  // Printing second half
  
  for(int row=1;row<=m;row++){
    for(int col=1;col<=m;col++){
      if(col==row){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    for(int col=1;col<=m-1;col++){
      if(col==m-row){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}