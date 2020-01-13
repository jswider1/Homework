// Justin Swiderski
// Section 05 CS3305L
// Lab 2
#include <iostream>
#include <stdio.h>
#include "stats.h"
using namespace std;

// Member functions definitions
statistician::statistician(){ 	// automatically sets up initial conditions
	count=0;					// for new additional class Objects
	total=0;
	tinyest=0;
	largest=0;
	}
void statistician::next(double r){ // r given to Object as the next number to be evaluated in its sequence
	count ++; // keeping a running total of numbers added by statistician
	total += r; // continuing to add each number as it is entered
	if(count == 1){
		tinyest = r; // if only one number than it is both the tinyest
		largest = r; // and largest
		}
		else{
			if(tinyest > r)	// storing new tinyest number
				tinyest = r;
			if(largest < r)	// storying new largest number
				largest = r;
			}
	}
void statistician::reset(){		// reset or clear numbers for Objects
	count = 0;
	total = 0;
	tinyest = 0;
	largest = 0;
	}
int statistician::length() const{	// how many entries for the sequence
	return count;
	}
double statistician::sum() const{	// adding all the entries from the sequence
	return total;
	}
double statistician::mean() const{	// taking the average of the sequence
	if(count == 0) return 0;
	return(total/count);
	}
double statistician::minimum() const{	// storing the minimum entry
	return tinyest;
	}
double statistician::maximum() const{	// storing the maximum entry
	return largest;
	}
