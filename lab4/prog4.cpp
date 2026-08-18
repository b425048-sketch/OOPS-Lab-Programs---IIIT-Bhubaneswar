#include <iostream>
using namespace std;

class Song{
    private:
        string SongName;
        string ArtistName;
        int Duration;

    public:
        void accept(){
            cin >> SongName;
            cin >> ArtistName;
            cout << "Enter Duration in Seconds" << endl;
            cin >> Duration;
        }

        void friend CheckOccupanyStatus(Song , Song);
};

void CheckOccupanyStatus(Song d, Song f){
    if(d.Duration > f.Duration){
        cout << d.SongName << "has greater Duration";
    }
    else if(d.Duration < f.Duration){
        cout << f.SongName << "has greater Duration";
    }
    else{
        cout << "Both have the Same Duration";
    }
}
int main(){
    Song ds;
    Song fs;
    fs.accept();
    ds.accept();
    CheckOccupanyStatus(ds,fs);
}