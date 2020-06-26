//https://codeforces.com/contest/978/problem/B
#include<iostream>
#define ll long long
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<unordered_map>
using namespace std;

int main()
{
 int n;
 string s;
 cin>>n;
 cin>>s;
 int c=0;


 int find= s.find("xxx");

 while(find!=string::npos)
 {
  s=s.substr(find+1);
  c++;
  find= s.find("xxx");
 }  

 if(find==string::npos)
  {
    cout<<c;
  }



return 0;
}