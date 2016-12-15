#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<sstream>
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;


int main()
{

    int tc,cs=1;
    cin>>tc;
    while(tc--)
    {
        int a,c;
        char ch;
      scanf("%d %c %d",&a,&ch,&c);
      int res=0;
      if(ch=='+')
      {
          res=a+c;
      }
      if(ch=='*')
      {
          res=a*c;

      }
      if(ch=='-')
      {
          res=a-c;
      }

       printf("Case %d: %d\n",cs++,res);
    }
    return 0;
}


