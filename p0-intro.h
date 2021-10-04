#ifndef __CS261_P0__
#define __CS261_P0__

#include <getopt.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * @brief Vector of two numbers
 */
typedef struct {
    double x;
    double y;
} vector_t;

/**
 * @brief Add two numbers and take the absolute value of the sum
 *
 * @param num1 First number to add
 * @param num2 Second number to add
 * @returns Absolute sum of the two numbers
 */
int add_abs (int num1, int num2);

/**
 * @brief Add two numbers and store the result into a given memory location
 *
 * @param num1 First number to add
 * @param num2 Second number to add
 * @param ans Pointer to location where the result should be stored
 */
void add_ptr (int num1, int num2, int *ans);

/**
 * @brief Calculate the factorial of a number
 *
 * @param num Number to take the factorial of
 * @returns Factorial of num (num!)
 */
int factorial (int num);

/**
 * @brief Determine whether a number is prime
 *
 * @param num Number to check
 * @returns True if the number is prime, false otherwise
 */
bool is_prime (int num);

/**
 * @brief Add two vectors
 *
 * @param v1 First vector to add
 * @param v2 Second vector to add
 * @returns Pairwise sum of vectors
 */
vector_t add_vec (vector_t v1, vector_t v2);

/**
 * @brief Multiply two vectors
 *
 * @param v1 First vector to add
 * @param v2 Second vector to add
 * @returns Pairwise sum of vectors
 */
double dot_prod_vec (vector_t v1, vector_t v2);

/**
 * @brief Add an array
 *
 * @param nums Pointer to array of numbers
 * @param n Count of numbers in the array
 */
int sum_array (int *nums, size_t n);

/**
 * @brief Calculate greatest common divisor of two numbers
 *
 * @param num1 First number
 * @param num2 Second number
 * @returns Greatest common divisor of the two numbers
 */
int gcd (int num1, int num2);

/**
 * @brief Sorts an array of numbers in ascending order
 *
 * @param nums Pointer to array of numbers to sort
 * @param n Count of numbers in the array
 */
void sort_array (int *nums, size_t n);

#endif
