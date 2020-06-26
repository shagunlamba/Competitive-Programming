//https://codeforces.com/contest/545/problem/D
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
ll n;
cin>>n;

V<ll> arr;
for(ll i=0;i<n;i++)
{
  ll x;
  cin>>x;
  arr.pb(x);
}
sort(arr.begin(),arr.end());
ll count=1;
unsigned ll sum=arr[0];
for(ll i=1;i<n;i++)
{
  if(sum<=arr[i])
  {
    sum+=arr[i];
    count++;
  }
}
cout<<count<<endl;
return 0;
}