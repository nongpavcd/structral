#include <iostream>
using namespace std;
int main(){
    int i,j,sum;
    sum = 0;
    cout << "Enter number1 : ";
    cin >> i;
    cout << "Enter number2 : ";
    cin >> j;
    if(i>j){
        cout << "Require number1 > number2 ";
        return(0);
    }
    for(i;i<=j;i++){
        if((i==1 || i%2 ==0 || i%3==0 ||i%5==0) && (i!=2 && i!=3 && i!=5 && i!=7)){
            sum = sum +(i * i);
        }
    }
    cout << endl;
    cout << "sum = " << sum;
    return(0);
}