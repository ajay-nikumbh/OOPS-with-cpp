#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    private:
        string name;
        int age;
        
    public:
        HumanBeing()
        {
            name= "No_name";
            age= 24;
            cout<<"Const is called when the object is created"<<endl;
            
        }
        
        HumanBeing(string s)
        {
            cout<<"String constructor"<<endl;
            
        }
        
        HumanBeing(int n)
        {
            cout<<"Integer consturctor"<<endl;
        }
        
        
};



int main()
{
    HumanBeing ajay; // Default consturctor
    HumanBeing ajay("ajay"); // String consturctor
    HumanBeing ajay(1); // Integer consturctor
    
    return 0;
}
