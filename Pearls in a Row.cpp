//https://codeforces.com/contest/620/problem/C
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

int n;
cin>>n;
map<ll,ll> mp;
ll *arr= new ll[n];
for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }

if(mp.size()==n)
{
  cout<<-1<<"\n";
  return 0;
}

int k=0;
bool f=true;
V<int> v;
map<ll,ll> mapp;
for(int i=0;i<n;i++)
{
  if(mapp.find(arr[i]) != mapp.end())
  {
    v.pb(i+1);
    mapp.clear();
  }
  else
    mapp[arr[i]]++;
}

int x;
ll y=v.size();
cout<<y<<"\n";
for(int i=0;i<y;i++)
{
  if(i==y-1)
  {
    v[i]=n;
  }
  if(i==0)
  {
    x=1;
  }
  else
  {
    x=v[i-1]+1;
  }
  cout<<x<<" "<<v[i]<<"\n";
}

delete []arr;

return 0;
}