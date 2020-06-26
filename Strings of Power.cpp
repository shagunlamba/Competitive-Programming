// https://codeforces.com/contest/318/problem/B
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

string s;
cin>>s;
ll count=0;
ll ans=0;
for(ll i=4;i<s.length();i++)
{
  if(s[i]=='l')
  {
    if(s[i-1]=='a' && s[i-2]=='t' && s[i-3]=='e' && s[i-4]=='m')
    {
      ans+=count;
    }
  }
  else if(s[i]=='y' && s[i-1]=='v' && s[i-2]=='a' && s[i-3]=='e' && s[i-4]=='h')
  {
     count++;
  }
}

cout<<ans<<endl;
return 0;
}