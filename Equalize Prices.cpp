//https://codeforces.com/problemset/problem/1183/B
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
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;



int main()
{
 _I 

 tc(t)
 {
   ll n,k;
   cin>>n>>k;
   ll *arr= new ll[n];
   for(ll i=0;i<n;i++)
    cin>>arr[i];
   
   if(n==1)
   {
     cout<<arr[0]+k<<endl;
     continue;
   }

   sort(arr,arr+n);
   ll min=arr[0];
   ll max=arr[n-1];

   if(min+k>=max)
   {
     ll target= min+k;
     cout<<target<<endl;
   }
   else if( min+k < max)
   {
     if(max-k>min+k)
     {
       cout<<-1<<endl;
     }
     else
     {
       ll target= min+k;
       cout<<target<<endl;
     }
   }

   delete []arr;
 }

return 0;
}