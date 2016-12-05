#include<iostream>
#include<string.h>
using namespace std;

int value(char c) {
  if(c=='I')
    return 1;
  if(c=='V')
    return 5;
  if(c=='X')
    return 10;
  if(c=='L')
    return 50;
  if(c=='C')
    return 100;
  if(c=='D')
    return 500;
  if(c=='M')
    return 1000;
}

int romanToInt(string &s){
  int len =s.length();
  int res =0;
  for(int i=0;i<len;i++)
  {
    int s1,s2;

    s1 = value(s[i]);
    if(i+1<len){
      s2 = value(s[i+1]);

      if(s1>=s2)
        res = res + s1;
      else {
        res = res + s2-s1;
        i++;
      }
    }
    else {
      res = res +s1;
      i++;
    }

}
  return res;
}

int main(){
  string str;
  getline(cin,str,'\n');
  cout<<romanToInt(str)<<"\n";
}
