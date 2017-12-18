#include<bits/stdc++.h>


using namespace std;


int main()
{
    int tc,n,cs=1;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        string s1,s2="";
        int x=-1,r;

        for(int i=0; i<n; i++)
        {
            cin>>s1>>r;

            if(r>x)
            {
                x=r;
                s2=s1;
            }
        }



        if(x>1&&x<=1199)
        {

          cout<<"Case "<<cs++<<": "<<s2<<" is Newbie!."<<endl;
        }
        if(x>1200&&x<=1399)
        {

          cout<<"Case "<<cs++<<": "<<s2<<" is Pupil!."<<endl;
        }
        if(x>1400&&x<=1599)
        {

          cout<<"Case "<<cs++<<": "<<s2<<" is Specialist!."<<endl;
        }
        if(x>1600&&x<=1899)
        {

          cout<<"Case "<<cs++<<": "<<s2<<" is Expert!."<<endl;
        }

    }
}
