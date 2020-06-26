//https://codeforces.com/contest/750/problem/A
#include<iostream>
#define ll long long
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;
 

int main()
{
int n,k;
cin>>n>>k;
int total=k;

for(int i=1;i<=n;i++)
{
 total=total+5*i;
 if(total>240)
 {
 cout<<i-1;
 return 0;
 }
 if(total==240)
 {
   cout<<i;
   return 0;
 }
 else
  continue;
}

cout<<n;
return 0;
}