#include<bits/stdc++.h>


using namespace std;

int main()
{

   long long int n;

   while(cin>>n)
   {
       unsigned long long int sum=1;
      for(int i=1;i<=n;i++)
       {

           sum=sum*i;
       }

       cout<<sum<<endl;
   }


}



