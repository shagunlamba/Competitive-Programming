//https://codeforces.com/contest/58/problem/A
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
  queue<char>q;

  int i=0;
  while(s[i]!='\0')
  {
    if(s[i]=='h'||s[i]=='e'||s[i]=='l'||s[i]=='o')
      q.push(s[i]);
    i++;
  }
  unordered_map<char,bool>m;
  m['h']=false;
  m['e']=false;
  m['l']=false;
  m['o']=false;

  string help="hello";
  int j=0;
  int countforh=0;


  while(!q.empty())
  {
    char top=q.front();
    q.pop();

    if(top=='l' && countforh==0 && top==help[j])
    {
      countforh++;
      ans=ans+top;
      j++;
      continue;
    }
    if(top==help[j] && m[top]==false)
    {
      ans=ans+top;
      m[top]=true;
      j++;
    }
  }
  
  if(ans==help)
   cout<<"YES";
   else
   cout<<"NO";

  return 0;
}