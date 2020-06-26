//https://codeforces.com/contest/1165/problem/D
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

vector<ll> printDivisors(ll n) 
{ 
  vector<ll> q;
    for (ll i=2; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                {
                  q.pb(i);
                }
  
            else  
                {
                  q.pb(i);
                  q.pb(n/i);
                }
        } 
    } 
    return q;
}


int main()
{
  _FI
  vector<ll> v=SieveOfEratosthenes(1e6);
    tc(t)
    {
      int n;
      cin>>n;
      V<ll> arr;
      for(int i=0;i<n;i++)
        {
          ll x;
          cin>>x;
          arr.pb(x);
        }
      if(n==1)
      {
        if(find(v.begin(),v.end(),arr[0])!=v.end())
        {
          cout<<arr[0]*arr[0]<<endl;
        }
        else
        {
          cout<<-1<<endl;
        }
      }
      else
      {
        sort(arr.begin(),arr.end());
        unsigned ll ans=arr[0]*arr[n-1];
        V<ll> vec;
        vec=printDivisors(ans);
        sort(vec.begin(),vec.end());
        (vec==arr)? cout<<ans<<endl : cout<<-1<<endl;
      }
    }


return 0;
}