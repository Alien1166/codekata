#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int start,end;
  cin>>start>>end;
  for(int i=start+1;i<end;i++){
    int n=sqrt(i);
    int flag = 1;
    for(int j=2;j<=n;j++){
      if(i%j==0){
        flag = 0;
        break;
      }
    }
    if(flag)
      cout<<i<<" ";
  }
}
