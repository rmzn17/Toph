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


    int n;
    while(scanf("%d",&n)==1)
    {
        vector<long int>v;
        long int x,y;
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&x);
            v.push_back(x);
            sort(v.begin(),v.end());
            scanf("%d",&y);
            printf("%d\n",v[y-1]);
        }

    }


    return 0;
}



