#include<iostream>
using namespace std;

int fact(int n);

int main(){
  int num;
  cin>>num;
  cout<<fact(num)<<"\n";
}

int fact(int n){
  if(n==0)
    return 1;
  return n*fact(n-1);
}
