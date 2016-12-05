#include<iostream>
using namespace std;

int main(){
  int num,exponent;
  cin>>num;
  cin>>exponent;
  int power=1;
  while(exponent!=0){
    power *=num;
    --exponent;
  }
  cout<<power<<"\n";
}
