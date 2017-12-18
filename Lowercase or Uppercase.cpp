#include<bits/stdc++.h>


using namespace std;


int main()
{
    int tc,n,cs=1;
    string s;
    cin>>tc;

    while(tc--)
    {

        cin>>s;
        int lo=0,hi=0,di=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                lo++;
            else if(s[i]>='A'&&s[i]<='Z')
                hi++;
            else
                di++;
        }

        if(lo>hi)
        {

            printf("Case %d: %d\n",cs++,hi+di);

        }
        else
             printf("Case %d: %d\n",cs++,lo+di);

    }
}

