//https://codeforces.com/contest/1369/problem/B
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
      cout<<s<<endl;
    }
    else if(s.find("10")==string::npos)
    {
      cout<<s<<endl;
    }
    else 
    {
      int i=0;
      string ans="";
      while(s[i]!='1')
      {
        ans=ans+s[i];
        i++;
      }
      int c=0;
      for(int j=0;j<n-1;j++)
      {
        if(s[j]=='1' && s[j+1]=='0')
        {
          c++;
        }
      }
      if(c>=1)
      {
        ans=ans+'0';
      }

      i=n-1;
      while(s[i]!='0')
      {
        ans=ans+'1';
        i--;
      }

      cerr<<"The ans is ";
      cout<<ans<<endl;
    }
  }


  return 0;
}
