#include <iostream>
#include <string>

using namespace std;

int main()
{
    // variables
    int n;

    // get input
    cin >> n;

    // create array and contain writing form of numbers
    string int_list[]{ "one","two","three","four","five","six","seven","eight","nine", };

    // if else statement to solve the challenge
    if (n > 9) 
    {
        cout << "Greater than 9" << "\n";

    }
    else
    {
        cout << int_list[n - 1] << "\n";
    }
}
