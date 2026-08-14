#include <iostream>
using namespace std;
class book{
    int id;
    char title[100];
    char author[100];
    int price;
    public:
    void input(){
        cout << "enter the ID: " << endl;
        cin >> id;
        cout << "enter the title: " << endl;
        cin >> title;
        cout << "enter the author name: " << endl;
        cin >> author;
        cout << "enter the price: " << endl;
        cin >> price;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "TITLE: " << title << endl;
        cout << "AUTHOR: " << author << endl;
        cout << "PRICE: " << price << endl;
    }
};
int main(){
    book* a1 = new book();
    cout << "enter details of the book: " << endl;
    a1->input();
    a1->display();
    delete a1;
    a1 = nullptr;
    return 0;
}