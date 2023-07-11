#include <iostream>
#include "Car.hpp"
#include "Bike.hpp"

using namespace std;


int main() {

    string vehicleType;
    cin>> vehicleType;

    Vehicle *vehicle;
    if(vehicleType=="Car"){
        vehicle = new Car;
    }
    else if (vehicleType == "Bike"){
        vehicle = new Bike;
    }
    vehicle-> createVehicle();

    return 0;
}