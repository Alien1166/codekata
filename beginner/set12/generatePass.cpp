#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char userName[20];
  cin>>userName;
  int len= strlen(userName);
  int pass=0;
  for(int i=0;i<len;i++){
    pass+=userName[i];
  }
  pass = (pass/len)%256;
  cout<<char(pass)<<"\n";
}
