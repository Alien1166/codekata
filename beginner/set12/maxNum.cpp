#include<iostream>
using namespace std;

int main(){
  int arr[25];
  int max;
  for(int i=0;i<25;i++){
    cin>>arr[i];
  }
  for(int i=0;i<25;i++){
    if(max<arr[i])
      max = arr[i];
  }
  cout<<max<<"\n";
}
