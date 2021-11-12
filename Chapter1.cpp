#include <iostream>

//CHAPTER 1 
void chapterOnePartEleven() {
	std::cout << "Enter an integer: ";
	int num{ };
	std::cin >> num;

	/*A really good point the tutorial brought up here is that we
	* dont need to actually assign a new value to the variable
	* holding the user input. Instead, we just multiply it in the output.
	* I've been guilty of reassigning the value in the past, so this
	* will really stick with me as it's so much better =)
	*/
	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';
}

// Just figuring out how to take sequential inputs. It was pretty self-explanatory.
void chapterOneQuiz() {
	std::cout << "Enter an integer: ";
	int x{ };
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{ };
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << "." << '\n';
	std::cout << x << " - " << y << " is " << x - y << "." << '\n';
}