#include <iostream>
using namespace std;

class Human
{
    public:
        static int human_count;
    
    Human()
    {
        human_count++;
    }

    static void human_total()
    {
        cout<<endl;
        cout<<"There are-> "<<human_count<<" people are in this program ";
    }
};

// Static member should be initialised outside the program
int Human:: human_count=0;

int main() 
{
    // 4 objects will be created in this program 
    // So the output will be 4
    Human bob;
    Human alex;
    Human ajay;
    Human akira;
    Human::human_total();
}

