#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  getline(cin,str,'\n');
  int i=0,j=str.length()-1;
  while(i<j){
    int t=str[i];
    str[i++]=str[j];
    str[j--]=t;
  }
  cout<<str<<"\n";
}
