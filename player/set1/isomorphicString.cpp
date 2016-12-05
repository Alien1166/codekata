#include<iostream>
#include<string.h>
using namespace std;

void checkIsomorphic(string &s1,string &s2){
  int len1 = s1.length();
  int len2 = s2.length();
  if(len1 != len2){
    cout<<"false"<<"\n";
    return;
  }
  int map[256];
  bool marked[256]={false};
  memset(map,-1,sizeof(map));
  for(int i=0;i<len1;i++){
    if(map[s1[i]]==-1){
      if(marked[s2[i]]==true){
        cout<<"false"<<"\n";
        return;
      }
      marked[s2[i]]==true;
      map[s1[i]]=s2[i];
    }
    else if(map[s1[i]]!=s2[i]) {
      cout<<"false"<<"\n";
      return;
    }
  }
  cout<<"true"<<"\n";
}



int main(){
 string s1,s2;
 getline(cin,s1,'\n');
 getline(cin,s2,'\n');
 checkIsomorphic(s1,s2);
}
