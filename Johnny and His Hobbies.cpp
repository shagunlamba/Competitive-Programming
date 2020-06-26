//https://codeforces.com/contest/1362/problem/B
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
 tc(t)
 {
   int n;
   cin>>n;
   UM<int,bool> mp;
   int *arr= new int[n];
   int max=INT_MIN;
   for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      mp[arr[i]]=true;
    }
    max= *max_element(arr,arr+n);
   bool flag=false;
   int k=1;
   while(k<=1024)
   {
     bool f=true;
     for(int i=0;i<n;i++)
     {
       int x= k^arr[i];
      //  cout<<"x"<<x<<"\n";
       if(mp.count(x)==0)
       {
         f=false;
         break;
       }
     }
     if(f==true)
     {
       flag=true;
       cout<<k<<"\n";
       break;
     }

     k++;
   }
    if(flag==false)
    cout<<-1<<"\n";

  delete []arr;
 }
  return 0;
}