//https://codeforces.com/contest/208/problem/A
#include<iostream>
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
  string s;
  cin>>s;
  string ans="";
  int i=0;
  
  while(true)
  { 
    cerr<<i+1<<"iteration"<<endl;
    i++;
    if(s.empty())
    {
      break;
    }

    int position=s.find("WUB");

    cerr<<"Position"<<position<<endl;

    if(position==string::npos and !s.empty())
    {
      ans=ans+s;
      cerr<<"1.ans="<<ans<<endl;
      break;
    }
    if(position!=0)
    {
      ans=ans+s.substr(0,position);
      int l=ans.length();
      cerr<<"len of ans"<<l<<endl;
      ans=ans+" ";
      cerr<<"2.ans="<<ans;

      s=s.substr(position);

      cerr<<"ss="<<s;
    }
   
    else
    {
      if(s[position+3]=='\0')
       break;
      s=s.substr(position+3);
      cerr<<"s="<<s<<endl;
    }

  }
  
  cout<<ans;

  return 0;
}