/*
 * factorial.cpp
 *
 *  Created on: 11-Jul-2016
 *      Author: zigi
 */

int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}


