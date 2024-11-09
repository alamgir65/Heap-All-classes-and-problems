#include<bits/stdc++.h>
using namespace std;
 // For gcd function

// Function to calculate the inradius squared
double calculate_inradius(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
    double r = area / s;
    return r * r;
}

// Function to simplify the fraction
void print_fraction(double result) {
    const int precision = 1000000; // Precision to avoid floating point errors
    int numerator = static_cast<int>(result * precision);
    int denominator = precision;

    int gcd_value = __gcd(numerator, denominator);
    numerator /= gcd_value;
    denominator /= gcd_value;

    std::cout << numerator << "/" << denominator << std::endl;
}

// Main function to process multiple test cases
int main() {
    int tc;
    std::cout << "Enter number of test cases: ";
    std::cin >> tc;
    while (tc--) {
        double a, b, c;
        std::cout << "Enter sides a, b, c: ";
        std::cin >> a >> b >> c;
        double result = calculate_inradius(a, b, c);
        print_fraction(result);
    }
    return 0;
}
