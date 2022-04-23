#include <iostream>
using namespace std;

// Declare a class 
class HumanBeing
{
    private:
        string *name;
        int *age;
        
    public:
        HumanBeing(string iname , int iage)
        {
            name= new string();
            age= new int();
            
            *name= iname;
            *age= iage;
        }
        
        void display()
        {
            cout<<"Hie I am "<<name<<"My age is "<<age<<endl;
            
        }
        
        ~HumanBeing()
        {
            delete name;
            delete age;
            cout<<"All memories are deleted"<<endl;
        }
    
        
};



int main()
{
    // Constructor will be called
    HumanBeing *ajay = new HumanBeing("Ajay", 24);
    ajay->display();
    
    // Desctructor will be called
    delete ajay;
    
    
    return 0;
}
