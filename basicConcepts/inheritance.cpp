//Inheritance in C++

# include <iostream>
using namespace std;

class Car{
    public:
        void engine(){
            cout<<"Car's Engine\n";
        }
        void chassis(){
            cout<<"Car's Chassis\n";
        }
        void body(){
            cout<<"Car's Body\n";
        }
};

class SportsCar: public Car{
    public:
        void turbo(){
            cout<<"Sportscar's Turbo\n";
        }
        void spoiler() {
            cout<<"Sportscar's Spoiler\n";
        }
        void rollcage(){
            cout<<"Sportscar's Rollcage\n";
        }
        void engine(){      //Overloaded function
            cout<<"Sportscar's Engine"<<endl;
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
    sc.Car::engine();   //Accessed Car class from the object of Sportscar class OP Shit
    sc.engine();
    sc.rollcage();
    sc.spoiler();
    sc.turbo();
    return 0;
}

// Designed by Ishan.✌🏻
