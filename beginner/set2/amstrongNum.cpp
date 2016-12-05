#include<iostream>
using namespace std;

int main(){
 int num;
 int sum =0;
 cin>>num;
 int temp = num;
 while(temp){
   int digit = temp%10;
   sum+= digit *digit*digit;
   temp=temp/10;
 }
 if(sum==num)
  cout<<"Amstrong Number\n";
 else
  cout<<"Not Amstrong Number\n";
}
