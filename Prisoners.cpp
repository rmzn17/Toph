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
        double n;
        scanf("%lf",&n);
        double res=0.0;
        double temp=(1.0/n);
        double x;
        for(int i=0; i<n; i++)
        {
            scanf("%lf",&x);
            res=res+(x*temp);
        }

        printf("%.15lf\n",res);
    }
    return 0;
}



