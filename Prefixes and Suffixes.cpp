//https://codeforces.com/contest/1092/problem/C
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
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
 _I 
  
int n;
cin>>n;
string *arr= new string[2*n-2];
int maxLen= n-1;
string a="", b="";
for(int i=0; i<2*n-2 ;i++)
{
 cin>>arr[i];
 if(arr[i].length()==maxLen && a=="")
 {
   a=arr[i];
 }
 else if(arr[i].length()==maxLen && a!="")
 {
   b=arr[i];
 }
} 

vector<char> v(2*n-2);

int x=a.length()-1;
string subB= b.substr(0,x);
if(a.find(subB)!=string::npos)
{
 
}
else
{
  swap(a,b);
  // cout<<a<<" "<<b;
}
bool f=true;
int y=b.length()-1;
string s= a+ b[y];

UM<string,char> mp;
for(int i=0;i<2*n-2;i++)
{
  if(mp.count(arr[i])==0)
  {
    int pos= s.find(arr[i]);
    int len=arr[i].length();
    if(pos!=0 )
    {
      int c= s.rfind(arr[i]);
      if(c!=s.length()-len)
      {
        f=false;
        break;
      }
    }
    if(pos!=0)
    {
      v[i]='S';
      mp[arr[i]]='S';
    }
    else
    {
      v[i]='P';
      mp[arr[i]]='P';
    }
  }
  else
  {
    char ch=mp[arr[i]];
    if(ch=='P')
    {
      v[i]='S';
    }
    else
    {
      v[i]='P';
    }
  }
}
int q=count(v.begin(), v.end(), 'P');
int w=count(v.begin(), v.end(), 'S');
if(f==false)
{
  swap(a,b);
  int y=b.length()-1;
string s= a+ b[y];

UM<string,char> mp;
for(int i=0;i<2*n-2;i++)
{
  if(mp.count(arr[i])==0)
  {
    int pos= s.find(arr[i]);
    if(pos!=0)
    {
      v[i]='S';
      mp[arr[i]]='S';
    }
    else
    {
      v[i]='P';
      mp[arr[i]]='P';
    }
  }
  else
  {
    char ch=mp[arr[i]];
    if(ch=='P')
    {
      v[i]='S';
    }
    else
    {
      v[i]='P';
    }
  }
}
}

cerr<<"The string is: ";
for(int i=0;i<2*n-2;i++)
{
  cout<<v[i];
}


return 0;
}