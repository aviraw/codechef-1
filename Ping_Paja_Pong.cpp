#include <iostream>
using namespace std;

int main()
{   
    int n=0;
    cin>>n;
    long long x[n]={0},y[n]={0},k[n]={0};
   
   for(int i=0;i<n;i++)
   {
       cin>>x[i]>>y[i]>>k[i];
   }
   if(n!=0)
   {
        for(int i=0;i<n;i++)
        {
            if(((x[i]+y[i])/k[i])%2==0)
             cout<<"Chef"<<endl;
            else
             cout<<"Paja"<<endl;
        }
   }
   else
   cout<<"Chef"<<endl;
    return 0;
}
