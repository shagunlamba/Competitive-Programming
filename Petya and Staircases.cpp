//https://codeforces.com/contest/362/problem/B
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

ll n,m;
cin>>n>>m;

ll *arr= new ll[m];
for(ll i=0;i<m;i++)
{
 cin>>arr[i];
}

sort(arr,arr+m);

if(arr[0]==1 || arr[m-1]==n)
{
  cout<<"NO"<<endl;
  return 0;
}

bool flag=false;
for(ll i=1;i<m;i++)
{
  if(arr[i]-arr[i-1]==1 && flag==false)
  {
    flag=true;
    continue;
  }
  if(flag==true)
  {
    if(arr[i]-arr[i-1]==1)
    {
     cout<<"NO"<<endl;
     return 0;
    }
    else
    {
      flag=false;
    }
  }
}

cout<<"YES"<<endl;

return 0;
}