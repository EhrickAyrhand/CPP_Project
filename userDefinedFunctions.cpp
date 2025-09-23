#include <iostream>
using namespace std;

void happyBirthday(string name, int age);

int main(){

    // function = a block of reusable code

    string name = "Bro";
    int age = 20;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(string name, int age){
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday dear " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "You are " << age << " year old" << '\n';
}