#include <iostream>
#include<stdlib.h>
#include <cstdio>
#include<sstream>
#include <algorithm>
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
#define vc vector<int>
#define pb push_back
#define pf printf
#define mxpq priority_queue<int>
#define mnpq priority_queue<int,vector<int>,compare>
#define ms(a) memset(a,0,sizeof(a));
#define input(s) getline(cin,s);
#define str string s;
#define sz size();
#define ln strlen(s);
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mn2(a, b) (a<b?a:b)
#define mn3(a, b, c) mn2(a, mn2(b, c))
#define mn4(a, b, c, d) mn2(a, mn2(b, mn2(c, d)))
#define mx2(a, b) (a>b?a:b)
#define mx3(a, b, c) mx2(a, mx2(b, c))
#define mx4(a, b, c, d) mx2(a, mx2(b, mx2(c, d)))
#define mx 10001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;



vector<int>prime;
bool not_prime[mx];

void sieve()
{
    memset(not_prime,true,sizeof(not_prime));
    //prime.push_back(2);
    not_prime[0]=false;
    not_prime[1]=false;
    for(int i=2; i*i<mx; i++)
    {
        if(not_prime[i]==true)
        {
            for(int j=i*i; j<mx; j+=i)
            {
                not_prime[j]=false;
            }
        }
    }


}



int main()
{
    sieve();

    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        bool ok=false;
        int num=-1;
        while(1)
        {
            if(not_prime[b]==true)
            {
                num=b;
                ok=true;
                break;
            }
            b--;
            if(b<a)
                break;


        }

        if(ok)
        {
            cout<<num<<endl;

        }
        else
            cout<<-1<<endl;

    }


    return 0;
}

