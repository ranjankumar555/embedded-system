#include <iostream>
using namespace std;

int main() {
    int a = 10;

// Declaring lvalue reference
const int& lref = a;

// Declaring rvalue reference
int&& rref = 20;
 cout<<lref<<endl;
 cout<<rref<<endl;

    return 0;
}
