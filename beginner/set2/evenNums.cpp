#include<iostream>
using namespace std;

int main(){
  int start,end;
  cin>>start>>end;
  if(start%2==0){
    for(int i=start+1;i<end-1;i+=2){
      cout<<i+1<<" ";
    }
  }
  else {
    for(int i=start+1;i<end;i+=2){
      cout<<i<<" ";
    }
  }
}
