#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;
  int fact=1;
  while(num)
  {
    fact*=num;
    --num;
  }
  cout<<fact<<"\n";
}
