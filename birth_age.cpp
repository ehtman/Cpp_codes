//Additional Task
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    int currentyear;
    cout<<"Enter your name";
    cin>>name;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter current year";
    cin>>currentyear;
    int birthyear = currentyear - age;
    cout<<"Hello "<<name<<", you are "<<age<<" years old!"<<endl;
    cout<<"You were born in "<<birthyear<<".";
    return 0;
}