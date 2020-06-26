//https://codeforces.com/contest/705/problem/A
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
int n;
cin>>n;
int help=n;
int x=n-1;
 
string a="I hate it";
string b="I love it";
 
string A="I hate that ";
string B="I love that ";
 
int var=0;
string ans="";
 
while(n!=1)
{
  if(var==0)
  {
    ans=ans+A;
    var=1;
  }
  else
  {
    ans=ans+B;
    var=0;
  }
  n--;
}
 
 
 
if(help%2==0)
{
  ans=ans+b;
}
else 
{
  ans=ans+a;
}
 
cout<<ans<<endl;
 
return 0;
}