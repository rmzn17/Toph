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
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;


struct compare
{
    bool operator()(const int& l, const int& r)
    {
        return l > r;
    }
};


struct Custom_Class
{

public:
    string name;
    int temp;
    Custom_Class( string n, int t)
    {
        name = n;
        temp = t;
    }
};


struct ccompare
{
    bool operator()(const Custom_Class& abc, const Custom_Class& def)
    {
        return abc.temp > def.temp;
    }
};


priority_queue<Custom_Class,vector<Custom_Class>,ccompare>cpq;


vector<long int>prime;
bool not_prime[mx];

void sieve()
{
    memset(not_prime,true,sizeof(not_prime));
    //prime.push_back(2);
    not_prime[0]=false;
    not_prime[1]=false;
    for(long int i=2; i*i<mx; i++)
    {
        if(not_prime[i]==true)
        {
            for(long int j=i*2; j<mx; j+=i)
            {
                not_prime[j]=false;
            }
        }
    }

    for(long int i=2; i<mx; i++)
    {
        if(not_prime[i]==true)
            prime.push_back(i);
    }
}



int main()
{
    FastRead;


    int tc;

    cin>>tc;
    while(tc--)
    {

        string s;

        cin>>s;

        string dept="";
        dept+=s[4];
        dept+=s[5];
        dept+=s[6];




        int sem=s[2]-48;

        string yr="";
        yr+=s[0];
        yr+=s[1];

        if(sem==1)
        {

            if(dept=="115")
            {
                if(yr[0]>'1')
                {
                    printf("CSE Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("CSE Spring 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="116")
            {


                if(yr[0]>'1')
                {
                    printf("BBA Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("BBA Spring 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="117")
            {


                if(yr[0]>'1')
                {
                    printf("LLB Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("LLB Spring 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="114")
            {

                if(yr[0]>'1')
                {
                    printf("English Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("English Spring 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="111")
            {


                if(yr[0]>'1')
                {
                    printf("Economics Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("Economics Spring 20");
                    cout<<yr<<endl;
                }

            }
            else
            {

                if(yr[0]>'1')
                {
                    printf("EEE Spring 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("EEE Spring 20");
                    cout<<yr<<endl;
                }

            }

        }
        else if(sem==2)
        {


            if(dept=="115")
            {
                if(yr[0]>'1')
                {
                    printf("CSE Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("CSE Summer 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="116")
            {


                if(yr[0]>'1')
                {
                    printf("BBA Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("BBA Summer 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="117")
            {


                if(yr[0]>'1')
                {
                    printf("LLB Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("LLB Summer 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="114")
            {

                if(yr[0]>'1')
                {
                    printf("English Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("English Summer 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="111")
            {


                if(yr[0]>'1')
                {
                    printf("Economics Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("Economics Summer 20");
                    cout<<yr<<endl;
                }

            }
            else
            {

                if(yr[0]>'1')
                {
                    printf("EEE Summer 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("EEE Summer 20");
                    cout<<yr<<endl;
                }

            }

        }
        else
        {
            if(dept=="115")
            {
                if(yr[0]>'1')
                {
                    printf("CSE Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("CSE Autumn 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="116")
            {


                if(yr[0]>'1')
                {
                    printf("BBA Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("BBA Autumn 20");
                    cout<<yr<<endl;
                }

            }
            else if(dept=="117")
            {


                if(yr[0]>'1')
                {
                    printf("LLB Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("LLB Autumn 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="114")
            {

                if(yr[0]>'1')
                {
                    printf("English Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("English Autumn 20");
                    cout<<yr<<endl;
                }


            }
            else if(dept=="111")
            {


                if(yr[0]>'1')
                {
                    printf("Economics Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("Economics Autumn 20");
                    cout<<yr<<endl;
                }

            }
            else
            {

                if(yr[0]>'1')
                {
                    printf("EEE Autumn 19");
                    cout<<yr<<endl;
                }
                else
                {
                    printf("EEE Autumn 20");
                    cout<<yr<<endl;
                }

            }


        }
    }

    return 0;
}


