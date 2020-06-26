//https://codeforces.com/contest/1367/problem/D
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
  tc(t)
  {
    string s;
    cin>>s;
    int m;
    cin>>m;
    int b[m+1];
    for(int i=1;i<=m;i++)
    {
      cin>>b[i];
    }
    sort(s.begin(),s.end());
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
      mp[s[i]]++;
    }
    int j=s.length()-1;   // iterates on our string s peeche se
    char t[m+1];
    while(true)
    {
       int count_0=0;
       vector<int> v;
       for(int i=1;i<=m;i++)
       {
        if(b[i]==0)
        {
          count_0++;
          v.pb(i);
        }
       }

       if(count_0==0)
       {
         break;
       }

       if(mp[s[j]]<count_0)
       {
        j=j-mp[s[j]];
        continue;
       }
       ll p= j;
       j=j-mp[s[j]];
       for(int i=1;i<=m;i++)
       {
         if(b[i]==0)
         {
          t[i]=s[p--];
          b[i]=-1;
         }
         else
         {
          for(int k=0;k<v.size();k++)
          {
            b[i]=b[i]-abs(i-v[k]);
          }
         }
       }
    }
    for(int i=1;i<=m;i++)
    {
      cout<<t[i];
    }
    cout<<endl;
  }
return 0;
}