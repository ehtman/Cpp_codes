/*Write a program that display the properties of car using int, char and float data type*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string brand = "Toyota";
    string model = "Camry";
    string color = "Black";
    int year = 2022;
    int speed = 120;
    float mileage = 15.8;
    float fuellevel = 75.2;
    char transmission = 'A'; // 'A' for Automatic
    char fuelType = 'P'; // 'P' for Petrol
    cout<<"Car Properties:"<<endl;
    cout<<"Brand: " << brand<< endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Speed: "<<speed<< "km/h" <<endl;
    cout<<"Mileage: "<<mileage<< "km/l" <<endl;
    cout<<"FuelLevel: "<<fuellevel<< "%" <<endl;
    cout<<"Transmission: "<<transmission<<endl;
    cout<<"Fueltype: "<<fuelType<<endl;
    return 0;
}