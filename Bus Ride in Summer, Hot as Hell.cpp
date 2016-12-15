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


    int n,tc,cs=1;
    cin>>tc;
    while(tc--)
    {
        cin>>n;

        int x,y;
        int ans=1,tot=0;
        cin>>x>>y;
        tot=x;
        int mx=-1;
        for(int i=1; i<n; i++)
        {
            cin>>x>>y;
            if(tot==y)
            {
                if(ans>mx)
                    mx=ans;
                ans=1;
            }
            else
                ans++;

            tot+=(x-y);
        }
        printf("Case %d: %d\n",cs++,mx);
    }
    return 0;
}

