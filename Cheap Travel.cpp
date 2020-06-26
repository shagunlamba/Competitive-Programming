//https://codeforces.com/contest/466/problem/A
#include<iostream>
#include <string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
 int a,b,m,n;
 cin>>n>>m>>a>>b;

 float ppt= (1.0*b)/m;
 if(ppt<=a)
 { 
   int ans = 0;
   if(n%m==0)
   {
    ans=(n/m)*b;
    cout<<ans;
   }
  else
  {
   int rem=n%m;
   ans=(n/m)*b;
   
   int x=min(b,a*rem);
   ans=ans+x;
   cout<<ans;
  }
 }
 else
 {
   int ans=a*n;
   cout<<ans;
 }

  return 0;
}