#include<bits/stdc++.h>


using namespace std;

int main()
{

    int tc,cs=1;

    string ball;

    cin>>tc;

    while(tc--)
    {
        cin>>ball;
        int cnt=0;
        for(int i=0; i<ball.size(); i++)
        {
            if((ball[i]>='0' && ball[i]<='6')||ball[i]=='O')
            {
                cnt++;
            }

        }

        if(cnt<6)
            printf("%d BALLS\n",cnt);

        else
        {
            printf("%d BALLS\n",cnt);
            int over=cnt/6;

            int rem=cnt%6;

            if(rem>0)
                printf("%d OVER %d BALLS\n",over,rem);
            else
                printf("%d OVER\n",over);

        }

    }


}





