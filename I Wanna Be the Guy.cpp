//https://codeforces.com/contest/469/problem/A
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
int n;
cin>>n;
unordered_map<int,bool>m;

for(int i=1;i<=n;i++)
{
  m[i]=false;
}

int p;
cin>>p;
for(int i=0;i<p;i++)
{
  int x;
  cin>>x;
  m[x]=true;
}
int q;
cin>>q;
for(int i=0;i<q;i++)
{
  int x;
  cin>>x;
  m[x]=true;
}

for(int i=1;i<=n;i++)
{
  if(m[i]==false)
  {
    cout<<"Oh, my keyboard!";
    return 0;
  }
}

cout<<"I become the guy.";
return 0;

 
}