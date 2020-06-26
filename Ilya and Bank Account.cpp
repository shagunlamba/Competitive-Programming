//https://codeforces.com/contest/313/problem/A
#include<iostream>
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
 long long n;
 cin>>n;
 if(n>=0)
 {
   cout<<n;
   return 0;
 }
 
 long long d=0;  //digits
 long long y=-1*n;
 long long z=-1*n;

 while(y!=0)
 { 
   d++;
   y=y/10;
 }
 long long no = z;
 long long rem= z%10;
 long long option1 =z/10;
 long long option2=0;
 if(d==2)
 {
   option2=rem;
 }
 else
 {
   z=z/100;
   int p=1;
   option2=option2+rem;
   while(z!=0)
   { 
     int r=z%10;
     p=p*10;
     option2=option2+p*r;
     z=z/10;
   }
 }


option1*=-1;
option2*=-1;

cout<<max (option1,option2);

 
}