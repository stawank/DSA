#pragma once
#include<iostream>
using namespace std;
#include"Vehicle.hpp"

class VehicleFactory{
    public:
    static Vehicle* getVehicle(string vehicleType);
};