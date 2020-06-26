//https://codeforces.com/contest/493/problem/B
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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;
bool flag=false;

int main()
{
  _FI
 int n;
 cin>>n;
 ll arr[n];
 vector<int> f,s;
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 unsigned ll sum1=0,sum2=0;
 for(int i=0;i<n;i++)
 {
   if(arr[i]>0)
    {
      sum1+=arr[i];
      f.pb(arr[i]);
      // cout<<"f"<<" "<<f<<endl;
    }
   else
    {
      ll x=arr[i]*-1;
      sum2+=(x);
      s.pb(x);
      // cout<<"s"<<" "<<s<<endl;
    }
 }
 if(sum1!=sum2)
 {
   if(sum1>sum2)
   {
     cout<<"first"<<endl;
   }
   else
   {
     cout<<"second"<<endl;
   }
 }
 else
 {
     int i=0;
     string ans="";
     while(i<min(f.size(),s.size()))
     {
       if(f[i]==s[i])
       {
         i++;
         continue;
       }
       else if(f[i]>s[i])
       {
         ans="first";
         break;
       }
       else
       {
         ans="second";
         break;
       }
       i++;
     }
     if(ans=="")
     { 
       if(f.size()!=s.size())
       {
         if(f.size()>s.size())
         {
           cout<<"first"<<endl;
         }
         else
         {
           cout<<"second"<<endl;
         }
       }
       else
       {
       if(arr[n-1]<0)
       {
         cout<<"second";
       }
       else
       {
         cout<<"first";
       }
       }
     }
     else
     cout<<ans<<endl;
   
 }
return 0;
}