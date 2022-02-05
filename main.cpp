#include <iostream>
using namespace std;

int main() {
    int range; // defining our variable for the upper value
    int COUNT_PAIRS = 0; // counts the prime pairs found by the program (default at 0)
    int is_prime = 1;

    cout << "Welcome to the twin prime numbers program\n"; // greeting
    cout << "What is the upper value?\n";
    cin >> range; // allows you to input the upper value

    while (range <= 0) {
        // if the range is less than or = to 0, the program will keep looping
        //until you input a valid integer.
        cout << "must be an integer > 0\n";
        cin >> range;
    }

    for (int count = 2; count <= range; count++){
        for (int i = 1; i <= count; i++){
        // count is what we are using to run through the program and find prime numbers
        // so this is saying (starting at 2) when count is less than or = to the range
        // count will increment by 1 each time the loop happens.
        if ((count % i == 0) || (count + 2 % i == 0)) {
            is_prime = 0; break;}
        }

        if (is_prime == 1) {
            // this is using the is_prime function that was established prior and saying
            //if both the number being evaluated is true (aka a prime number) and the
            //same number + 2 is true (also prime) then print it in an ordered pair
            cout << "(" << count << "," << (count + 2) << ")" << "\n";
            //this makes sure to print the function in an ordered pair.
            COUNT_PAIRS++; // our counter will increase by 1 for each
            //time the loop goes through
        }
    }

    cout << "\n" << COUNT_PAIRS << " prime pairs found"; // states the number of
    //prime pairs found at the end of the program.


    return 0;
}