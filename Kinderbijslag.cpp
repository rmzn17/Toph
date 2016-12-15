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
    cin>>tc;
    while(tc--)
    {
        int a,b,c;

        cin>>a>>b>>c;
        int check=a*100;
        int need=b*c;
        if(b*c<=check)
            printf("Case %d: YES\n",cs++);
        else
            printf("Case %d: NO\n",cs++);


    }
    return 0;
}

