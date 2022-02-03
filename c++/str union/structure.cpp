#include<iostream>
using namespace std;

// struct 
struct employee {
    /* data */
    int eId;
    char favChar;
    float salary;
};

// struct with ep
typedef struct users {
    /* data */
    int eId;
    char favChar;
    float salary;
} user;


int main() {
    // struct
    struct employee roj;
    roj.eId = 1;
    roj.favChar = 'R';
    roj.salary = 150000;

// struct with ep
    user joy;
    joy.eId = 1;
    joy.favChar = 'J';
    joy.salary = 450000;

    return 0;
}