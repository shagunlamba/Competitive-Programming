//https://codeforces.com/contest/1370/problem/B
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

using namespace std;


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
 vector<ll> p= SieveOfEratosthenes(1000);
 tc(t)
 {
  int n;
  cin>>n;
  int arr[2*n+1];
  for(int i=1;i<=2*n;i++)
    cin>>arr[i];
  if(n==2)
  {
    cout<<1<<" "<<2<<endl;
  }
  else
  {
    int k=0;
    int x=p.size();
    while(k<x)
    {
      int count=0;
      vector<bool> check(2*n+1,false);
      vector< pair<int,int> > ans;
      for(int i=1;i<=2*n;i++)
      {
        bool flag=true;

        if(check[i]==false)
        {
          check[i]=true;
          for(int j=1;j<=2*n;j++)
          {
            if(i!=j && check[j]==false && (arr[i]+arr[j]) % p[k]==0)
            {
              // cout<<i<<" "<<j<<endl;
              check[j]=true;
              ans.pb(make_pair(i,j));
              flag=false;
              break;
            }
          }
          if(flag==true)
          {
            count++;
          }
        }
      }
      if(count==2)
      {
        cerr<<"Element"<<p[k]<<endl;
        for(int i=0;i<ans.size();i++)
        {
          cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        break;
      }
      else if(count==0)
      {
        cerr<<"Element"<<p[k]<<endl;
        for(int i=0;i<ans.size()-1;i++)
        {
          cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
        break;
      }
      else
      {
        k++;
      }
    }





  } //else
 } //tc

  return 0;
}