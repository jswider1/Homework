#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
//declarations
void exercise2();
int exercise3(int x);

// main function
int main(int argc, char **argv)
{
	// Exercise 1
	// printing out list for user to fill in
	printf("Name: \n");
	cout << "Phones:" << endl;
	printf("email: \n");
	printf("Hometown: \n");
	cout << "High School(s):" << endl;
	cout << "Previous colleges:" << endl;
	cout << "List college math/CS courses:" << endl;
	cout << "Type(s) of computers that you are confident working on:" << endl;
	cout << "Extracurricular activities (jobs, clubs, sports, etc.):" << endl;
	cout << "Favorite books, movies, music: " << endl;
	cout << "What you plan to do after graduation? (Be as specific as you can.)\n\n\n" << endl;
	
	// Exercise 2
	// accept a positive integer and display the sum of the
	// the first N integers as output
	exercise2(); // operator
	
	// Exercise 3
	// Generate given output from PDF using a loop structure(s). (Do not hard code the output values)
	exercise3(5); // passing a number to initialize the counter each
	exercise3(4); // time I want to use the function
	exercise3(3);
	exercise3(2);
	exercise3(1);
	return 0;
}
// function for exercise 2
void exercise2(){
	int N, sumN=0;
	cout << "Please enter a positive integer.\n" << endl;
	cin >> N; // taking the input from user and storing it in N
	N = abs(N); // storing the imput as an absolute value
	cout << "You entered " << N << ". \n" << endl;
	for(int i=1; i<=N; i++){ // declared i, as long as i less than N, add 1 to i at end of loop
		sumN += i; 	// sumN will now increment by 1 until it reaches N
					// can also be written as sumN = sumN+1
		}
	cout << "The sum of the first N integers is " << sumN << ".\n\n\n" << endl;
}
// function for exercise 3
int exercise3(int x){ // not completely necessary, but practicing in case i want to return something
	int j;
	for(j=x; j>0; j--){ 		// Looping through given the variable passed to the function
		cout << (j*2)-2 << " "; // Doing some math for each line of output
		if(j==1){				// Creating new line when loop is finished
			cout << "\n";
			}
		}
	return j; // returned in case I want to use it later
}
