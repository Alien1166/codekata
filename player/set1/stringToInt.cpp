#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  string str;
  getline(cin,str,'\n');
  int len=str.length();
  for(int i=0;i<len;i++){
    cout<<int(str[i]);
  }
}
