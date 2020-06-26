//https://codeforces.com/contest/1370/problem/C
#include<iostream>
#include<limits>
// #include<bits/stdc++.h>
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

vector<ll> printDivisors(ll n) 
{ 
    vector<ll> div;
    for (ll i=2; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                {
                  if(i%2==1)
                  {
                    div.pb(i);
                  }
                }
  
            else // Otherwise print both 
                {
                  if(i%2==1)
                  {
                    div.pb(i);
                  }
                  if((n/i)%2==1)
                  {
                    div.pb(n/i);
                  }
                }
        } 
    } 
    return div;
}

int main()
{
 _FI
 
 tc(t)
 {
  ll n;
  cin>>n;
  // cerr<<"Answer for"<<n<<": ";
  if(n==1)
  {
    cout<<"FastestFinger"<<endl;
  }
  else if(n==2)
  {
    cout<<"Ashishgup"<<endl;
  }
  else if(n%2==1)
  {
    cout<<"Ashishgup"<<endl;
  }
  else
  {
   vector<ll> div= printDivisors(n);
   
   if(div.size()==0)
   {
     cout<<"FastestFinger"<<endl;
   }
  else
   {
    int evenfactors=0;
    int oddfactors=0;
    ll x=n;
    while(x%2==0 && x>1)
    {
      x=x/2;
      evenfactors++;
    }
    x=n;
    if(div.size()!=0 && evenfactors==1)
    {
      if(div.size()>1)
      {
        cout<<"Ashishgup"<<endl;
      }
      else
      {
        // cout<<n<<endl;
        cout<<"FastestFinger"<<endl;
      }
    }
    else if(div.size()!=0 && evenfactors>1)
    {
      cout<<"Ashishgup"<<endl;
    }
   }
}
  
 } //tc

  return 0;
}


