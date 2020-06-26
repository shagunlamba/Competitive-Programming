//https://codeforces.com/contest/920/problem/B
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
 tc(t)
 {
   int n;
   cin>>n;
   V< pair<int,pair<int,int> > > v(n);
   for(int i=0;i<n;i++)
   {
     int x,y;
     cin>>x>>y;
     v[i]=make_pair(i+1,make_pair(x,y));
   }
   int time=0,timepassed=0;
   int ans[n];
   for(int i=0;i<n;i++)
   {
     if(i==0)
     {
       ans[i]=v[i].S.F;
       timepassed=ans[i];
     }
     else if(v[i].S.F> timepassed)
     {
       timepassed+=(v[i].S.F - timepassed);
       ans[i]=timepassed;
     }
     else
     {
       if(v[i].S.S<=timepassed)
       {
         ans[i]=0;
       }
       else
       {
         timepassed++;
         ans[i]=timepassed;
       }
     }
   }
   for(int i=0;i<n;i++)
   {
     cout<<ans[i]<<" ";
   }
   cout<<endl;
 }

return 0;
}