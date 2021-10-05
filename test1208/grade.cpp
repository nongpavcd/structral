#include <iostream>
using namespace std;
int main(){
    int score;
    score = 0;

    cout << "SCORE : ";
    cin  >> score;
   
    if( score<50 )
    {
        cout << "F"<< endl;
    }
    else if( score<60 )
    {
        cout << "D"<< endl;
    }
    else if( score<70 )
    {
        cout << "C"<< endl;
    }
    else if( score<80 )
    {
        cout << "B"<< endl;
    }
    else if( score<=100 )
    {
        cout << "A"<< endl;
    }
    else
    {
        cout << "ERROR . . . "<< endl;
    }


        return(0);
   
}