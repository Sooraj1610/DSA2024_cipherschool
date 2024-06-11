#include<iostream>
using namespace std;
//Writing a function 
//returntype functionname ()  
int fact(int num)
{   
    cout<<"Factorial of N"<<endl;
    int x=1;

    for(int i=1;i<=num;i++)
    {
        x*=i;
    }

    return x;
}
int combination(int num1,int num2)
{
    int num=fact(num1);
    int dem=fact(num2) * fact(num1-num2);
    return num/dem;
}

int main()
{
    int n,r;
     cout<<"Enter the value of n and r:="<<endl;

    cin>>n>>r;
    if(n==0)
    {
        cout<<1;
    }
    else
    {
      cout<< combination(n,r);
  
   
    }
    return 0;

   
}