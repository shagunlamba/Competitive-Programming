//https://codeforces.com/contest/1165/problem/C
#include<iostream>
#include<limits>
// #include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<math.h>
#include<iomanip>  
#include<deque> 
#include<string> 
#include<string.h>
#include<map>
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

int main()
{
  _FI
    string s;
    int n;
    string res;
    cin >> n >> s;
  for(int i = 0; i < n; i++)
  {
    if(res.size() % 2 == 0 || res.back() != s[i])
      res.push_back(s[i]);
  }
  if(res.size() % 2 == 1) res.pop_back();
  cout << n - int(res.size()) << endl << res << endl;
  return 0;


return 0;
}