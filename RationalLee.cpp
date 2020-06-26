//https://codeforces.com/contest/1369/problem/C
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
   int n,k;
   cin>>n>>k;
   ll arr[n];

   for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
   int count_1=0;
   int w[k];
   for(int i=0;i<k;i++)
    {
      cin>>w[i];
      if(w[i]==1)
        count_1++;
    }
   
   sort(arr,arr+n,greater<ll>());
   sort(w,w+k);
   ll ans=0;
   int t=count_1;
  
   for(int i=0;i<k;i++)
   {
    ans=ans+arr[i];
    if(count_1>0)
    {
      count_1--;
      ans=ans+arr[i];
    }
   }
  
  for(int i=k;i<n;)
  {
    i=i+w[t++]-2;
    ans=ans+arr[i];
    i++;
  }

   cerr<<"The ans is ";
   cout<<ans<<endl;
  }

  return 0;
}




 