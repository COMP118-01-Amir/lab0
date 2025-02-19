    // this file is lab 0 class work
    // Author: Amir Gadzhiev.
    // Date: 17.02.2025

    #include <iostream>
    using namespace std;
    #include <cmath>

    double sumTwoNumbers(double num1, double num2) {
        double sum = num1 + num2;

        return sum;
    }
    double areaOfCircle( double radius) {
        double pi = 3.14;
        double area = pi * pow(radius, 2);
        return area;
    }

    double circumferenceOfCircle(double radius) {
        double pi = 3.14;
        double circumference = pi * 2 * radius;
        return circumference;
    }

    double priceIncludingVAT(double price, int vat) {
        double priceWithVAT = price + (price * vat/100);
        return priceWithVAT;
    }

    int main() {
        double num1, num2,radius, price;
        int vat, choice;

        do {
            cout << "1) Sum two numbers" << endl;
            cout << "2) Calculate area of a circle" << endl;
            cout << "3) Calculate circumference of a circle" << endl;
            cout << "4) Calculate price with VAT" << endl;
            cout << "5) Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter 2 values: ";
                    cin >> num1 >> num2;
                    cout << "Sum is: " << sumTwoNumbers(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Enter teh radius: ";
                    cin >> radius;
                    cout << "Area is: " << areaOfCircle(radius) << endl;
                    break;
                case 3:
                    cout << "Enter the radius: ";
                    cin >> radius;
                    cout << "Circumference: " << circumferenceOfCircle(radius) << endl;
                    break;
                case 4:
                    cout << "Enter the VAT: ";
                    cin >> vat;
                cout << "Enter the price: ";
                cin >> price;
                    cout << "Price with VAT is: " << priceIncludingVAT(price, vat) << endl;
                    break;
                case 5:
                    break;
            default:
                cerr << "Wrong choice!";
            }


        } while (choice != 5);

        cout << "Have a nice day!";

        return 0;
    }
