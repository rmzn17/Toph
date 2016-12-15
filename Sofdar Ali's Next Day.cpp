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

bool leapyear(int yr)
{
    if ((yr%4==0)&&!(yr%100==0)||(yr%400==0))
        return true;
    else
        return false;
}

int main()
{
    int tc;
    cin>>tc;
    string month[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    while(tc--)
    {

        int d,m,y;
        cin>>d>>m>>y;
        if(m==1)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Feb, %d\n",y);

        }
        if(m==2)
        {
            bool ok=leapyear(y);

            if(ok)
            {

                if(d<29)
                {

                    if(d<9)
                        cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                    else
                        cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

                }
                else
                    printf("01 Mar, %d\n",y);
            }
            else
            {

                if(d<28)
                {

                    if(d<9)
                        cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                    else
                        cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

                }
                else
                    printf("01 Mar, %d\n",y);

            }

        }
        if(m==3)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Apr, %d\n",y);

        }
        if(m==4)
        {
            if(d<30)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 May, %d\n",y);

        }
        if(m==5)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Jun, %d\n",y);

        }
        if(m==6)
        {
            if(d<30)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Jul, %d\n",y);

        }
        if(m==7)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Aug, %d\n",y);

        }
        if(m==8)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Sep, %d\n",y);

        }
        if(m==9)
        {
            if(d<30)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Oct, %d\n",y);

        }
        if(m==10)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Nov, %d\n",y);

        }
        if(m==11)
        {
            if(d<30)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Dec, %d\n",y);

        }
        if(m==12)
        {
            if(d<31)
            {

                if(d<9)
                    cout<<"0"<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;
                else
                    cout<<d+1<<" "<<month[m-1]<<","<<" "<<y<<endl;

            }
            else
                printf("01 Jan, %d\n",y+1);

        }


    }
    return 0;
}




