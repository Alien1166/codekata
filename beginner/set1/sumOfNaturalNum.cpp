#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum = 0;
  int num;
  for(int i=0;i<n;i++){
    cin>>num;
    sum+=num;
  }
  cout<<sum<<"\n";
}
