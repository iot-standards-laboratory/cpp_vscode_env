#include <iostream>
#include "PrintHello.h"

using namespace std;
int main(void)
{
    int a = 10;
    a = 20;
    int b = 30;
    b = 40;
    cout<<"Hello world!!"<<endl;

    auto hello = new PrintHello();
    hello->print();

    return 0;
}