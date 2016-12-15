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
    int tc;
    double sq,r1,r2,r3,r4;
    while(scanf("%lf%lf%lf%lf%lf",&sq,&r1,&r2,&r3,&r4)==5)
    {
        double a1=PI*r1*r1;
        a1=a1/4.0;

        double a2=PI*r2*r2;
        a2=a2/4.0;

        double a3=PI*r3*r3;
        a3=a3/4.0;

        double a4=PI*r4*r4;
        a4=a4/4.0;

        double totarea=a1+a2+a3+a4;
        double sqarea=sq*sq;
        double ans=sqarea-totarea;
        printf("%.3lf\n",ans);

    }
    return 0;
}




