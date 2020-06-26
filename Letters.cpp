//https://codeforces.com/problemset/problem/978/C
#include<iostream>
#define ll long long
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
 
int main()
{
ll n,m;
cin>>n>>m;
 
ll *a= new ll[n+1];
 
for(ll i=1;i<=n;i++)
 cin>>a[i];
 
ll *b= new ll[m+1];
 
for(ll i=1;i<=m;i++)
 cin>>b[i];
 
ll currsum=a[1];
int k=1; //kaunsa dormitory
 
                              //print dormitory no(f) and room no(k)
ll prevsum=0;
for(ll i=1;i<=m;i++)
{
 ll curr=b[i];
 while(curr>currsum)
 {
   prevsum=currsum;
   k++;
   currsum=currsum+a[k];
 }
  if(k==1)
   cout<<k<<" "<<b[i]<<endl;
   else
   cout<<k<<" "<<b[i]-prevsum<<endl;
}
 
 
 
 
 return 0;
}