#include<iostream>
#include"VehicleFactory.hpp"
#include "Car.hpp"
#include "Bike.hpp"

Vehicle* VehicleFactory::getVehicle(string vehicleType){
    Vehicle* vehicle; 
    if(vehicleType=="Car"){
        vehicle = new Car;
    }
    else if (vehicleType == "Bike"){
        vehicle = new Bike;
    }
    return vehicle;
}