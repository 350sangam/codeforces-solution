#include<iostream>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
   
   int n,a,b,c;
   int count = 0;
   cin>>n;
   while (n--)
   {   cin>>a>>b>>c;
       if ((a+b+c)>=2)
       {
           count++;
       }
       
   
   }
cout<<count;

return 0;
}   