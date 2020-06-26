//https://codeforces.com/contest/1341/problem/A
#include<iostream>
#define ll long long
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<unordered_map>
using namespace std;


int main()
{
int t;
cin>>t;

while(t!=0)
{ 

  int n;
  int a,b,c,d;
  cin>>n>>a>>b>>c>>d;

  int a_b,a__b, c_d, c__d;

  a_b=a-b;
  a__b=a+b;
  c_d=c-d;
  c__d=c+d;



  if(n*a__b>=c_d && n*a_b<=c__d)
   {
     cout<<"YES"<<endl;
   } 
  else
   cout<<"NO"<<endl;
  
  t--;
}

 


return 0;
}