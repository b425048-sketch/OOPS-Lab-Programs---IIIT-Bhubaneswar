#include <iostream>
using namespace std;

class Player {
private:
    string PlayerName;
    int Health;
    int Score;
    int Level;

public:
    Player() {
        cin >> PlayerName;
        cin >> Health;
        cin >> Score;
        cin >> Level;
    }

    friend class GameManager;
};

class GameManager {
public:
    void display(Player d) {
        cout << d.PlayerName << endl;
        cout << d.Score << endl;
        cout << d.Health << endl;
        cout << d.Level << endl;
    }

    void Check(Player ds){
        if(ds.Health > 0){
            cout << "The Player is Alive"<<endl;

        }
        else{
            cout << "HE'S DEADDDDDD!!" << endl;
        }
    }

    void Curr(Player df){
        cout << "Current Level: "<<df.Level<<endl;
        cout << "Current Score: "<<df.Score<<endl;
    }
};

int main() {
    Player d;

    GameManager s;
    s.display(d);
    s.Check(d);
    s.Curr(d);


    return 0;
}