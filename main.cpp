#include <iostream>
#include <thread>
#include <cmath>
#include <string>
using namespace std;

float calculateBodyMassIndex(float height, float weight) {
    return weight / pow(height, 2);
}

string getBodyMassIndexCategory(float bodyMassIndex) {
    if (bodyMassIndex < 18.4) {
        return "Underweight";
    } else if (bodyMassIndex <= 24.9) {
        return "Normal";
    } else if (bodyMassIndex <= 39.9) {
        return "Overweight";
    } else {
        return "Obese";
    }
};

void printVariables(string firstName, string lastName, int age, float height, float weight) {
    float bodyMassIndex = calculateBodyMassIndex(height, weight);
    string bodyMassIndexCategory = getBodyMassIndexCategory(bodyMassIndex);

    cout << "Here are your results!" << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << "m" << endl;
    cout << "Weight: " << weight << "kg" << endl;
    cout << "Body Mass Index (BMI): " << bodyMassIndex << endl;
    cout << "BMI Category: " << bodyMassIndexCategory << endl;
}

int main() {
    string firstName, lastName;
    int age;
    float height, weight;

    cout << "Welcome to the BMI Calculator!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "This simple program aims to calculate your body mass index based on the information you give us.";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Before we begin, please enter your information when prompted."  << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "First Name: ";
    cin >> firstName; 
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Age: ";
    cin >> age;
    cout << "Height (in meters): ";
    cin >> height;
    cout << "Weight (in kilograms): ";
    cin >> weight;
    cout << "Calculating..." << endl << endl;
    this_thread::sleep_for(chrono::seconds(2));

    printVariables(firstName, lastName, age, height, weight);
    return 0;
};