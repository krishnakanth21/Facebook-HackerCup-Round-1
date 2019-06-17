#include <iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
   int f;
   int n;
   cin>>f;
   int i=0;
   char a[500][5000];
   if(f<1 && f>500)
   {exit(1);}
   while(i<f && f<=500 && f>=1)
   {
       cin>>a[i];
  
       int x=strlen(a[i]);
       if(x<2 || x>5000)
       {exit(1);}

       int ct=0;
       int ct1=0;
       int flag=0;
       int flag1=0;
       for(int j=1;j<x ;j++)
       {
         if(a[i][j]=='.')
         {   ct++;  }

         if(a[i][j]=='B')
         {   ct1++;  }

         if(a[i][j]=='.' && a[i][j+1]=='B')
         { flag1=1;}



       }


       if(ct==x-1 && ct!=0 && ct1==x-2 && flag1==0)
       {cout<<"Case #"<<i+1<<": N"<<endl;
        flag=1;
       }

       if(ct1==x-2 && ct1!=0 && flag1==0)
       {cout<<"Case #"<<i+1<<": Y"<<endl;
        flag=1;
       }

       if(flag1==1 && ct1*2 >= x-1)
        {cout<<"Case #"<<i+1<<": Y"<<endl;
         flag=1;
        }

       if(flag==0)
        {cout<<"Case #"<<i+1<<": N"<<endl;}






       i++;
   }


   return 0;
}
