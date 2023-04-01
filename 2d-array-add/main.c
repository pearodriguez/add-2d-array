//
//  main.c
//  2d-array-add
//
//  Created by Peter Rodriguez.
//
/*
 
 adds and prints out the resulting sum of the two arrays
 
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j, r_size= 2, c_size = 3;
    int first[2][3] = {{5, 18, 23}, {1, 91, 5}};
    int second[2][3] = {{5, 52, 77}, {1, 19, 5}};
    int sum_array[2][3];
    
    for(i = 0; i < r_size; i++)
    {
        for(j=0; j < c_size; j++)
        {
            sum_array[i][j] = first[i][j] + second[i][j];
        }
    }
    
    for(i = 0; i < r_size; i++)
    {
        for(j=0; j < c_size; j++)
        {
            printf("Sum of array element at %d & %d is: %d\n", i, j, sum_array[i][j]);
        }
    }
    
    return 0;
}
