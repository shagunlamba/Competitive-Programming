//https://codeforces.com/contest/1037/problem/B
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
  ll n,s;
  cin>>n>>s;
  ll arr[n];
  ll c[n];
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      c[i]=arr[i];
    }
  if(n==1)
  {
    cout<<abs(arr[0]-s);
  }
  else
  {
    sort(c,c+n);
    ll ans=0;
    int midIndex= (n-1)/2;
    ll midElement= c[midIndex];
    if (midElement==s)
    {
      cout<<0<<endl;
    }
    else
    {
      if(midElement>s)
      {
        ans=abs(c[midIndex]-s);
        midIndex--;
        while(midIndex>=0)
        {
          if(c[midIndex]<=s)
          {
            break;
          }
          ans+=abs(c[midIndex]-s);
          midIndex--;
        }
      }
      else
      {
        ans=abs(c[midIndex]-s);
        midIndex++;
        // cout<<ans<<endl;
        while(midIndex<n)
        {
          if(c[midIndex]>=s)
          {
            break;
          }
          ans+=abs(c[midIndex]-s);
          midIndex++;
        }
      }
      cerr<<"ANS: ";
      cout<<ans<<endl;
    }
  }



return 0;
}