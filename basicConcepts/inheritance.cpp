//Inheritance in C++

# include <iostream>
using namespace std;

class Car{
    public:
        void engine(){
            cout<<"Engine ON\n";
        }
        void chassis(){
            cout<<"Chassis ON\n";
        }
        void body(){
            cout<<"Body ON\n";
        }
};

class SportsCar: public Car{
    public:
        void turbo(){
            cout<<"Turbo is ON\n";
        }
        void spoiler(){
            cout<<"Spoiler is ON\n";
        }
        void rollcage(){
            cout<<"Rollcage is ON\n";
        }
};


int main(){
    Car c;
    SportsCar sc;

    cout<<"\nCar Specs: \n";
    c.body();
    c.chassis();
    c.engine();

    cout<<"\nSports Car Specs: \n";
    sc.body();      // inherited form Car class
    sc.chassis();   // inherited form Car class
    sc.engine();    // inherited form Car class
    sc.rollcage();
    sc.spoiler();
    sc.turbo();
    return 0;
}