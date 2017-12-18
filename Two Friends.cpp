#include<bits/stdc++.h>


using namespace std;

int main()
{

  int tc,r,cs=1;

  cin>>tc;

  while(tc--)
  {
    cin>>r;

    if(r<=2)
        printf("Case %d: Tie\n",cs++);

    else if(r%2==0)
         printf("Case %d: CodeMask\n",cs++);
    else
         printf("Case %d: CodeNewtons\n",cs++);

  }


}




