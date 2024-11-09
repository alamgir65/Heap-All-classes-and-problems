#include <iostream>
#include <vector>
#include <numeric>

const int MOD = 998244353;

// Function to perform modular exponentiation
long long mod_inv(long long x, long long mod) {
    long long result = 1;
    long long base = x;
    long long exp = mod - 2; // Fermat's Little Theorem for modular inverse
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate expected apple weights for each K from 1 to N
std::vector<long long> expected_apple_weights(int N, const std::vector<int>& red_weights, const std::vector<int>& green_weights) {
    // Calculate the total sum of weights
    long long total_weight_sum = 0;
    for (int i = 0; i < N; ++i) {
        total_weight_sum += red_weights[i] + green_weights[i];
        total_weight_sum %= MOD;
    }

    // Calculate Q and its modular inverse
    long long Q = 2 * N;
    long long Q_inv = mod_inv(Q, MOD);

    // Calculate results for each K from 1 to N
    std::vector<long long> results;
    for (int K = 1; K <= N; ++K) {
        long long P = K * total_weight_sum % MOD;
        long long expected_value_mod = (P * Q_inv) % MOD;
        results.push_back(expected_value_mod);
    }

    return results;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> red_weights(N), green_weights(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> red_weights[i];
    }
    for (int i = 0; i < N; ++i) {
        std::cin >> green_weights[i];
    }

    // Calculate the expected weights
    std::vector<long long> results = expected_apple_weights(N, red_weights, green_weights);

    // Output the results
    for (size_t i = 0; i < results.size(); ++i) {
        if (i > 0) std::cout << " ";
        std::cout << results[i];
    }
    std::cout << std::endl;

    return 0;
}
