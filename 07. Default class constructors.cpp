#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    private:
        string name;
        int age;
        
    public:
        
        // Overloaded constructor
        HumanBeing(string s="no_name", int ag= 0)
        {
            cout<<"Integer overloaded consturctor"<<endl;
            name= s;
            age= ag;
        }
        
        void speak_up()
        {
            cout<<name<<endl <<age<<endl;
            
        }
        
        
};



int main()
{
    
    HumanBeing ajay("ajay", 24); // String consturctor
    ajay.speak_up();
    
    
    return 0;
}
