#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
using namespace std;

class Engine
{
    protected:
    double Tc,Th,rho,r,gamma = 1.4,W,Qh ;
    public:
    void get()
    {
        cin>>Tc>>Th>>rho>>r>>W>>Qh ;
    }
    virtual float GetEfficiency() = 0;
};
class InternalCombustionEngine : public Engine
{
    public:
    virtual float GetEfficiency()
    {
        return (1 - (Tc/Th)) * 100;
    }
};
class ExternalCombustionEngine : public Engine
{
    public:
    virtual float GetEfficiency()
    {
        return (1 - (Tc/Th)) * 100;
    }
};
class PetrolEngine : public Engine
{
    public:
    virtual float GetEfficiency()
    {
        return (1 - (1 / pow(r, (gamma - 1)))) * 100;
    }
};
class DieselEngine: public Engine
{
    public:
    virtual float GetEfficiency()
    {
        return (1 - (1 / pow(r, (gamma - 1))) * ((pow(rho, gamma)-1) / (gamma * (rho -1)))) * 100;
    }
};
class SteamEngine : public Engine
{
    public:
    virtual float GetEfficiency()
    {
        return (W/Qh) * 100;
    }
};

int main()
{
   
    InternalCombustionEngine i;
    cout<<"Enter the value for Tc,Th,rho,r,W,Qh ";
    i.get();
    cout<<"Efficiency = "<<i.GetEfficiency()<<"%"<<endl;
    ExternalCombustionEngine e;
    cout<<"Enter the value for Tc,Th,rho,r,W,Qh ";
    e.get();
    cout<<"Efficiency = "<<e.GetEfficiency()<<"%"<<endl;
    PetrolEngine p;
    cout<<"Enter the value for Tc,Th,rho,r,W,Qh ";
    p.get();
    cout<<"Efficiency = "<<p.GetEfficiency()<<"%"<<endl;
    DieselEngine d;
    cout<<"Enter the value for Tc,Th,rho,r,W,Qh ";
    d.get();
    cout<<"Efficiency = "<<d.GetEfficiency()<<"%"<<endl;
    SteamEngine s;
    cout<<"Enter the value for Tc,Th,rho,r,W,Qh ";
    s.get();
    cout<<"Efficiency = "<<s.GetEfficiency()<<"%"<<endl;
    getch();
}