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
    long int x[1100];

    cin>>tc;
    while(tc--)
    {
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            scanf("%ld",&x[i]);
        }
        long long int mx=0;
        if(n==1)
            mx=x[0];
        else
        {


            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    long long int m=x[i]|x[j];
                    if(m>mx)
                        mx=m;
                }
            }
        }

        printf("Case %d: %lld\n",cs++,mx);
    }
    return 0;
}


