//https://codeforces.com/contest/1227/problem/B
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
  int *q= new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>q[i];
  }
  V<int> ans;
  // ans.pb(q[0]);

  priority_queue<int,vector<int>, greater<int> > minpq;
  for(int i=1;i<=n;i++)
  {
    minpq.push(i);
  }
  UM<int,bool> mp; 
  // mp[q[0]]=true;
  bool f=true;
  for(int i=0;i<n;i++)
  {
    if(mp.count(q[i])==0)
    {
      // cout<<q[i]<<" ";
      mp[q[i]]=true;
      ans.pb(q[i]);
    }
    else
     {
      while(!minpq.empty())
      {
        // cout<<q[i]<<" ";
        int w= minpq.top();
        minpq.pop();
        if(mp.count(w)==0)
         {
           mp[w]=true;
            ans.pb(w);
           break;
         }
        else if(w==q[i])
        {
          f=false;
          break;
        }
       }
     }
     if(f==false)
     {
       break;
     }
  }

  if(mp.size()!=n)
  {
    cout<<-1<<"\n";
  }
  else
  {
   for(auto x : ans)
  { 
    cout<<x<<" ";
   }
   cout<<"\n";
  }
  delete []q;
}
return 0;
}