#include <iostream>
using namespace std;
class Factorial {
public:
    
    virtual int calculateFactorial(int n) {
        return 1;  
    }
};

class FactorialCalculator : public Factorial {
public:

    int calculateFactorial(int n) override {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;  
        }
        return fact;
    }
};
int main() {
    int n;
    cout << "Enter a number to calculate Factorial : ";
    cin >> n;
    Factorial* F = new FactorialCalculator();
    int result = F->calculateFactorial(n);
    cout << "Factorial of " << n<< " is: " << result << endl;
    return 0;
}
