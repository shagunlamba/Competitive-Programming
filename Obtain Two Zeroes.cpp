//https://codeforces.com/contest/1260/problem/B
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
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;

// 2
// 1 1 0
// RR

int main()
{
 _I 

tc(t)
{
  ll a,b;
  cin>>a>>b;
  if(a > b)
		swap(a,b);
  if ( ((a + b) % 3) == 0 and a * 2 >= b) 
   cout<<"YES\n";
  else 
   cout<<"NO \n";
}

return 0;
}