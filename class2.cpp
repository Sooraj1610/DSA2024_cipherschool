//A constructor is a special member function that is called automatically when the object is created .It has no return type.#include<iostream>
using namespace std;
class Employee{
    public:
    //default constructor
    Employee()  
    {
        cout<<"Constructor Called ";
    }
};
int main()
{
    Employee e1;
}