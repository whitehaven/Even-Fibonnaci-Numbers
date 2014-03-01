//
//  main.cpp
//  Even Fibonacci Numbers
//
//  Created by Alex Crist on 2/11/14.
//  Copyright (c) 2014 WH External Projects. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int upperlimit = 4e6;
    int fibnumbers[3] = {1, 0, 1};
    
    long int sumtotal = 0;
    
    while (fibnumbers[2] <= upperlimit)
    {
        //Ideally, would be 1, 1, 2, 3, 5, 8, 13...
            //problem says it's unique terms, so 1, 2, 3, 5, etc.
        //fibnumbers[2] needs to be fib[0]+fib[1], not added; set it
        if ( fibnumbers[0] + fibnumbers[1] > upperlimit)
        {
            break;
        }
        fibnumbers[2] = fibnumbers[0] + fibnumbers[1];
        
        //shift 2 -> 1, 1 -> 0
        fibnumbers[0] = fibnumbers[1];
        fibnumbers[1] = fibnumbers[2];
        
//        std::cout << fibnumbers[2] << std::endl; // test printer
        
        if ( fibnumbers[2] % 2 == 0 )
        {
            sumtotal += fibnumbers[2];
        }
        
    }
    //Find each Fib number
    //Find if even
    //If is, add to sum total
    
    std::cout << "Up to " << upperlimit << " even Fibbonacci Numbers = " << sumtotal << std::endl;
    return 0;
}

