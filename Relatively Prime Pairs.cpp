//https://codeforces.com/contest/1051/problem/B
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


int main()
{
_I

unsigned ll l,r;
cin>>l>>r;
int pairs= r-l+1;
pairs=pairs/2;
cout<<"YES"<<endl;
for(int i=0;i<pairs;i++)
{
  cout<<l<<" "<<l+1<<endl;
  l=l+2;
}

return 0;
}