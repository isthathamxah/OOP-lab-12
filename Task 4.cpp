#include <iostream>
using namespace std;

class Power {
protected:
    double number;

public:
    virtual void getdata() {
        cout << "Enter a number: ";
        cin >> number;
    }
    virtual double result() = 0;
    virtual ~Power() {}
};


class Square : public Power {
public:
    double result() override {
        return number * number; 
    }
};
class Cube : public Power {
public:
    double result() override {
        return number * number * number; 
    }
};
class Four : public Power {
public:
    double result() override {
        return number * number * number * number; 
    }
};
class Five : public Power {
public:
    double result() override {
        return number * number * number * number * number; 
    }
};
void calculatePower(Power* powerObj, int choice) {
    powerObj->getdata(); 
    double result = powerObj->result(); 
    cout << "Result: " << result << endl;
}

int main() {
    int choice;
    Power* powerObj = nullptr;

    cout << "Choose the power to calculate:\n";
    cout << "1. X^2\n";
    cout << "2. X^3\n";
    cout << "3. X^4\n";
    cout << "4. X^5\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        powerObj = new Square();
        break;
    case 2:
        powerObj = new Cube();
        break;
    case 3:
        powerObj = new Four();
        break;
    case 4:
        powerObj = new Five();
        break;
    default:
        cout << "Invalid choice! Please choose 1, 2, 3, or 4." << endl;
        return 0;
    }
    calculatePower(powerObj, choice);
    delete powerObj;

    return 0;
}
