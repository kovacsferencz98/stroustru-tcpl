#include <iostream>

int main()
{

    struct first
    {
        bool b; //1 byte
        int i; //4 byte
        char c; //1 byte
        long l; //4 byte
        double d; //8 byte
        long double ld; //12 byte
    };
    struct second
    {
        long double ld; //12 byte
        double d; //8 byte
        int i; //4 byte
        long l; //4 byte
        bool b; //1 byte
        char c; //1 byte
    };
    std::cout<<"Első struktúra mérete: "<<sizeof(first)<<" byte.\n";
    std::cout<<"Második struktúra mérete: "<<sizeof(second)<<" byte.\n";
}

