//https://codeforces.com/contest/339/problem/A
#include<iostream>
#include <string>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
  vector<int>v;
  string s;
  int length=s.length();
  cin>>s;
  int i=0;
  int c=0;
  while(s[i]!='\0' && c==0)
  { 
    if(s[i+1]=='\0')
     c++;
    char a=s[i];
    int ins= a-'0';
    v.push_back(ins);
    // cout<<ins<<" ";
    i=i+2;
  }
  sort(v.begin(),v.end());
  string ans="";
  int saa =0;
  vector<int>::iterator it=v.begin();
  while(it!=v.end())
  {
     int q=*it;
    if(saa== 0)
    {
      ans=ans + to_string(q);
      saa++;
    }
    else
     ans=ans+'+'+to_string(q);

    it++;
  }

cout<<ans;
return 0;
}