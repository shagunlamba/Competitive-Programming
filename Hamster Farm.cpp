//https://codeforces.com/contest/939/problem/B
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
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
  _FI

 ll n;
 ll k;
 cin>>n>>k;
 ll *arr= new ll[k];
 for(ll i=0;i<k;i++)
  cin>>arr[i];
 
 ll type=1;
 ll num= (n%arr[0]);
 ll ans=arr[0];
 for(ll i=1;i<k;i++)
 {
   if(n% arr[i] < num)
   {
     type=i+1;
     num=(n%arr[i]);
     ans=arr[i];
   }
 }
 
cout<<type<<" "<<n/ans<<endl;
 
 delete []arr;

return 0;
}