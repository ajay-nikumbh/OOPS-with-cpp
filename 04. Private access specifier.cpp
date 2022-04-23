#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{

    // Declare the private data members
    private:
        int age;
    
    // Declare the public methods 
    public:
        // display_age method
        void display_age()
        {
            cout<<"Age as follows->"<<age<<endl;
        }
        
        // set_age method
        void set_age(int val)
        {
            age= val;
        }
    
    
};



int main()
{
    HumanBeing ajay;
    ajay.set_age(24);
    ajay.display_age();
    return 0;
}
