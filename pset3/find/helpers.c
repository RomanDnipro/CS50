/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n){
    for(int i = 0; i < n+1; i++){
        if(values[i] == value){
            return true;
        }
    }
    return false;
    
//         if(values[(n+1)/2]==value){  //заменил n на n-1, там с n проблема хз...
//             return true;
//         }else{
//             if((n+1)==1){
//                 return false;
                
//             }
//         }
    
//         if(values[(n+1)/2] > value){
//             return search(value, values, (n+1)/2);
//         }else{
//             int tempArr[(n+1)/2];
//             for(int i = 0; i < (n+1)/2; i++){
//                 if(n % 2 == 0){
//                     tempArr[i] = values[(n+1)/2 + i];
//                 }else{
//                     tempArr[i] = values[(n+1)/2 + i + 1];
//                 }
//             }
//             return search(value, tempArr, (n+1)/2);
//         }
} 
    // if(n < 1){
    //     return false;
    // }
    // for(int i = 0; i < n; i++){
    //     if(values[i] == value){
    //         return true;
    //     }
    // }
    // return false;



/**
 * Sorts array of n values.
 */
void sort(int values[], int n){
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n-j; i++){
            if(values[i] > values[i+1]){
                int t = values[i];
                values[i] = values[i+1];
                values[i+1] = t;
            }
        }
    }
}