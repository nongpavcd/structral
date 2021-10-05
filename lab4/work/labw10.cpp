/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main(){
    int act;
    cout << "active income : ";
    cin >> act;
    int Result;

   if(act <= 100000){
        Result = act * 5 ;
   }
   else if(act <= 500000){
        Result = act * 10 ;
   }
   else if(act <= 1000000){
       Result = act * 20 ;
   }
   else if(act <= 4000000){
       Result = act * 30 ;
   }
    else{
       Result = act * 37 ;
   }
        cout << Result << endl;
        return(0);
}