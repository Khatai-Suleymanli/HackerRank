#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int Difference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = Difference; 
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a>>b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
