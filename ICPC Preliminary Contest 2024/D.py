MOD = 998244353

def mod_inv(x, mod):
    return pow(x, mod - 2, mod)

def expected_apple_weights(N, red_weights, green_weights):
    
    total_weight_sum = sum(red_weights) + sum(green_weights)
    
    Q = 2 * N
    Q_inv = mod_inv(Q, MOD)
    
    results = []
    for K in range(1, N + 1):
        P = K * total_weight_sum
        expected_value_mod = (P * Q_inv) % MOD
        results.append(expected_value_mod)
    
    return results

N = int(input().strip())
red_weights = list(map(int, input().strip().split()))
green_weights = list(map(int, input().strip().split()))

results = expected_apple_weights(N, red_weights, green_weights)
print(" ".join(map(str, results)))