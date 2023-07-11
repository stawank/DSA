#include"VehicleFactory.hpp"
#include<iostream>

using namespace std;


int main(){

    string vehicleType;
    cin>>vehicleType;
    Vehicle* vehicle;
    vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();
}