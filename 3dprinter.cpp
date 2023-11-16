#include <stdio.h>
#include <iostream>

int main()
{
    int statues;
    int days = 0;
    int printers = 1;
    int statuesPrinted = 0;
   
    std::cin>>statues;
    
    while(statuesPrinted < statues){
        while(statues > printers){
            days++;
            printers += printers;
        }
        days++;
        statuesPrinted += printers;
    }
    std::cout<<days;
}
