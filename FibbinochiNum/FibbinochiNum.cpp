
#include <iostream>

using namespace std;

//Step1
// Prompt user for the first two numbers
//Previous1
//Previous2

//Step2
// Read (Input), the first two numbers into Previous1 and Previous2

//Step3 
//Output the first two Fibonacci numbers (Echo Input)

//step4
//Prompt the user for the position of the desired
//Fibonacci number

//step5
//Read position of the desired Fibonacci number
//into nthFibonacci

//step6
//a. if (nthFibonacci --1)
//	the desired Fibonacci number is the first Fibonacci
//  number. Copy the value of previous into current
//b. else if (nthFibonacci --2)
//	 the desired Fibonacci number is the second Fibonacci number
// Copy the value of previous into current
//c. else calculate the desired Fibonacci number as follows:
//	 becasue you already know the first two fibonacci
//	 numbers of the sequence, start by determining the 
//	 third fibonacci number
//	 c.1 Initialize counter to 3 to keep track of the 
//	 calculate Fibonacci numbers
//	 c.2 Calculate the next Fibonacci number, as follows:
//	 current - previous2 + previous1;
//   c.3 Assign the value of previous2 to previous1
//	 c.4 Assign the value of current to previous2
//	 c.5 Increment counter
//Repeat Steps c.2 through c.5 until Fibonacci number 
// you want is calculated

int main()
{	
	//Declare variables
	int previous1, previous2, current, counter, nthFibonacci;

	cout << "Enter the first two Fibonacci "
		<< "numbers: ";						//step1
	cin >> previous1 >> previous2;			//step2
	cout << endl;
	cout << "THe first two Fibonacci numbers are "
		<< previous1 << "and" << previous2
		<< endl;							//step3
	cout << "Enter the position of the desired "
		<< "Fibonacci number: ";			//step4
	cin << nthFibonacci;					//step5
	cout << endl;

	if (nthFibonacci == 1) {				//step 6.a
		current = previous1;
	}
	else if (nthFibonacci == 2) {
		current = previous2;
			
	}
	else
	{
		counter = 3

		//Steps 6.c.2- 6.c.5
			while (counter <= nthFibonacci)
			{
				current = previous2 + previous1;
				previous1 = previous2;
				previous2 = current;
				counter++

			}//end while
	}//end else

	cout << "THe Fibonacci number at position "
		 << nthFibonacci << " is " << current
		 << endl;						//Step7

	return 0;
}//end main

