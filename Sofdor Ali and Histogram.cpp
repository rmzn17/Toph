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

    int tc;
     int n;
    cin>>tc;
    vector<long int>v;
    for(int cs=1;cs<=tc;cs++)
    {
        long int x;

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        long long int ans=0,mx=-1;
        for(int i=1,j=n-1;i<=n;i++,j--)
        {

           ans=v[j]*i;
            if(ans>mx)
            mx=ans;

        }
        cout<<"Case "<<cs<<": "<<mx<<endl;
        v.clear();

    }


    return 0;
}


