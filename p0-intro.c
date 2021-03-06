/*
 * CS 261 PA0: Intro project
 *
 * Name: Adrien Ponce
 */

#include "p0-intro.h"

#include <math.h>

/*Returns the sum of the absolute values of the two parameters.*/
int add_abs (int num1, int num2)
{
    return abs(num1) + abs(num2);
}

/*Add two numbers and store the results in ans. Does nothing if the pointer is full.*/
void add_ptr (int num1, int num2, int *ans)
{
    if (ans != NULL) {
        *ans = num1 + num2;
    }
}

/*Return the factorial of non-negative inputs; otherwise, returns 1.*/
int factorial (int num)
{
    int sum = 1;

    // loops through num & multiplies each value less than it
    for (int i = num; i > 0; i--) {
        sum *= i;
    }
    return sum;
}

/*Returns true if the input is a positive prime number, false otherwise.*/
bool is_prime (int num)
{
    // special case
    if (num == 1) {
        return false;
    }

    // if remainder is zero than it is not prime
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

/*Adds two vectors. (See p0-intro.h for the definition of a vector_t).*/
vector_t add_vec (vector_t v1, vector_t v2)
{
    vector_t ans = { .x = 0.0, .y = 0.0 };
    ans.x = v1.x + v2.x;
    ans.y = v1.y + v2.y;
    return ans;
}

/*Return the dot product of two vectors.*/
double dot_prod_vec (vector_t v1, vector_t v2)
{
    double ans = 0.0;
    ans += v1.x * v2.x;
    ans += v1.y * v2.y;
    return ans;
}

/*Returns the sum of all the numbers in an array of length n.*/
int sum_array (int *nums, size_t n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}

/*Returns the greatest common divisor (gcd) of the two inputs. For our purposes, we will define that the gcd of zero
 * and any other number x to be x (i.e., gcd(a,0) = a and gcd(0,a) = a, which also means that gcd(0,0) = 0).*/
int gcd (int num1, int num2)
{
    // base case
    if (abs(num1) == 0) {
        return abs(num2);
    }

    return gcd(abs(num2) % abs(num1), abs(num1));
}

/*Sort the array nums of length n. You may use any sorting algorithm (keep it simple).*/
void sort_array (int *nums, size_t n)
{
    // loops through array and swaps each value using temp
    for (int i = 1; i < n; i++) {
        int temp = nums[i];
        int j = i - 1;
        // compare the next value
        while(nums[j] > temp && j >= 0) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = temp;
    }
}
