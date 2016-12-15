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
    int x1,y1,x2,y2;

    cin>>tc;
    while(tc--)
    {
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2||y1==y2)
        {
            printf("No\n");
            continue;

        }

        if(x1>x2)
        {
            if(y1<y2)
            {
                int a=x1,b=y1;
                for(int i=1; i<=8; i++)
                {
                    a--;
                    b++;
                    if(a==x2&&b==y2)
                    {
                        printf("Yes\n");
                        break;
                    }
                    else if(a<1||b>8)
                    {
                        printf("No\n");
                        break;
                    }
                }
            }
            else
            {
                int a=x1,b=y1;
                for(int i=1; i<=8; i++)
                {
                    a--;
                    b--;
                    if(a==x2&&b==y2)
                    {
                        printf("Yes\n");
                        break;
                    }
                    else if(a<1||b<1)
                    {
                        printf("No\n");
                        break;
                    }
                }

            }
        }
        else
        {
            if(y1<y2)
            {
                int a=x1,b=y1;
                for(int i=1; i<=8; i++)
                {
                    a++;
                    b++;
                    if(a==x2&&b==y2)
                    {
                        printf("Yes\n");
                        break;
                    }
                    else if(a>8||b>8)
                    {
                        printf("No\n");
                        break;
                    }
                }
            }
            else
            {

                int a=x1,b=y1;
                for(int i=1; i<=8; i++)
                {
                    a++;
                    b--;
                    if(a==x2&&b==y2)
                    {
                        printf("Yes\n");
                        break;
                    }
                    else if(a>8||b<1)
                    {
                        printf("No\n");
                        break;
                    }
                }

            }
        }


    }

    return 0;
}




