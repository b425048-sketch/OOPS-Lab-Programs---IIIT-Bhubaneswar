#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
        void area();
        void perimeter();
};

void Rectangle::area(){
    cout<<"\nEnter Area Details\n";
    cout<<"Enter Length.\n";
    cin>>length;
    cout<<"Enter Breadth:\n";
    cin>>breadth;
    cout<<"Area: \n"<<length*breadth;
}

void Rectangle::perimeter(){
    cout<<"Perimeter: "<<2*(length+breadth);
}

int main(){
    Rectangle s1;
    s1.area();
    s1.perimeter();

    return 0;
}