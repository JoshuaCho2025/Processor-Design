#include <iostream>

using namespace std;

string ask_name(){
    string name;
    cout << "What's your name?\n";
    cin >> name;
    
    return "Hello, " + name;
}
