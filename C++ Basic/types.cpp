#include<iostream>
using namespace std;
int main(){
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)
    cout <<" Integer" <<myNum<<endl;
    cout << "Size of Integer "<<sizeof(myNum);
    cout <<"\n Floating numbers"<<myFloatNum;
    cout << "Size of Float "<<sizeof(myFloatNum);
    cout << "\nCharacter "<<myLetter;
    cout << "Size of Character "<<sizeof(myLetter);
    cout << "\n String" <<myText;
    cout << "Size of String "<<sizeof(myText);
    cout <<"\n Boolean " <<myBoolean;
    cout << "Size of Boolean "<<sizeof(myBoolean);
    return 0;
}