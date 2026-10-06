#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int basicSal;
};

class Developer: public Employee{
    public:
    int experience;
};

class SeniorDeveloper: public Developer{
    public:
    int projectBonus;
    SeniorDeveloper(string s, int bs, int ex, int pb){
        name = s;
        basicSal = bs;
        experience = ex;
        projectBonus = pb;
    }
    void display(){
        cout << name << endl;
        cout << basicSal << endl;
        cout << experience << endl;
        cout << projectBonus << endl;
    }
};

int main(){

    SeniorDeveloper sd1("Sarthak", 170000, 5, 100000);
    sd1.display();
    int finalSal = sd1.basicSal + (0.05*sd1.basicSal*sd1.experience) + sd1.projectBonus;
    cout << finalSal;
    
    return 0;
}