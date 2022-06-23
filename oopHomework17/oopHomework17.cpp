#include <iostream>
#include<vector>
using namespace std;
#include"Car.h"
#include"Manual.h"
#include"Automatic.h"

int main()
{
    vector<Car*>cars;
    cars.push_back(new Manual("Manual", "BMW", "X6", 2019));
    cars.push_back(new Automatic("Automatic", "BMW", "X6", 2019));
    cars.push_back(new Manual("Manual", "Mercedes", "GLA", 2020));

    for (size_t i = 0; i < cars.size(); i++)
    {
        cars[i]->print();
        cout << endl;
    }
}

