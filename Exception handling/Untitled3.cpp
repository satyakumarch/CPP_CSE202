#include<iostream>
using namespace std;
void divide (int x, int y, int z)
{
    cout<<"\nWe are inside the function";
    if((x-y)!=0)
    {
        int r= z/(x-y);
        cout<<"\nResult="<<r;
    }
    else
    {
        throw(x-y);
    }
}
int main()
{
    try
    {
        cout<<"\nWe are inside the try block";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"\ncaught theexception";
        }
        return 0    ;
}
