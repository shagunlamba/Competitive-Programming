// https://codeforces.com/contest/1362/problem/A
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
   unsigned ll x,y;
   cin>>x>>y;
   if(x==y)
   {
     cout<<0<<"\n";
   }
   else if(x>y)
   {  
     ll count=0;
     if( (x%8==0||x%4==0||x%2==0) )
     {  
       while(x%8==0 && x/8 >=y)
       {
         count++;
         x=x/8;
       }
       while(x%4==0 && x/4 >=y)
       {
         count++;
         x=x/4;
       }
       while(x%2==0 && x/2 >=y)
       {
         count++;
         x=x/2;
       }
       if(x==y)
        cout<<count<<"\n";
        else
        cout<<-1<<"\n";
     }
     else
     {
       cout<<-1<<"\n";
     }
   }
   else{
     ll count=0;
 
       while(x*8 <=y)
       {
         count++;
         x=x*8;
       }
       while(x*4 <=y)
       {
         count++;
         x=x*4;
       }
       while(x*2 <=y)
       {
         count++;
         x=x*2;
       }
       if(x==y)
        cout<<count<<"\n";
        else
        cout<<-1<<"\n";

   }


  }
  return 0;
}