
/** 
Number of Steps to Reduce a Number to Zero
Easy

2658

136

Add to List

Share
Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

 

Example 1:

Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.
Example 2:

Input: num = 8
Output: 4
Explanation: 
Step 1) 8 is even; divide by 2 and obtain 4. 
Step 2) 4 is even; divide by 2 and obtain 2. 
Step 3) 2 is even; divide by 2 and obtain 1. 
Step 4) 1 is odd; subtract 1 and obtain 0.
Example 3:

Input: num = 123
Output: 12
 

Constraints:

0 <= num <= 106
Accepted
377,683
Submissions
440,551
*/


// Online C compiler to run C program online
#include <stdio.h>
int numberOfSteps(int num);
int main() {
    // Write C code here
    printf("no is %d", numberOfSteps(123));
    return 0;
}

int numberOfSteps(int num){
    int count_of_reduce = 0;
    //int cp_num = num;
    /// have a count on reduce 
    ///check the no is even or odd 
    //if even divide by 2 and store it increment the count 
    //if odd subtract 1 and store it increment the count 
    //printf("num = %d\r\n",cp_num);
    
    while(num)
    {
        if((num % 2) == 0)
        {
            //printf("Step %d) num is even = %d, divide by 2 ",count_of_reduce, num);
            num = num / 2;
            count_of_reduce++;
            //printf("and obtained %d\r\n", num);
            //break;
        }
        if(((num % 2) == 1))
        {
            //printf("Step %d) num is odd = %d, subtract 1",count_of_reduce, num );
            num--;
            count_of_reduce++;
            //printf(" and obtained %d\r\n", num );
            //break;
        }
    }
return count_of_reduce;
}
