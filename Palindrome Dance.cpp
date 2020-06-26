//https://codeforces.com/contest/1040/problem/A
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
  int n;
  int a,b;
  cin>>n>>a>>b;

  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];

  int cost=0;

  int minim=min(a,b);
  int maxim=max(a,b);
  int i=0;
  int j=n-1;
    while(i<j)
    {
      if(arr[i]==arr[j] && arr[i]!=2)
      {
        //no prob
      }
      else if(arr[i]==arr[j] && arr[i]==2)
      {
        cost+= 2*minim;
      }
      else if( (arr[i]==1 && arr[j]==0) || (arr[i]==0 && arr[j]==1))
      {
        flag=false;
        break;
      }
      else if( (arr[i]==1 && arr[j]==2) || (arr[i]==2 && arr[j]==1) )
      {
        cost+=b;
      }
      else 
      {
        cost+=a;
      }
      i++;
      j--;
    }
    if(flag==false)
    {
      cout<<-1;
      return 0;
    }
    else
    {
      if( n%2==1 && arr[i]==2)
      {
        cost+=minim;
      }
      cout<<cost<<endl;
    }

return 0;
}