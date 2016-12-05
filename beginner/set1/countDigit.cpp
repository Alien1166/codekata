#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int countDigits =0;
  while(num){
    num=num/10;
    countDigits++;
  }
  cout<<countDigits<<"\n";
  return 1;
}
