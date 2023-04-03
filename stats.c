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
 * @file stats.c
 * @brief Main file for week 1 assessment
 *
 * Introduction to Embedded Systems course
 *
 * @author Lucas Vivian
 * @date 03/04/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230, 99, 3, 100, 90};
  
  sort_array(test, SIZE);
  print_statistics(test, SIZE);

}

void print_statistics(unsigned char array[], unsigned int size){
  int minimum, maximum, mean, median = 0;
  minimum = find_minimum(array, size);
  printf("Minimum value is: %d\n", minimum);
  maximum = find_maximum(array,size);
  printf("Maximum value is: %d\n", maximum);
  mean = find_mean(array, size);
  printf("Mean value is: %d\n", mean);
  median = find_median(array, size);
  printf("Median value is: %d\n", median);
}

void print_array(unsigned char array[], unsigned int size){
  int i = 0;
  for(int i = 0;i<size;i++){
    printf("%d\n",array[i]);
  }
  return;
}

unsigned int find_median(unsigned char *array, unsigned int size){
  int median = 0;
  median = array[size/2+1];
  return median;
}

float find_mean(unsigned char array[], unsigned int size){
  int i = 0;
  int total_sum = 0;
  float mean = 0;
  for(int i = 0;i<size;i++){
    total_sum = total_sum + array[i];
  }
  mean = total_sum/size;
  return mean;
}

unsigned int find_maximum(unsigned char array[], unsigned int size){
  int maximum = 0;
  maximum = array[0];
  return maximum;
}

unsigned int find_minimum(unsigned char array[], unsigned int size){
  int minimum = 0;
  minimum = array[size-1];
  return minimum;
}

void sort_array(unsigned char array[], unsigned int size){

//Uses bubble sort algorithm

  int temp = 0;
  for(int j=1;j<size;j++){ 
    for(int i=0;i<size-j;i++){
      if (array[i]<array[i+1]){
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
      }
    }
  }
}

