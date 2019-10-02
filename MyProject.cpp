//CPP program to calculate net per day salaries of Ground Staffs.

#include<iostream>
using namespace std;


class groundHandlers
{
    protected:
        int ghNumber;
        int ghSalary;
        int ghTotal;
    public:
        groundHandlers()
        {
            ghNumber = 15;
            ghSalary = 1250;
        }
        void ghCompute()
        {
            ghTotal = ghNumber * ghSalary;
        }

};

class passengerServiceAgent
{
    protected:
        int psaNumber;
        int psaSalary;
        int psaTotal;
    public:
        passengerServiceAgent()
        {
            psaNumber = 9;
            psaSalary = 1725;
        }
        void psaCompute()
        {
            psaTotal = psaNumber * psaSalary;
        }

};

class rampSupervisor
{
    protected:
        int rsNumber;
        int rsSalary;
        int rsTotal;
    public:
        rampSupervisor()
        {
            rsNumber = 3;
            rsSalary = 2230;
        }
        void rsCompute()
        {
            rsTotal = rsNumber * rsSalary;
        }

};

class stationAttendent
{
    protected:
        int saNumber;
        int saSalary;
        int saTotal;
    public:
        stationAttendent()
        {
            saNumber = 18;
            saSalary = 990;
        }
        void saCompute()
        {
            saTotal = saNumber * saSalary;
        }

};

class securityGuards
{
    protected:
        int sgNumber;
        int sgSalary;
        int sgTotal;
    public:
        securityGuards()
        {
            sgNumber = 15;
            sgSalary = 1250;
        }
        void sgCompute()
        {
            sgTotal = sgNumber * sgSalary;
        }

};

class groundCost: public groundHandlers, public passengerServiceAgent, public rampSupervisor,
 public stationAttendent, public securityGuards
{
    protected: int ground_maintainance;
    public:
        void compute()
        {
            ghCompute();
            psaCompute();
            rsCompute();
            saCompute();
            sgCompute();

            ground_maintainance = ghTotal + psaTotal + rsTotal + saTotal + sgTotal;
            
        }
};