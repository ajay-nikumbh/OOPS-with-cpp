#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    public:
    
    // Declare a name
    string name;
    
    // Declare a method
    void display()
    {
        cout<<"Hie i am "<<name<<endl;
        
    }
};

int main()
{
    // Create a object in main class
    HumanBeing first;
    
    // Assign a value to the name var
    first.name= "Ajay Nikumbh";
    first.display();

    cout<<endl;
    
    // Create a 2 object
    HumanBeing two;
    two.name= "Anjali";
    two.display();
    
    return 0;
}
