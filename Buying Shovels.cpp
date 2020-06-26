//https://codeforces.com/contest/1360/problem/D
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

bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int main()
{
_I


tc(t)
{
    ll n, k;
		cin>>n>>k;
		ll i;
		vector<ll>f;
		for(i = 1; i<=sqrt(n); i++){
			if(n%i==0){
				f.pb(n/i);
				f.pb(i);
			}
		}
		ll ans = n;
		sort(f.begin(), f.end());
		for(i = f.size()-1; i>=0; i--){
			if(k>=f[i]){
				ans = n/f[i];
				break;
			}
		}
		cout<<ans<<endl;
}
return 0;
}