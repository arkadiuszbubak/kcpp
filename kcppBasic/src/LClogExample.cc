/**
 * Example C++ Program Demonstrating std::clog Usage
 * 
 * This program generates prime numbers up to a given limit
 * and shows how to use clog for logging purposes.
 */

#include <iostream>  // For input/output streams (cout, cin, clog, cerr)
#include <string>    // For string operations
#include <vector>    // For using the vector container

using namespace std;  // Standard namespace (for brevity in example)

/**
 * Simple logging utility class
 */
class Logger {
public:
    /**
     * Logs an informational message using clog
     * @param message The message to log
     */
    static void log(const string& message) {
        // clog is buffered, suitable for non-critical logging
        clog << "[LOG] " << message << endl;
    }

    /**
     * Logs an error message using cerr
     * @param error The error message to log
     */
    static void logError(const string& error) {
        // cerr is unbuffered, better for immediate error reporting
        cerr << "[ERROR] " << error << endl;
    }
};

/**
 * Generates prime numbers up to the specified limit
 * @param limit The upper bound for prime number generation
 * @return vector<int> List of prime numbers
 */
vector<int> generatePrimes(int limit) {
    vector<int> primes;  // Will store our prime numbers
    
    // Input validation
    if (limit < 2) {
        Logger::logError("Limit must be at least 2");
        return primes;  // Return empty vector
    }

    Logger::log("Starting prime number generation up to " + to_string(limit));
    
    // Prime number generation using sieve-like approach
    for (int num = 2; num <= limit; ++num) {
        bool isPrime = true;
        // Check divisibility up to square root of num
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(num);  // Add prime to our list
        }
    }

    Logger::log("Found " + to_string(primes.size()) + " prime numbers");
    return primes;
}

/**
 * Main program entry point
 */
int main() {
    // Using clog directly for program flow tracking
    clog << "Program started" << endl;
    
    int limit;
    cout << "Enter upper limit for prime numbers: ";
    cin >> limit;
    
    // Generate primes
    vector<int> primes = generatePrimes(limit);
    
    // Output results
    cout << "\nPrime numbers up to " << limit << ":\n";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
    
    // Program completion log
    clog << "Program finished successfully" << endl;
    return 0;
}
