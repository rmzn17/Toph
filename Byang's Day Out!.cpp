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


    long int tc;

    while(cin>>tc)
    {

        int x,y,z;

        for(long int i=0; i<tc; i++)
        {
            cin>>x>>y>>z;

            if(x+y<z)
            {
                printf("No\n");
                continue;
            }
            else if(x+z<y)
            {
                printf("No\n");
                continue;

            }
            else if(y+z<x)
            {
                printf("No\n");
                continue;

            }
            else
                printf("Yes\n");

        }
    }
    return 0;
}


