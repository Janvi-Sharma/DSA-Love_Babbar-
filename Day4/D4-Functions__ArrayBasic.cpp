#include <iostream>

using namespace std;

 void Printing(int num) {
  int n = 10;
  cout << "Printing number" << n<<endl;
}

// int main() {
//   int n = 5;
//   Printing(n);
//   cout << "in main" << n<<endl;
//   return 0;
// }


// Array Print
void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<" "<<arr[i];
  }
}

// int main(){
//   int ar[5]={1,2,3,4,5};
//   cout<<"Printing Array"<<endl;
//   printArray(ar, 5);
//   return 0;
// }

// Array Input 

int main(){
  int ar[100];
  int size;
  cout<<"enter the size of array:";
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>ar[i];
  }
  cout<<"Array:";
  printArray(ar, size);
}
