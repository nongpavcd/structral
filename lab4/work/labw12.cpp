/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main(){

    int num;
    cout << "input num : ";
    cin >> num ;


    if(num >= 1 )
    {
        cout << "Num is positive" <<endl;
    }else if(num == 0 )
    {
        cout << "Num is Zero" <<endl;
    }else
    {
        cout << "Num is negative" <<endl;
    }
    return(0);
}