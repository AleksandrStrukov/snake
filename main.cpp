#include <iostream>
using namespace std;
int main()
{
    float juk1, juk2, res;
    cout << "Enter juk1" << std::endl;
   cin >> juk1;
    cout << "Enter juk2" << std::endl;
    cin >> juk2;

// +,-,*,/
    char math;
    cout << "Enter math" << std::endl;
    cin >> math;

    // if (math == '+') {
    //     res = juk1+juk2;
    // }
    // else if(math == '-') {
    //     res = juk1-juk2;
    // }
    // else if(math == '*') {
    //     res = juk1*juk2;
    // }
    // else if(math == '/') {
    //     res = juk1/juk2;
    // }
    switch (math) {
        case '+': res = juk1 + juk2;break;
        case '-': res = juk1 - juk2;break;
        case '*': res = juk1 * juk2;break;
        case '/': res = juk1 / juk2;break;
        default:
            res=0;
        cout << "Invalid input" << std::endl; break;
    }
    std::cout << res << std::endl;
    return 0;

}
