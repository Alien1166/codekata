#include<iostream>
using namespace std;

int main(){
  int num[3];
  cin>>num[0]>>num[1]>>num[2];
  int max = num[0];
  for(int i=1;i<3;i++){
    if(max<num[i])
      max=num[i];
  }
  cout<<max;
}
