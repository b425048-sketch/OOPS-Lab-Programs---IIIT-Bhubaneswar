#include <iostream>
using namespace std;

class Diary{
    private:
        string OwnerName;
        int entries;
        int dd,mm,yyyy;

    public:
        void accept(){
            cin >> OwnerName;
            cin >> entries;
            cin >> dd;
            cin >> mm;
            cin >> yyyy;
        }

        void friend display(Diary);
};

void display(Diary d){
    cout << "Owner Name: " << d.OwnerName<<endl;
    cout << "No. of Entries: " << d.entries<<endl;
    cout << "Last Entry: " << d.dd <<"-"<< d.mm <<"-"<< d.yyyy << endl;;

}
int main(){
    Diary ds;
    ds.accept();
    display(ds);
}