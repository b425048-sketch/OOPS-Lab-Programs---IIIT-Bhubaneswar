#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning threats" << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: " << threats << endl;
        cout << "Threats remaining after removal: "
             << int(threats * 0.1) << endl;
    }
};

int main() {
    int threats;
    cout << "Enter number of threats: ";
    cin >> threats;

    BasicScanner b;
    AdvancedScanner a;

    b.scan(threats);
    a.scan(threats);

    return 0;
}