/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main(){

    cout << "1 - 12 MONTH : ";
    int month;    
    cin >> month ;

    string Result;
    switch(month) {
        case 1 : Result = "January";
            break;
        case 2 : Result = "February";
            break;
        case 3 : Result = "March";
            break;
        case 4 : Result = "April";
            break;
        case 5 : Result = "May";
            break;
        case 6 : Result = "June";
            break;
        case 7 : Result = "July";
            break;
        case 8 : Result = "August";
            break;
        case 9 : Result = "September";
            break;
        case 10: Result = "October" ;
            break;
        case 11: Result = "November";
            break;
        case 12: Result = "December";
            break;
        default:cout << " Xx_oO||~TaiSoulzaKing002InwNO.01~||Oo_xX.";
            cout << endl;
            return(1);
        }//  Display result~

    cout << Result << endl;
    return(0);
}