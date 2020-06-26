//https://codeforces.com/contest/1245/problem/B
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
   int n;
   cin>>n;
   int a,b,c;
   cin>>a>>b>>c;

   string s;
   cin>>s;

   int x= round(n*1.0/2);
   int count=0;
   string ans="";
   for(int i=0;i<s.length();i++)
   {
     if(s[i]=='R')
     {
       if(b!=0)
       { 
         ans=ans+"P";
         b--;
         count++;
       }
       else
       {
         ans=ans+".";
       }
     }
     else if(s[i]=='P')
     {
       if(c!=0)
       {
         ans=ans+"S";
         c--;
         count++;
       }
       else
       {
         ans=ans+".";
       }
     }
     else
     {
       if(a!=0)
       {
         ans=ans+"R";
         a--;
         count++;
       }
       else
       {
         ans=ans+".";
       }
     }
   } 
//   cout<<"ans"<<ans<<endl;
  for(int i=0;i<ans.length();i++)
  {
    if(ans[i]=='.')
    {
      if(a!=0)
      {
        a--;
        ans[i]='R';
      }
      else if(b!=0)
      {
        b--;
        ans[i]='P';
      }
      else if(c!=0)
      {
        c--;
        ans[i]='S';
      }
    }
  }

  if(count>=x)
   {
     cout<<"YES"<<endl;
     cout<<ans<<endl;
   }
   else
   {
     cout<<"NO"<<endl;
   }
 }

return 0;
}