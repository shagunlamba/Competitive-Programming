//https://codeforces.com/contest/459/problem/A
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
  int x1,y1,x2,y2;

  int x3,y3,x4,y4;
  cin>>x1>>y1>>x2>>y2;
 
 bool t=false;
  if(x1==x2)
  {
    int side= abs(y2-y1);
    x3=x1+side;
    y3=y1;

    x4=x2+side;
    y4=y2;

    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
   t=true;
  }
  if(y1==y2)
  {
    int side= abs(x2-x1);
    y3=y1+side;
    x3=x1;

    y4=y2+side;
    x4=x2;

    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    t=true;
  }
  
  int diff1=abs(x1-x2);
  int diff2=abs(y1-y2);
  
  if(diff1==diff2)
  {
    x3=x1;
    y3=y2;

    x4=x2;
    y4=y1;

    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    t=true;
  }

  else
  {
    if(t==false)
    cout<<-1;
  }


  return 0;
}