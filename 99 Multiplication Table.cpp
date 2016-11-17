#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   for(int i=1;i<10;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<left;
           cout<<i<<"*"<<j<<"=";
           (i*j>=10)? cout<<setw(3)<<i*j : cout<<setw(2)<<i*j;
       }
       cout<<endl;
   }
    return 0;
}
