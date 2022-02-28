#include <iostream>
using namespace std;
int main() {
  int arr[10][10];
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if((i+j)==0)
      arr[i][j] = 2*(i+j);
      else{
        arr[i][j]= 3*(i+j);
      }
    }

  }
  cout<<"final array:"<<endl;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
} 