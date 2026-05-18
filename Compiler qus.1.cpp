
#include <iostream>
#include <string> 
using namespace std;
int main() {
    char str[100];
    int i, flag = 1;

    printf("Enter input: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(!isdigit(str[i])) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Numeric Constant\n");
    else
        printf("Not Numeric\n");

    return 0;
}

