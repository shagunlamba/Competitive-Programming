//https://codeforces.com/contest/1341/problem/C
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

  tc(t)
  {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        bool res = true;
        int par = p[0];
        for (int i = 1; i < n; i++) {
            if (p[i] != p[i - 1] + 1) {
                if (p[i] < par) {
                    par = p[i];
                } else {
                    res = false;
                    break;
                }
            }
        }
        if(res)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;

  }

  return 0;
}