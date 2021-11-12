#include <iostream>

//CHAPTER 2 
/* All functions will look something like this:
*  return-type identifier(arguments) {
*      insert(code-here);
*  }
*  This is pretty much the same as other languages I've worked with,
*  though declaring a function as an int is strange to me. I'll have
*  figure out why this is a thing later on in this tutorial (hopefully).
*
*  Oh, duh. It's based on what variable type you're going to use in the
*  return. Kind of like how java works.
*/

/* In javascript I learned to put the first curly brace on the same
*  line as the function. Is that still the proper thing to do here?
*  Does it even matter??
*/
void doPrint() {
	std::cout << "In doPrint()\n";
}

int chapterTwoPartOne() {
	std::cout << "Starting chapterTwoPartOne()\n";
	doPrint(); // Interrupt chapterTwoPartOne() by making this call to doPrint().
	doPrint(); // I'LL DO IT AGAIN
	std::cout << "Ending chapterTwoPartOne()\n";

	return 0;
}

/* NOTES:
   Nested functions wont work and are a no - no.
	  int thisWontWork() {
		  void foo() {
			  std::cout << "Foo!\n";
		  }

		  foo();
		  return 0;
	  }
	  Instead, just separate em like you should.

	Function Body - The curly braces and the statements in-between.
*/

int getValueFromUser() {
	std::cout << "Enter an integer: ";
	int input{ };
	std::cin >> input;
	return input;
}

int chapterTwoPartTwo() {
	int num{ getValueFromUser() }; // Putting an assignment in curlies is strange to me.

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

void printDouble(int value) {
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

int chapterTwoPartThree() {
	// This works, but we can use a function as an argument instead
	//int num { getValueFromUser() };
	//printDouble(num);

	printDouble(getValueFromUser());
	return 0;
}

/* The :: symbol is an operator called the scope resolution operator.
*  The identifier to the left of the :: symbol identifies the namespace
*  that the name to the right of the :: symbol is contained within.
*  If no identifier to the left of the :: symbol is provided, the
*  global namespace is assumed.
* 
*  std::cout == "cout that lives in the namespace std"
*  Best practice: Use explicit namespace prefixes to access identifiers
*  defined in a namespace.
*/