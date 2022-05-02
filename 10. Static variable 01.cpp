#include <iostream>
using namespace std;

void display();

int main() 
{
    display();
    display();
    display();
    display();
    
}

void display()
{
    // Static var counter val will be stored into the heap 
    // Note: If we remove the static keyword then no val of cnt will be retained
    
    static int counter=0;
    cout<<"Display function called-> "<<++counter<<" times"<<endl;
}
