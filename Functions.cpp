#include <iostream>
#include <cstdio>
using namespace std;


int greatest;

// Created functions which will return the greatest number
int max_of_four(int a, int b, int c, int d)// Function variables
{
    if (a > b && a > c && a > d)
    {
        greatest = a;
    }
    else if (b > a && b > c && b > d)
    {
        greatest = b;
    }
    else if (c > a && c > b && c > d)
    {
        greatest = c;
    }
    else
    {
        greatest = d;
    }

    return greatest;
}


int main()
{
    // Variables
    int x, y, z, e;

    //Input
    cin >> x >> y >> z >> e;

    // Assigning the greatest number to a new variable called answer
    int answer = max_of_four(x, y, z, e);

    //printed the answer
    cout << answer << "\n";
    return 0;

}

