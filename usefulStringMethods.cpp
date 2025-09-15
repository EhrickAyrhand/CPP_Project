#include <iostream>
using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);



    if(name.length() > 12){
        cout << "Your name can't be over 12 characters";
    }
    else if(name.empty()){
        cout << "You didn't enter your name";
    }
    else{
        name.append("@gmail.com");
        cout << "Welcome " << name;
    }

    return 0;
}