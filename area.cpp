#include<iostream>
using namespace std;
int main()
{
    double len,wid,area;
    cout<<"Enter Length of rectangle:";
    cin>>len;
    cout<<"Enter Width of rectangle:";
    cin>>wid;
    area=len*wid;
    cout<<"Area of rectangle is "<<area <<endl;
    if(area > 100)
    cout<<"Area is greater than 100";
else 
    cout<<"Area is not greater than 100";
    return 0;
}