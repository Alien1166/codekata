#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char str[100];
  cin>>str;
  int len = strlen(str);
  int i=0,j=len-1;
  while(i<j){
    if(str[i++]!=str[j--]){
      cout<<"Not a palindrome\n";
      return 1;
    }
  }
  cout<<"Palindrome\n";
  return 1;
}
