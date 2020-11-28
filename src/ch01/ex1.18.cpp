/*
 * demonstrate if
 *
 * count how many consecuritve times a distinct value appears
 */
#include <iostream>

int main()
{
  int currVal = 0; // the number we're counting
  int val = 0;     // new values will be read into val
  // read first number and ensure that we have data to process
  if (std::cin >> currVal) {
    int cnt = 1; // store the count of the current value we're processing
    while (std::cin >> val) { // read the remaining numbers
      if (val == currVal)     // if the values are the same
	++cnt;                // add 1 to count
      else {                  // otherwise, print the count for
	                      // the previous value
	std::cout << currVal << " occurs "
		  << cnt << " times" << std::endl;
	currVal = val;        // remember the new value
	cnt = 1;              // reset the counter
      }
    } // while ends here
    // remember to print the count for the last value in the file
    std::cout << currVal << " occurs "
	      << cnt << " times" << std::endl;
  } // outer most if ends here
  return 0;
}
