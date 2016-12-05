#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int num;
  cin>>num;
  int n=sqrt(num);
  for(int i=2;i<=n;i++){
    if(num%i==0){
      cout<<"Not a prime\n";
      return 1;
    }
  }
  cout<<"Prime\n";
  return 1;
}
