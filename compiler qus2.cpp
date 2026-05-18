#include <iostream>

using namespace std;

int main() {
    char ch;

    printf("Enter an operator: ");
    scanf("%c", &ch);

    if(ch == '+' || ch == '-' || ch == '*' ||
       ch == '/' || ch == '%' || ch == '=') {
        printf("It is an Operator\n");
    }
    else {
        printf("Not an Operator\n");
    }

    return 0;
}
