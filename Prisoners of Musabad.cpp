#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>
#define vc vector<int>
#define pb push_back
#define pf printf
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define max 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{
    int n;
    vector<int>v;
    while(scanf("%d",&n)==1)
    {
        v.clear();

        int x;

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x);
            v.pb(x);
        }
        sort(v.begin(),v.end());
        long int q;
        int s;
        scanf("%ld",&q);
        for(long int i=0; i<q; i++)
        {
            int cnt=0;
            bool ok=false;
            scanf("%d",&s);
            for(int j=0; j<n; j++)
            {
                if(v[j]==s)
                    cnt++;
                if(cnt==2)
                {
                    ok=true;
                    break;

                }

            }
            if(ok)
                printf("Yes\n");
            else
                printf("No\n");

        }


    }

    return 0;
}

