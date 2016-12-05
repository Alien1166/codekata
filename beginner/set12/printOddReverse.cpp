#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string line;
  getline(cin,line,'\n');
  int len = line.length();
  int count = 1;
  cout<<len<<'\n';
  int j=0,k=0;
  for(int i=0;i<=len;i++){
    if(line[i]==' ' | line[i]=='\0' && count%2!=0){
      k=i-1;
      while(j<k){
        char t = line[j];
        line[j++]=line[k];
        line[k--]=t;
      }
      count++;
    }
    else if(line[i]==' ' && count%2==0){
      j=i+1;
      count++;
    }
  }
  cout<<line<<'\n';
}
