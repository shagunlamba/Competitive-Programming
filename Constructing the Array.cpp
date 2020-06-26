//https://codeforces.com/contest/1353/problem/D
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
#include<set>
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
#define mp make_pair
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

ll arr[2000009];


int main()
{
 _FI

  tc(t)
  {
    ll n;
    cin>>n;
    set< pair<ll, pair<ll,ll> > > s;   // size, (l , r) , minus for maxi
    ll arr[n+1];
    s.insert(mp(-n, mp(1,n)));
    ll num=1;
    while(s.size()>0)
    {
      pair<ll , pair<ll,ll> > p= *s.begin();
      ll l= p.second.first;
      ll r= p.second.second;

      s.erase(p);
      if(l>r)
        continue;
      if(l==r)
      {
        arr[l]=num++;
        continue;
      }

       if((r-l+1)%2 != 0){
                arr[(l+r)/2] = num++;
                ll mid = (l+r)/2;
                s.insert(mp(-(mid-l),mp(l,mid-1)));
                s.insert(mp(-(r-mid),mp(mid+1,r)));
            }else{
                arr[(l+r-1)/2] = num++;
                ll mid = (l+r-1)/2;
                s.insert(mp(-(mid-l),mp(l,mid-1)));
                s.insert(mp(-(r-mid),mp(mid+1,r)));
            }
      // for(int i=1;i<=n;i++)
      //  cout<<arr[i]<<" ";
      //  cout<<endl;
    }

    for(int i=1;i<=n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;
  }

  return 0;
}













 