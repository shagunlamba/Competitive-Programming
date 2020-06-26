//https://codeforces.com/contest/1353/problem/C
#include<iostream>
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
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
tc(t)
{
  ll n;
  cin>>n;
  unsigned ll count=0;
  if(n==1)
  {
    cout<<count<<endl;
    continue;
  }
  else
  { 
    while(n!=1)
    {
      ll value= n/2;
      count+=(4*n*value)-4*value;
      n=n-2;
    }
  }
  cout<<count<<endl;
}

return 0;
}