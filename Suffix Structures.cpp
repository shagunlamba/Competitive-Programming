//https://codeforces.com/contest/448/problem/B
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

string s,t;
cin>>s>>t;

if(s.find(t)!=string::npos)
{
  cout<<"automaton"<<endl;
  return 0;
}
UM<string,bool> MAP;
MAP["automation"]=false;
MAP["array"]=false;

UM<char,int> mp1, mp2;

for(int i=0;i<s.length();i++)
{
  mp1[s[i]]++;
}
for(int i=0;i<t.length();i++)
{
  mp2[t[i]]++;
}
bool flag=true;
int count=0;
for(auto it=mp2.begin();it!=mp2.end();it++)
{
  char curr=it->F;
  // cout<<curr<<endl;
// cout<<mp1[curr]<<mp2[curr]<<endl;
  if(mp1[curr]< mp2[curr])
  {
    cout<<"need tree"<<endl;
    return 0;
  }
  if(mp1[curr]>mp2[curr])
  {
    MAP["automation"]=true;
  }
  if(mp1.count(curr)==0)
  {
    cout<<"need tree"<<endl;
    return 0;
  }
  if(mp2[curr]!=mp1[curr])
  {
    flag=false;
  }
  else
  {
    MAP["automation"]=true;
  }
}

for(auto it=mp1.begin();it!=mp1.end();it++)
{
  char curr=it->F;
  if(mp2.count(curr)==0)
  {
    MAP["automation"]=true;
    flag=false;
    break;
  }
}
if(flag==true)
{
  cout<<"array"<<endl;
  return 0;
}

int i=0;
int j=0;
string ans="";
while(i<s.length() && j<t.length())
{
  if(s[i]==t[j])
  {
    ans=ans+s[i];
    // continue;
  }
  if(mp2.count(s[i])==0)
  {
   i++;
   continue;
  }
  else if(s[i]!=t[j])
  {
    i++;
    continue;
  }
  i++;
  j++;
}
// cerr<<"New string";
// cout<<ans<<endl;
if(ans==t)
{
  cout<<"automaton";
  return 0;
}
else
{
  MAP["array"]=true;
}
if(MAP["automation"]==true && MAP["array"]==true)
{
  cout<<"both";
}
else if(MAP["array"]==true)
{
  cout<<"array";
}
else
{
  cout<<"automaton";
}
return 0;
}