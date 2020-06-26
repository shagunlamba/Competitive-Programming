//https://codeforces.com/contest/1296/problem/C
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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;
bool flag=true;

vector<ll> SieveOfEratosthenes(int n) 
{ 
  vector<ll> result;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
          result.push_back(p);
    return result;
}



int main()
{
 _FI
 
 tc(t)
 {
  int n;
  cin>>n;
  string s;
  cin>>s;

  // if(s.find("LR")!=string::npos)
  // {
  //   int position= s.find("LR");
  //   cout<<position+1<<" "<<position+2<<endl;
  // }
  // else if(s.find("UD")!=string::npos)
  // {
  //   int position= s.find("UD");
  //   cout<<position+1<<" "<<position+2<<endl;
  // }
  // else
  // {
    map< pair<int,int> , int> mp;
    pair<int,int> p= make_pair(0,0);
    mp[p]=0;
    int i=0;
    int x=0;
    int y=0;
    bool flag=false;
    int len=INT_MAX;
    int l=-1,r=n;
    while(i<n)
    {
      if(s[i]=='L')
      {
        x=x-1;
      }
      else if(s[i]=='R')
      {
        x=x+1;
      }
      else if(s[i]=='U')
      {
        y=y+1;
      }
      else if(s[i]=='D')
      {
        y=y-1;
      }
      pair<int,int> g= make_pair(x,y);
      if(mp.count(g)>0)
      {
       flag=true;
       if(i-mp[g]+1<r-l+1)
       {
        l=mp[g];
        r=i;
       }
      }
        mp[g]=i+1;
      
      // cout<<"Point "<<i<< " "<<x<<" "<<y<<" "<<i+1<<endl;
      i++;
    }
    if(flag==false)
    {
      cout<<-1<<endl;
    }
    else
    {
      cerr<<"The ans is: ";
      cout<<l+1<<" "<<r+1<<endl;
    }
  }

 // } 

  return 0;
}



