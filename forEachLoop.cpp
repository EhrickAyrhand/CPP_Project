#include <iostream>
using namespace std;

int main() {

    // foreach loop = loop that eases the transversal over an iterable data set

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for(string student : students){
        cout << student << '\n';
    }

    return 0;
}
