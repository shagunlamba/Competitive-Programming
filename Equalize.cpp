//https://codeforces.com/contest/1037/problem/C
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
bool flag=true;

bool sort(const pair<int,pair<int,int> > a,const pair<int,pair<int,int> >b  )
{
  if(a.S.F==b.S.F)
  {
    return a.F < b.F;
  }
  return a.S.F<b.S.F;
}

int main()
{
  _FI
  ll n;
  cin>>n;
  string a,b;
  cin>>a>>b;
  int i=0;
  ll ans=0;
  if(n==1)
  {
    if(a==b)
    {
      cout<<0<<endl;
    }
    else
    {
      cout<<1<<endl;
    }
  }
  else
  {
    int c=0;
    int j=0;
    while(j<n)
    {
      if(a[j]!=b[j])
      {
        c++;
      }
      j++;
    }
    while(i<n)
   {
      if(i!=n-1)
      {
       if(a[i]!=b[i])
       {
        //  cout<<a[i]<<" "<<b[i]<<"\n";
         if(a[i+1]==b[i] && a[i]==b[i+1])
         {
           swap(a[i],a[i+1]);
           ans=ans+1;
         }
         else
         {
           ans=ans+1;
         }
       }
      } 
      else if(i==n-1)
      {
        if(a[i]!=b[i])
         ans=ans+1;
      }
    i++;
   }
    (c>ans)?cout<<ans:cout<<c;
  }
return 0;
}