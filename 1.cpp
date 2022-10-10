#include<iostream>
using namespace std;
int main()
{
     int n,c,k=0;
     cout<<"Enter a number : ";
     cin>>n;
     c=n;
     while(n)
     {
          k=k*10+n%10;
          n=n/10;
     }
     if(k==c)
          cout<<"Palendron"<<endl;
     else
          cout<<"not Palendron"<<endl;
     return 0;
}
