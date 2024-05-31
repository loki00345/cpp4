#include <iostream>
using namespace std;

int main()
{
    cout << "Numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to 100: " << sum << endl;

    cout << "Even numbers from 2 to 20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;
    cout << "Multiplication table for " << num << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

  
    int sum_of_squares = 0;
    for (int i = 1; i <= 5; ++i) {
        sum_of_squares += i * i;
    }
    cout << "Sum of squares from 1 to 5: " << sum_of_squares << endl;

    
    int factorial = 1;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num << ": " << factorial << endl;


    int prime_sum = 0;
    for (int i = 2; i <= 50; ++i) {
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            prime_sum += i;
        }
    }
    cout << "Sum of prime numbers from 1 to 50: " << prime_sum << endl;

 
    int n1 = 0, n2 = 1, nextTerm;
    cout << "Enter a number to display fibonaci series: ";
    cin >> num;
    cout << "Fibonaci series up to " << num << ":" << endl;
    for (int i = 1; i <= num; ++i) {
        cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;

   
    bool is_prime = true;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime && num > 1) {
        cout << num << " is a prime number." << endl;
    }
    else {
        cout << num << " is not a prime number." << endl;
    }

  
    cout << "Numbers from 10 to 1 in reverse order:" << endl;
    for (int i = 10; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    n1 = 0, n2 = 1, sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += n1;
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    cout << "Sum of first 10 Fibonacci numbers: " << sum << endl;

  
    string word = "Hello";
    cout << "Letters in the word 'Hello':" << endl;
    for (char letter : word) {
        cout << letter << " ";
    }
    cout << endl;

    int divisible_sum = 0;
    for (int i = 1; i <= 50; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            divisible_sum += i;
        }
    }
    cout << "Sum of numbers from 1 to 50 divisible by 3 or 5: " << divisible_sum << endl;


    cout << "Even letters in the word 'HELLO':" << endl;
    for (int i = 0; i < word.length(); ++i) {
        if (i % 2 == 0) {
            cout << word[i] << " ";
        }
    }
    cout << endl;

  
    sum_of_squares = 0;
    for (int i = 2; i <= 20; i += 2) {
        sum_of_squares += i * i;
    }
    cout << sum_of_squares<<endl;
    {
        string password = "4";
        string input;

        cout << "Enter the password: ";
        cin >> input;

        while (input != password) {
            cout << "Incorrect password. Try again: ";
            cin >> input;
        }

        cout << "Correct password entered. Access granted." << endl;

        
    }
    {
        int sum = 0;
        int num = 2; // Початкове парне число

        while (num <= 50) {
            sum += num;
            num += 2; // Переходимо до наступного парного числа
        }

        cout << "Sum of even numbers from 1 to 50: " << sum << endl;

        
    }
    {
        int number;
        int count = 0;

        cout << "Enter a number: ";
        cin >> number;

        while (number != 0) {
            number /= 10;
            ++count;
        }

        cout << "Number of digits: " << count << endl;

        
    }
    {
        int number;

        cout << "Enter a number: ";
        cin >> number;

        cout << "Divisors of " << number << ": ";
        for (int i = 1; i <= number; ++i) {
            if (number % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;

    }
    {
        int number;
        int sum = 0;

        cout << "Enter numbers (enter 0 to finish): ";

        while (true) {
            cin >> number;
            if (number == 0) {
                break;
            }
            sum += number;
        }

        cout << "Sum of the numbers: " << sum << endl;

    }
    {
        int number, reversedNumber = 0, origNumber, remainder;

        cout << "Enter an integer: ";
        cin >> number;

        origNumber = number;

        while (number != 0) {
            remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        if (origNumber == reversedNumber) {
            cout << origNumber << " is a palindrome." << endl;
        }
        else {
            cout << origNumber << " is not a palindrome." << endl;
        }


    }
    {
        int num;
        int sum = 0;
        int count = 0;
        double average;

        cout << "Enter numbers (enter a negative number to finish): ";

        while (true) {
            cin >> num;
            if (num < 0) {
                break;
            }
            sum += num;
            count++;
        }

        if (count != 0) {
            average = static_cast<double>(sum) / count;
            cout << "Average of the entered numbers: " << average << endl;
        }
        else {
            cout << "No numbers were entered." << endl;
        }
    }
    {
        srand(time(0));

        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Guess the Number game!" << endl;

        while (true) {
            cout << "Enter your guess (1-100): ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
                break;
            }
            else if (guess < secretNumber) {
                cout << "Too low. Try again." << endl;
            }
            else {
                cout << "Too high. Try again." << endl;
            }
        }


    }
    {
        int factorial = 1;
        int sum = 0;

        for (int i = 1; i <= 10; ++i) {
            factorial *= i;
            sum += factorial;
        }

        cout << "Sum of factorials from 1 to 10: " << sum << endl;


    }
    {
        int number;

        cout << "Enter a number: ";
        cin >> number;

        cout << "Digits in reverse order: ";
        while (number != 0) {
            cout << number % 10 << " ";
            number /= 10;
        }
        cout << endl;
    }
}