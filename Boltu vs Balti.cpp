#include<bits/stdc++.h>

using namespace std;


int main()
{

    long long int a,b;

    while(cin>>a>>b)
    {

        if(a>b)
        {
            long long int x=a;
            a=b;
            b=x;
        }
        long long int temp=((a*(a+1))/2)-a;

        long long int ans=(b*(b+1))/2;

        ans-=temp;

        printf("Sum of %lld to %lld is -> %lld;\n",a,b,ans);
    }
}
