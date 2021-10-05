/*  Program 4_3 : Use nested if-else statement */
#include <iostream>
#include <string>
using namespace std;
int main(){
    char font;
    cout << "\nEnter a character : ";
    cin >> font;
    cout << endl;
  
    if(font >= '0'&& font <= '9')
    {
        cout <<" YES.";
        }
    else
    {
       cout <<" N O."; 
    }
    return(0);
}