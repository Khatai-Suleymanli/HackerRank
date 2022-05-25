#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    // Variable
    int a;
    int b;

    // Inputs
    cin >> a >> b;

    //Arrays for storing writing form of numbers
    string num_list[] = { "one","two","three","four","five","six","seven","eight","nine" };


    // For loop which is for setting the range between a and b
    for (int i = a; i <= b; ++i)
    {
        if (i > 9)   // if i is greater than 9
        {
            if (i % 2 == 0)
            {

                cout << "even\n";

            }
            else if (i % 2 == 1)
            {

                cout << "odd\n";

            };
        }
        else {
            cout << num_list[i - 1] << endl;
        }
    }
    return 0;
}


