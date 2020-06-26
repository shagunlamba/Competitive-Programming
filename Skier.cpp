//https://codeforces.com/contest/1351/problem/C
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
    string s;
    cin >> s;
    
    map<pair<pair<int,int>,pair<int,int>>,bool> m;
    int x=0,y=0,ans=0;
        
    for(char c : s){
      pair<int,int> p1,p2;
            p1=make_pair(x,y);
            if(c=='S') {
                p2 = make_pair(x,--y);
            }else if(c=='N'){
                p2 = make_pair(x,++y);
            }else if(c=='W'){
                p2 = make_pair(--x,y);
            }else if(c=='E'){
                p2 = make_pair(++x,y);
            }
            if(m[{p1,p2}]) ans++;
            else 
            {
              ans+=5;
              m[{p1,p2}]=m[{p2,p1}]=true;
            }
        }
        cout << ans << "\n";
    }

return 0; 
}