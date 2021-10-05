#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "\n Input years : ";
    cin >> year;

    if((year % 4)==0 && (year % 100)!=0 || (year % 100)==0 && (year % 400)==0){
        cout << "Year : "<< year <<" is leap year" ;  

    }else{
        cout << "Year : "<< year <<" is not leap year ";

    }

    return(0);
}