#include<bits/stdc++.h>


using namespace std;


int main()
{
    int tc,cs=1;

    long int n;

    cin>>tc;

    while(tc--)
    {

        cin>>n;

        if(n==1)
        {
            printf("1\n");
            continue;
        }
        if(n%2==0)
        {
            long int a=n/2;

            cout<<((a)+(a*(-2)))<<endl;
        }
        else
        {
             long int a=n/2;

            cout<<((a+1)+(a*(-2)))<<endl;
        }

    }
}


