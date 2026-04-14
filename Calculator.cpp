#include <iostream>
#include <string>
using namespace std;
int main(){
    bool running = true;
while (running){
    cout <<"Enter number 1" <<endl;
double num1;
    cin >> num1;
string action;
    cout << "Enter action but if you enter quit program ends" << endl;
    cin >> action;
if (action == "quit"){
    running = false;
    break;
}
    double num2;
    cout <<"Enter number 2" <<endl;
    cin >> num2;
if (action == "+"){
    cout << num1 + num2 <<endl;
}else if (action == "-"){
    cout << num1 - num2 <<endl;
}else if (action == "*"){
    cout << num1 * num2 <<endl;
}else if (action == "/"){
    if (num2 != 0){
    cout << num1 / num2 <<endl;
    }else{
        cout << "Error: Division by zero!" << endl;
    }
}
    cout << "-----------------------" << endl;
}
cout << "Goodbye!" << endl;
cout << "Press Enter to exit..." << endl;
    cin.ignore(); 
    cin.get();

return 0;
}