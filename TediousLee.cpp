//https://codeforces.com/contest/1369/problem/D
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
#include<map>
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

vector<ll> SieveOfEratosthenes(int n) 
{ 
  vector<ll> result;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
          result.push_back(p);
    return result;
}

ll arr[2000009];


int main()
{
 _FI
  
  arr[1]=0;
  arr[2]=0;

  for(ll i=3;i<=2000008;i++)
  {
  if(i%3==0)
      arr[i] = (arr[i-1] + arr[i-2]*2 + 1)%MOD;
  else
      arr[i] = (arr[i-1] + arr[i-2]*2)%MOD;
   }

  tc(t)
  {
    ll x;
    cin>>x;
    ll ans= (4*arr[x])%MOD;
    cout<<ans<<endl;
  }

  return 0;
}













 