#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    public:
    
    // Declare a name
    string name;
    
    // Declare a method
    void introduce()
    {
        cout<<"Hie i am "<<name<<endl;
        
    }
};

int main()
{
    // Create a object in main class 
    // This object will be stored in the stack
    HumanBeing ajay;
    
    // Assign a value to the name var
    ajay.name= "Ajay Nikumbh";
    ajay.introduce();

    cout<<endl;
    
    // Create a 2nd object
    // This object will be stored in the heap memory
    // Use the arrow operator to access the members and methods
    HumanBeing *vijay = new HumanBeing();
    vijay->name= "Vijay Shekar";
    vijay->introduce();
    
    return 0;
}
