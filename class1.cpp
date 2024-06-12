#include<iostream>
using namespace std;
class sum
{  
    public:
    int a,b;
    sum(int num,int num1)
    {   
        cout<<"welcome to my first class "<<endl;
        a=num;
        b=num1;
    }
    void display()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    sum obj(20,10);
    obj.display();
    return 1;
}