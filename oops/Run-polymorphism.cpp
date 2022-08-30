#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mem[100];
int dp[100][100];
/*
#Run-time polymorphism :
Run time polymorphism also known as Dyanamic polymorphism. It occurs at run time so it is not dependable on
compiler. we can get run time polymorphism using method overriding;
in method overding we create function with same name in both derived and base class.

#Virtual Function:
virtual function is a function which is declared in it's respective class,
but re-initialized in it's derived class.
virtual function is used to change the default behviour of the ptr.
so if we we'll use ptr for calling the function of base class so instead of executing
the function of base class. it'll execute the function of derieved class.
*/
class A
{
public:
    void fun()
    {
        cout << "Abhay";
    }
};
class B: public A
{
public:
    void fun()
    {
        cout << "Rajput";
    }
};

int main(){
    B obj;
    A *ptr;
    ptr = &obj;
    ptr->fun();
    return 0;
}