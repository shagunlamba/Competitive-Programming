//https://codeforces.com/contest/598/problem/B
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



int main()
{
_I

string s;
cin>>s;
ll m;
cin>>m;
V<char> v;
for(int i=0;i<s.size();i++)
{
  v.pb(s[i]);
}

for(int i=0;i<m;i++)
{
 ll l,r,k;
 cin>>l>>r>>k;
 l--;
 r--;
 if(r==l)
 {
   continue;
 }
 ll x= k % (r-l+1);
 
  // char tobedel = v[r];
  // auto it= v.begin()+r;
  // v.erase(it);
  // auto IT=v.begin()+l;
  // v.insert(IT,tobedel);
  s = s.substr(0, l)
    + s.substr(r - x + 1, x) + s.substr(l, r - l + 1 - x)
    + s.substr(r + 1);

}

cout<<s<<endl;

return 0;
}