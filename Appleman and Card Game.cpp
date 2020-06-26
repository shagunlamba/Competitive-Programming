//https://codeforces.com/contest/462/problem/B
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

ll n;
cin>>n;
ll k;
cin>>k;

string s;
cin>>s;
UM<char, ll> mp;
int i=0;
while(s[i]!='\0')
{
  mp[s[i]]++;
  i++;
}
auto it=mp.begin();
V<ll> v;
while(it!=mp.end())
{
  v.pb(it->S);
  it++;
}

sort(v.begin(),v.end(),greater<ll>());

ll cards=k;
ll j=0;
unsigned ll ans=0;
while(cards>0)
{
 if(cards==0)
 {
   break;
 }

 if(cards<v[j])
 {
  //  cout<<cards<<endl;
   ans+= cards*cards;
   break;
 }
 else
 {
   ans+= v[j]*v[j];
  //  cout<<ans<<endl;
   cards-=v[j];
 }
 j++;
}
cout<<ans<<endl;

return 0;
}