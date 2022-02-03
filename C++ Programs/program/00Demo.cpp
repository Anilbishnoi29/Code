#include<iostream>
using namespace std;
class t {
private:
    int x;
public:
    t();
    void show();
    ~t() {
        cout << "destructr";
    };
    t::t() {
        cout << "constructor is called" << endl;
        x = 0;
    }
    void t::show() {
        cout << x;
    };
};
t a;
int x;
void check() {
    cout << "check is called" << endl;
    t b;
}
int main() {
    t obj();
    cout << "Working here" << endl;
    check();
    return 0;
}