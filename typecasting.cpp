//Write program that use typecasting to convert int to float and float to int 
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 15.7;
    // Convert int into float 
    float x = (float)a;
    cout<<"Int-Value: "<< a << endl;
    cout<<"Float-Value: "<< x << endl;
    // Convert float into int 
    int y = (int)b;
    cout<<"Float-Value:" << b << endl;
    cout<<"Int-Value: " <<y << endl;
    return 0;
}