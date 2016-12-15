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
        long int x,m;
        string s;
        char ch[12];
        for(int i=0; i<n; i++)
        {
            cin>>s>>x;
            v.push_back(x);
            if(s[0]=='m')
                ch[i]='m';
            else if(s[0]=='a')
                ch[i]='a';
            else if(s[0]=='s')
                ch[i]='s';
            else if(s[0]=='d')
                ch[i]='d';
        }

        cin>>m;
        long int ans=m;
        for(int i=n-1; i>=0; i--)
        {
            if(ch[i]=='m')
                ans=ans/v[i];

            else if(ch[i]=='a')
                ans=ans-v[i];

            else if(ch[i]=='s')
                ans=ans+v[i];
            else if(ch[i]=='d')
                ans=ans*v[i];
        }

        cout<<ans<<endl;

    }


    return 0;
}



