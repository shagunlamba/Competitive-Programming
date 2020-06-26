//https://codeforces.com/contest/1343/problem/C
#include<iostream>
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<math.h>
#include<iomanip>  
#include<deque> 
#include<string> 
#include<string.h>
#include<unordered_map>
#include<utility>
#define ll long long
#define tc(t) long long t; cin >> t; while(t--)
#define V vector
#define Vp vector< pair<int,int> >
#define pb push_back
#define UM unordered_map
#define IT iterator
#define F first
#define S second
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
  _FI

tc(t)
{
 int n;
 cin>>n;
 V<ll> a;
 for(int i=0;i<n;i++)
 {
   ll x;
   cin>>x;
   a.pb(x);
 }
 if(n==1)
 {
   cout<<a[0]<<endl;
   continue;
 }
 int min=a[0];
 int max=a[0];
 ll sum=0;
 int i=1;
 while(i<n)
 {
   if(a[i-1]>0)
   {
     if(a[i]>0)
     {
       if(a[i]>max)
       {
         max=a[i];
       }
       if(i==n-1)
       {
         sum+=max;
       }
     }
     else
     {
       sum+=max;
       max=INT_MIN;
       min=a[i];
       if(i==n-1)
       {
         sum+=min;
       }
     }
   }
   else if(a[i-1]<0)
   {
     if(a[i]<0)
     {
       if(a[i]>min)
       {
         min=a[i];
       }
       if(i==n-1)
       {
         sum+=min;
       }
     }
     else
     {
       sum+=min;
       min=INT_MAX;
       max=a[i]; 
       if(i==n-1)
       {
         sum+=max;
       }
     }
    }
   i++;
 }
 
 cout<<sum<<endl;

}

return 0;
}