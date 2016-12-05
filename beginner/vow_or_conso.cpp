#include<iostream>
using namespace std;

int main()
{
  char c;
  cin>>c;
  if(c=='a'|c=='i'|c=='o'|c=='u'|c=='A'|c=='I'|c=='O'|c=='U')
  {
    cout<<"Vowel";
  }
  else
    cout<<"Consonant";
}
