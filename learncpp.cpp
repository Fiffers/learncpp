#include <iostream>

int helloworld() {
	std::cout << "Hello, world!";
	return 0;
}

int chapterOnePartEleven() {
	std::cout << "Enter an integer: ";
	int num{ };
	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;
}

int chapterOneQuiz() {
	std::cout << "Enter an integer: ";
	int x{ };
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{ };
	std::cin >> y;

	std::cout << x << " + " << y << " is " << x + y << "." << '\n';
	std::cout << x << " - " << y << " is " << x - y << "." << '\n';

	return 0;
}

int main() {
	//helloworld();
	//chapterOnePartEleven();
	chapterOneQuiz();
}