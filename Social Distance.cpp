//https://codeforces.com/contest/1367/problem/C
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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define PQ priority_queue
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;
bool flag=true;

int main()
{
  _FI
  tc(t)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
     int c=count(s.begin(), s.end(), '1');
     if(n==1)
     {
      if(s[0]=='1')
        cout<<0<<endl;
      else
        cout<<1<<endl;
     }
     else if(c==0)
     {
      int d=0;
      for(int i=0;i<n;i=i+(k+1))
      {
        s[i]='1';
        d++;
      }
      cout<<d<<endl;
     }
     else if(c==1) 
     {
      int pos=s.find("1");
      int i=pos-(k+1);
      int d=0;
      while(i>=0)
      {
        d++;
        // s[i]="1";
        i=i-(k+1);
      }
      i=pos+(k+1);
      while(i<n)
      {
        d++;
        i=i+(k+1);
      }
      cout<<d<<endl;
     }
     else
     {
      int pos1=s.find("1");
      int pos2=s.find("1",pos1+1);
      int c=0;
      int p=0;
      while(true)
      {
        // cout<<"p: "<<p<<endl;
        if(p==0 && ( (p+k+1) <= pos1 ) )
        {
          p=p+k+1;
          c++;
          if(p==pos1)
          {
            break;
          }
        }
        else
        {
          if(p+k+1<=pos1)
          {
            c++;
            p=p+k+1;
          }
          else
          {
            break;
          }
        }
      }
     p=pos1;
     while(true)
     {
      if(p+k+1 < pos2 && p+k+1+k+1<=pos2)
      {
        p=p+k+1;
        c++;
      }
      else
      {
       int x=s.find("1",pos2+1);
       if(x==string::npos)
       {
        break;
       }
       else
       {
        p=pos2;
        pos2=x;
       }
      }
     }
     int position=s.rfind("1");
     while(position<n)
     {
      if(position+k+1<n)
      {
        c++;
      }
      else
      {
        break;
      }
      position=position+k+1;
     }
     cout<<c<<endl;
   }
}
return 0;
}