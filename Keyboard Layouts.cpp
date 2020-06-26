//https://codeforces.com/contest/831/problem/B
#include<iostream>
#define ll long long
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;
 

int main()
{

string a,b,s;
cin>>a>>b>>s;

string ans="";
int i=0;
while(i<s.length())
{
  if(s[i]>='0' and s[i]<='9')
  {
   ans=ans+s[i];
  }
  else if(s[i]>='A' and s[i]<='Z')
  { 
    char f=tolower(s[i]);
    int position= a.find(f);
    char pos= b[position];
    char q= toupper(pos);
    ans=ans+q;
  }
  else
  {
    int position= a.find(s[i]);
    char pos= b[position];
    char q= tolower(pos);
    ans=ans+q;
  }
  i++;
}

cout<<ans;
 return 0;
}