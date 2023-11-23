#include <iostream>
#include <cmath>

int main() {
    // Assuming the expression is (a^3 + b^3 + 3cd) / (|a - b| + c^2)

    // Input values
    double a, b, c, d;
    std::cout << "Enter values for a, b, c, and d: ";
    std::cin >> a >> b >> c >> d;

    // Calculating the expression
    double numerator = pow(a, 3) + pow(b, 3) + 3 * c * d;
    double denominator = fabs(a - b) + pow(c, 2);

    // Handling division by zero
    if (denominator == 0) {
        std::cout << "Error: Division by zero.\n";
    } else {
        // Displaying the result
        double result = numerator / denominator;
        std::cout << "Result: " << result << "\n";
    }

    return 0;
}
