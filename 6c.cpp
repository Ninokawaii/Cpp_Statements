#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string str;    
    
    do
    {        
        cout << "Enter text: ";        
        cin >> str;        
        cout << "You entered: " << str << '\n';    
    }
    while 
    (str != "goodbye");
    
}