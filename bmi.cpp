#include<iostream>
using namespace std;
int main(){
    // BMI Calculator
    // Underweight < 18.5
    // Normal Weight 18.5 - 24.9
    // Overweight > 25


    double height, weight, bmi;
    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "You are underweight" << endl;
    else if (bmi > 25)
        cout << "You are overweight" << endl;
    else 
        cout << "You have normal weight" << endl;
    
    return 0;
}