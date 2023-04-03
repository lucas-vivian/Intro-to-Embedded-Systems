/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Header file containing all functions declarations
 *
 * @author Lucas Vivian
 * @date 29/03/2023
 *
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print statistics of array
 *
 * THe statistics include minimum, maximum, mean and median values
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return the function doesn`t return any value
 */

void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Print array on screen
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return the function doesn`t return any value
 */

void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Finds the median value from array
 *
 * Finds the middle value, between the bigger and the smaller halfs of the array
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return median value
 */

unsigned int find_median(unsigned char *array, unsigned int size);

/**
 * @brief Finds the mean value from array
 *
 * Finds the mean value of the array, sums all values and divides it by the length
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return mean value
 */

float find_mean(unsigned char array[], unsigned int size);

/**
 * @brief Finds the maximum value from array
 *
 * Finds the biggest value on the array
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return maximum value
 */

unsigned int find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finds the minimum value from array
 *
 * Finds the biggest value on the array
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return minimum value
 */

unsigned int find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorts array
 *
 * Sort array from largest to smallest values
 *
 * @param array - pointer to array
 * @param size - integer variable for array size
 *
 * @return the function doesn`t return any value
 */

void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
