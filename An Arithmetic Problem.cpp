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


    int tc,cs=1;
    int x,y,z,n;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y>>z>>n;

        int d1=x-y;
        int d2=y-z;
        if(d1==d2)
        {

            if(x<=y&&x>=0)
            {
                long int res=x;
                int dif=abs(x-y);
                for(int i=1; i<n; i++)
                {
                    res+=dif;
                }
                printf("Case %d: %ld\n",cs++,res);

            }
            else if(x<=y&&x<0)
            {
                int dif=abs(x-y);
                long int res=x;

                for(int i=1; i<n; i++)
                {
                    res+=dif;
                }
                printf("Case %d: %ld\n",cs++,res);

            }
            else if(x>y&&x>=0)
            {
                int dif=abs(x-y);
                long int sum=x;
                for(int i=1; i<n; i++)
                {
                    sum=sum-dif;
                }
                printf("Case %d: %ld\n",cs++,sum);

            }
            else if(x>y&&x<=0)
            {
                int dif=abs(x-y);
                long int sum=x;
                for(int i=1; i<n; i++)
                {
                    sum=sum-dif;
                }
                printf("Case %d: %ld\n",cs++,sum);
            }

        }
        else
        {
            printf("Case %d: Error\n",cs++);

        }
    }

    return 0;
}



