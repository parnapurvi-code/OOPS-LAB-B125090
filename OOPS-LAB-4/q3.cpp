#include <iostream>
using namespace std;
class Camera{
    string brand;
    string model;
    float megapixels;
    int storagecapacity;
    public:
    Camera(string b, string m, float mp, int storage){
        brand = b;
        model = m;
        megapixels = mp;
        storagecapacity = storage;
    }
    friend void compareCamera(Camera c1, Camera c2);
};
void compareCamera(Camera c1, Camera c2){
    Camera better = c1;
    if (c2.megapixels > c1.megapixels){
        better = c2;
    }
    else if (c2.megapixels == c1.megapixels && c2.storagecapacity > c1.storagecapacity){
        better = c2;
    }
    cout << better.brand << endl << better.model << endl << better.megapixels << endl << better.storagecapacity << endl;
}
int main(){
    Camera c1("Canon", "EOS 200D", 24, 128);
    Camera c2("sony", "Alpha A6400", 24, 256);
    compareCamera(c1, c2);
    return 0;
}