/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Please enter a simple expression ";
    cout << "(number operator number) : ";
    int LeftOperand, RightOperand;
    LeftOperand=0;
    RightOperand=0;
    
    char Operator ;
    cin >> LeftOperand >> Operator >> RightOperand;
    int Result;
   if(Operator == '+')
   {
        Result = LeftOperand + RightOperand;
   }else if(Operator == '-')
   {
        Result = LeftOperand - RightOperand;
   }else if(Operator == '*')
   {
       Result = LeftOperand * RightOperand;
   }else if(Operator == '/')
   {
       Result = LeftOperand / RightOperand;
   }else
   {
       cout << "ERROR";
   }
        cout << LeftOperand << "  "<< Operator << "  ";
        cout << RightOperand << " equals "<< Result << endl;
        return(0);
}