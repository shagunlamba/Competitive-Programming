// https://codeforces.com/contest/1359/problem/B
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
  ll n,m;
  cin>>n>>m;
  ll x,y;
  cin>>x>>y;

  ll money=0;

  char arr[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>arr[i][j];
    }
  }

  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]=='.')
      {
        count++;
      }
      else
      {

        if(count==1)
        {
          money+= 1*x;
        }
        else if(count%2==0)
        {
          money+=min(x*count,y* (count/2));
        }
        else
        {
          money+=min(x*count, (y*(count-1)/2)+x);
        }
        count=0;
      }
    }
    if(count==1)
    {
      money+=  1*x;
    }
      else if(count%2==0)
        {
          money+=min(x*count,y* (count/2));
        }
        else
        {
          money+=min(x*count, (y*(count-1)/2)+x);
        }
  }
  cout<<money<<endl;
}
  return 0;
}