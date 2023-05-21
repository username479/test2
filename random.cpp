#include <iostream>
using namespace std;
int main() {
    float height, weight;
    char gender;
    int choice;
    int count=1;
    cout << "*************BMI CALCULATOR**************\n";
    cout << "Choose: \n1. One time \n2. Given no. of time \n3. Unlimited";
    cin >> choice;
     int n=1;
    if (choice ==2){
        cout <<"Enter number of people: ";
        cin >> n;
    }
   do{
    if (choice ==3 && count !=1){
        char exit;
        cout <<"Enter \'q\' to quit or enter any other symbol to continue:";
        cin >> exit;
        if (exit =='q'){

	    return 0;
        }
    }

    cout << "Enter \"m\" for male and \"f\" for female:";
    cin >> gender;
    cout << "Enter your weight in kilograms:";
    cin >> weight;
    cout << "Enter your height in meters:";
    cin >> height;
    float BMI;
    BMI = weight / (height * height);
    cout << "Your BMI is " << BMI << endl;

    float lowerLimit = 18;
    float upperLimit = 23;

    if (gender == 'm') {
        lowerLimit = 20;
        upperLimit = 25;
    }

        if (BMI < lowerLimit) {
            cout << "You are underweight.\n";
        }
        else if (BMI > upperLimit) {
            cout << "You are overweight.\n";
        }
        else {
            cout << "You are in the normal range.\n";
        }
    cout << "***************************************";
    count++;
    if (choice==1){
        break;
    }
    if (choice ==3){
        count =0;
    }
    } while (count<=n);
    return 0;
}

