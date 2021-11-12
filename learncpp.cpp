#include <iostream>

//Chapter0.cpp
void helloworld();

//Chapter1.cpp
void chapterOnePartEleven();
void chapterOneQuiz();

//Chapter2.cpp
void doPrint();
int chapterTwoPartOne();
int getValueFromUser();
int chapterTwoPartTwo();
void printDouble(int value);
int chapterTwoPartThree();

/* Each chapter has its own .cpp file and all the functions I used
*  are shown as forward declarations above. This forward declaration
*  thing is really nice because it makes it really simple to create 
*  an organized multi-file program.
* 
*  The forward declarations above tell the compiler that there's a
*  function of X return-type, Y name, with Z argument-type(s) somewhere in the files and
*  will find it so it can be used later. (Chapter 2.7)
*/
int main() {
	//CHAPTER 0
	//helloworld();
	
	//CHAPTER 1
	//chapterOnePartEleven();
	//chapterOneQuiz();

	//CHAPTER 2
	//chapterTwoPartOne();
	//chapterTwoPartTwo();
	//chapterTwoPartThree();

	return 0;
}