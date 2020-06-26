//https://codeforces.com/contest/1363/problem/B
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
#define _FI ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9+7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;


int main()
{
  _FI
 
tc(t)
{
  string s;
  cin>>s;
  int num_ones=count(s.begin(), s.end(), '1');
  int num_zeroes=count(s.begin(), s.end(), '0');
  int all1Price=num_zeroes;
  int all0Price=num_ones;
  int done_ones=0 , done_zeroes=0;
  int price=INT_MAX;
  for(int i=0;i<s.length();i++)
  {
    int x=0;
    int y=0;
    if(s[i]=='1')
    {
      done_ones++;
      x= done_zeroes + num_ones - done_ones;
      y= done_ones + num_zeroes - done_zeroes;
    }
    else
    {
      done_zeroes++;
      x= done_zeroes + num_ones - done_ones;
      y= done_ones + num_zeroes - done_zeroes; 
    }
    price=min(price,min(x,y));
  }
 cout<<min(all1Price,min(all0Price,price))<<"\n";

}
return 0;
}