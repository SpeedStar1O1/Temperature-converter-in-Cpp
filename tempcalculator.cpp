#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float temp, temp1;
    char choice;

    cout << "Enter your Choice: ";
    cin >> choice;
    cout << "Enter Temperature: ";
    cin >> temp;

    if(choice == 'f' || choice == 'F'){
        temp1 = 0.56 * (temp - 32);
        cout << "Temperature in Celcius is: " << temp1 << "\n";
    } else if(choice == 'c' || choice == 'C') {
        temp1 = 1.8 * (temp + 32);
        cout << "Temperature in Faherheit is: " << temp1 << "\n";
    } else {
        cout << "Invalid Choice.";
    }
}