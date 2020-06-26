//https://codeforces.com/contest/230/problem/B
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
  ll y=1e6+1;
 
 bool *prime= new bool[y];
 memset(prime, true, y); 
  for (ll p=2; p*p<=y; p++) 
    { 
      if (prime[p] == true) 
      { 
        for (ll i=p*p; i<=y; i += p) 
         prime[i] = false; 
      } 
    }

 int n;
 cin>>n;

 ll *arr= new ll[n];

 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }

 for(int i=0;i<n;i++)
 {
   if(arr[i]==1)
   {
    cout<<"NO"<<endl;
    continue;
   }
   long double sr = sqrt(arr[i]); 
  if ((sr - floor(sr)) == 0)
  { 
    ll y=sr;
   if(prime[y]==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
   else
   cout<<"NO"<<endl;

 }


return 0;
}