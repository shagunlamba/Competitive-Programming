//https://codeforces.com/contest/112/problem/A
#include<iostream>
#include <string>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

char my_tolower(char ch)
{
    return static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
}

int main() 
{
string a1,a2;
cin>>a1;
cin>>a2;

for(int i=0;a1[i]!='\0';i++)
  {
    char ans=my_tolower(a1[i]);
    a1[i]=ans;
    char ans2=my_tolower(a2[i]);
    a2[i]=ans2;
  }
if(a1==a2)
 cout<<"0";
else if(a1<a2)
 cout<<"-1";
else
 cout<<"1";
    return 0;
}