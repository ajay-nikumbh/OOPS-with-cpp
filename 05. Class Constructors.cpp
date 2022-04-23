#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    private:
        string name;
        int age;
        
    public:
        // Create the constructor
        HumanBeing()
        {
            name= "No_name";
            age= 24;
            cout<<"Const is called when the object is created"<<endl;
            
        }
        
        void display()
        {
            cout<<name<<endl ;
            cout<<age<<endl;

        }
};



int main()
{
    HumanBeing ajay;
    ajay.display();
    return 0;
}
