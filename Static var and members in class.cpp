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

    void human_total()
    {
        cout<<endl;
        cout<<"There are-> "<<human_count<<" people are in this program ";
    }
};

int Human:: human_count=0;

int main() 
{
    Human c;
    Human k;
    Human ajay;
    // 3 objects will be created

    cout<<"Initial Value of class static variavble-> "<<Human:: human_count<<endl;

    c.human_total();
    cout<<c.human_count<<endl;

}

