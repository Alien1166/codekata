#include<iostream>
using namespace std;

int main(){
 int start,end;
 cin>>start>>end;
 int sum = 0;
 for(int i=start+1;i<end;i++) {
   int temp = i;
   while(temp){
     int digit = temp%10;
     sum+= digit *digit*digit;
     temp=temp/10;
   }
   if(sum==i)
    cout<<i<<' ';
  sum = 0;
  }
}
