#include <stdlib.h>
#include<iostream>

#define VINGT_A 10+10
#define VINGT_B (10+10)

int main(){
    int quarantedeux_a=2*VINGT_A+2;
    int quarantedeux_b=2*VINGT_B+2;
    int quarantedeux_c=2*(VINGT_A+1);
    int quarantedeux_d=2*(VINGT_B+1);
    
    std::cout << quarantedeux_a;
    std::cout << "\n";
    std::cout << quarantedeux_b;
    std::cout << "\n";
    std::cout << quarantedeux_c;
    std::cout << "\n";
    std::cout << quarantedeux_d;
    
    return 0;
}
