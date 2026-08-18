#include <iostream>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passenger;
    bool booked;

public:
    TrainSeat() {
        cin >> seatNumber;
        cin >> passenger;
        cin >> booked;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void checkSeat(TrainSeat t) {
        cout << "Seat Number: " << t.seatNumber << endl;

        if (t.booked) {
            cout << "Seat Booked" << endl;
            cout << "Passenger: " << t.passenger << endl;
        }
        else {
            cout << "Seat Available" << endl;
        }
    }
};

int main() {
    TrainSeat t;

    TicketChecker checker;
    checker.checkSeat(t);

    return 0;
}