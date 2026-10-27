#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Compressing file" << endl;
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original size: " << fileSize << endl;
        cout << "Compressed size: " << fileSize * 0.4 << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original size: " << fileSize << endl;
        cout << "Compressed size: " << fileSize * 0.7 << endl;
    }
};

int main() {
    double size;
    cout << "Enter file size: ";
    cin >> size;

    TextCompressor t;
    ImageCompressor i;

    cout << "\nText File:" << endl;
    t.compress(size);

    cout << "\nImage File:" << endl;
    i.compress(size);

    return 0;
}