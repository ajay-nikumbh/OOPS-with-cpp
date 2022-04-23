#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    public:
    
        HumanBeing()
        {
            cout<<"Constructor is called"<<endl;
        }
        
        ~HumanBeing()
        {
            cout<<"Destructor is called"<<endl;
        }
        
};



int main()
{
    // Constructor will be called
    HumanBeing *ajay = new HumanBeing();
    
    // Destructor will be called
    delete ajay;
    
    
    return 0;
}
