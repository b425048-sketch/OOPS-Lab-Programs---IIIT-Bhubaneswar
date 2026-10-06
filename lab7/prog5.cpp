#include <iostream>
using namespace std;

class Academic {
public:
    int m, p, ch;
    Academic(int a, int b, int c) {
        m = a;
        p = b;
        ch = c;
    }
};

class Sports {
public:
    int spmarks;
    Sports(int a) {
        spmarks = a;
    }
};

class StudentResult : public Sports, public Academic {
public:
    int Total;
    int avg;

    StudentResult(int m_marks, int p_marks, int ch_marks, int sp_marks) 
        : Sports(sp_marks), Academic(m_marks, p_marks, ch_marks) {
        
        Total = m + p + ch + spmarks;
        avg = Total / 4;
    }

    void display() {
        cout << "Total Marks: " << Total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    StudentResult st1(90, 91, 92, 91);
    st1.display();

    return 0;
}
