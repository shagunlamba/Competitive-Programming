//https://codeforces.com/contest/459/problem/B
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
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;



int main()
{
 _I 

  int n;
  cin>>n;

  UM<ll,ll> mp;
  ll *arr= new ll[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }
  ll maxbeautyDiff=0;
  sort(arr,arr+n);

  maxbeautyDiff= arr[n-1]-arr[0];
  ll ways=0;

  auto it=mp.begin();
  while(it!=mp.end())
  {
    if(it->S!=0)
    {
      int x= it->F+ maxbeautyDiff;
      int y= it->F - maxbeautyDiff;
      if(x==y)
      {
        ll q= it->S-1;
        ways+= q*(q+1)/2; 
        break;
      }
      if(x>=1 && mp.count(x)!=0)
      {
        ways+= it->S*mp[x];
        mp[x]=0;
      }
      if(y>=1 && mp.count(y)!=0)
      {
         ways+= it->S*mp[y];
         mp[y]=0;
      }
      it->S=0;
    }
    it++;
  }

  cout<<maxbeautyDiff<<" "<<ways;

return 0;
}