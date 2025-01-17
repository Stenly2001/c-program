#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Shape
{
    protected:
    int length,breadth;
    public:
    void get()
    {
        cin>>length>>breadth;
    }
    virtual float Area() = 0;
};
class Rectangle : public Shape
{
    public:
    virtual float Area()
    {
        return length*breadth;
    }
};
class Triangle : public Shape
{
    public:
    virtual float Area() 
    {
        return 0.5*length*breadth;
    }
};
int main()
{
   
    Rectangle r;
    cout<<"Enter length and breadth ";
    r.get();
    cout<<"Area = "<<r.Area()<<endl;
    Triangle t;
    cout<<"Enter length and breadth ";
    t.get();
    cout<<"Area = "<<t.Area()<<endl;
    getch();
}