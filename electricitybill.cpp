/*Q-An electricity board charges the following rates to domestic users to discourage large consumption of energy.
For the first 100 units: - 60 P per unit 
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50.If the total amount is more than Rs 300 than an additional surcharge of 15% is added.
Implement a C++ program to read the names of users and number of units consumed and display the charges with names.*/

#include<iostream>
using namespace std;
class UserDetails
{   
    string name;
    int unit;
    float charges;

    public:
        void setName(string n)
        {   
            name=n;
        }
        void setUnit(int u)
        {   
            unit=u;
        }
        void setCharges(float c)
        {   
            charges=c;
        }
        string getName()
        {   
            return name;
        }
        int getUnit()
        {   
            return unit;
        }
        float getCharges()
        {   
            return charges;
        }
        void display()
        {   
            cout<<"User's Name: "<<name<<endl;
            cout<<"Number of unit consumed: "<<unit<<endl;   
        }
        int calculation()
        {   
            if(unit<=100)
            {   
                charges=unit*0.6;
            }
            else if(unit>100 && unit<=300)
            {   
                charges=60+((unit-100)*0.8);
            }
            else
            {   
                charges=60+160+((unit-300)*0.9);
            }
            charges+=50;
            if(charges>300)
            {   
                charges+=0.15*charges;
            }
            return charges;
        }   
};
int main()
{   
    UserDetails d;
    cout<<"Enter user's name "<<endl;
    string name;
    cin>>name;
    d.setName(name);
    cout<<"Enter unit "<<endl;
    int unit;
    cin>>unit;
    d.setUnit(unit);
    d.display();
    int total=d.calculation();
    cout<<"Electricity bill is: "<<total;
}