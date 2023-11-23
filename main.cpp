#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    // Input values
    double a, b, c, x;
    std::cout << "Enter values for a, b, c, and x: ";
    std::cin >> a >> b >> c >> x;

    // Open a file for writing
    std::ofstream outputFile("results.txt");

    // Check the condition a^2 + 7b^3 > 42c
    if (a * a + 7 * b * b * b > 42 * c) {
        // Calculate the expression 2x^2 + ab^3 + bc^2 / (2a + c^2 + b)
        double numerator = 2 * x * x + a * b * b * b + b * c * c;
        double denominator = 2 * a + c * c + b;

        // Avoid division by zero
        if (denominator != 0) {
            double result = numerator / denominator;

            // Write the result to the file
            outputFile << "Result: " << result << "\n";

            // Calculate the expression 3abx + 7bax^2 + c^3
            double additionalExpression = 3 * a * b * x + 7 * b * a * x * x + c * c * c;

            // Write the additional expression result to the file
            outputFile << "Additional Expression Result: " << additionalExpression << "\n";
        } else {
            // Write an error message to the file if division by zero occurs
            outputFile << "Error: Division by zero.\n";
        }
    } else {
        // Write a message to the file if the condition is not satisfied
        outputFile << "Condition a^2 + 7b^3 > 42c not satisfied.\n";
    }

    // Close the file
    outputFile.close();

    std::cout << "Results have been written to 'results.txt'.\n";

    return 0;
}
