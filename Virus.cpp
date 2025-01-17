#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Virus
{
    protected:
    float numberofdeaths , totalpopulation ;
    public:
    void get()
    {
        cin>>numberofdeaths>>totalpopulation ;
    }
    virtual float GetMortalityRate() = 0;
};
class CovidVirus : public Virus
{
    public:
    virtual float GetMortalityRate()
    {
        return (numberofdeaths/totalpopulation) * 1000;
    }
};
class HivVirus : public Virus
{
    public:
    virtual float GetMortalityRate()
    {
        return (numberofdeaths/totalpopulation) * 1000;
    }
};
class BirdFlu: public Virus
{
    public:
    virtual float GetMortalityRate()
    {
        return (numberofdeaths/totalpopulation) * 1000;
    }
};

int main()
{
   
    CovidVirus c;
    cout<<"Enter number of deaths and total population ";
    c.get();
    cout<<"MortalityRate = "<<c.GetMortalityRate()<<endl;
    HivVirus h;
    cout<<"Enter number of deaths and total population ";
    h.get();
    cout<<"MortalityRate = "<<h.GetMortalityRate()<<endl;
    BirdFlu b;
    cout<<"Enter number of deaths and total population ";
    b.get();
    cout<<"MortalityRate = "<<b.GetMortalityRate()<<endl;
    getch();
}