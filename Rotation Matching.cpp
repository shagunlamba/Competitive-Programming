//https://codeforces.com/contest/1365/problem/C
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
 int n;
 cin>>n;
 int a[n+1];
 int b[n+1];
 map<int,int> loc;
 for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    loc[a[i]]=i;
  }
 for(int i=1;i<=n;i++)
  cin>>b[i];
 
 map<int,int> freq;
 for(int i = 1; i <= n; i++)
	{
    int curr= loc[b[i]]-i;
    if(curr<0)
    {
      curr+=n;
    }
    freq[curr]++;
  }
  int ans=0;
  for(auto it: freq)
  {
    ans=max(ans,it.S);
  }
  
  cout<<ans<<endl;

return 0;
}