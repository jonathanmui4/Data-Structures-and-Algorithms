//
//  main.cpp
//  TowerOfHanoi
//  3 Towers (1,2,3)
//  Discs 1 to n where 1 is the smallest disc on top and n is the biggest disc below
//  Move all of them from source pillar to destination pillar in same formation
//  In the process, smaller disc cannot be placed below the larger disc
//
//  Created by Jonathan Mui on 21/11/23.
//

#include <iostream>

/*
 * @param n Number of discs to move
 * @param source The pillar the disc is coming from
 * @param auxilary The pillar used to temporarily store all the smallest discs
 * @param dest The pillar to move all the discs to
 */
void toh(int n, int source, int auxilary, int dest) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << dest << std::endl;
    }
    else if (n > 1) {
        toh(n-1, source, dest, auxilary);
        std::cout << "Move disk " << n << " from " << source << " to " << dest << std::endl;
        toh(n-1, auxilary, source, dest);
    }
}

int main(int argc, const char * argv[]) {
    toh(3, 1, 2, 3);
    return 0;
}
