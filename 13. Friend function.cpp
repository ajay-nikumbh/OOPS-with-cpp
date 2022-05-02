#include <iostream>
using namespace std;

class Human
{
    string name;
    int age;

    public:
        Human(string iname, int iage)
        {
            name= iname;
            age = iage;
        }    

        void tell_me()
        {
            cout<<"Name->"<<name<<"Age->"<<age<<endl;
        }
    friend void display(Human man);
};

void display(Human man)
{
    cout<<man.name<<man.age<<endl;

}

int main() 
{
    Human ajay("Ajay", 25);
    display(ajay);
    return 0;

}

