// Chapter 7, Programming Challenge 10: Driver�s License Exam
// The local Driver's License Office has asked you to write a program that grades  
// the written portion of the driver's license exam. The exam has 20 multiple choice 
// questions. Here are the correct answers:
// 1.	A	6.  B	11. A	16. C
// 2.	D	7.  A	12. C	17. C
// 3.	B	8.  B	13. D	18. A
// 4.	B	9.  C	14. B	19. D
// 5.	C	10. D	15. D	20. B
// Your program should store the correct answers shown above in an array. 
// It should ask the user to enter the student's answer for each of the 20
// questions, and the answers should be stored in another array. After the 
// student's answers have been entered, the program should display a message
// indicating whether the student passed or failed the exam. (A student must 
// correctly answer 15 of the 20 questions to pass the exam.) It should then 
// display the total number of correctly answered questions, the total 
// number of incorrectly answered questions, and a list showing the question
// numbers of the incorrectly answered questions.
// Input validation: Only accept the lettes A, B, C, or D as asnwers.
//
#include<iostream>
using namespace std;

// Function prototypes
void input(char [], int);   // OPTIONAL BUT GOOD PRACTICE
void checkAnswers(char[], char[], const int &, int &, int);

int main()
{
	// Constant for the number of questions
	const int ARRAY_SIZE = 20;
   
	// Array of the correct answers
	char answers[ARRAY_SIZE] = { 'A', 'D', 'B', 'B', 'C', 
		                     'B', 'A', 'B', 'C', 'D', 
				     'A', 'C', 'D', 'B', 'D',
				     'C', 'C', 'A', 'D', 'B' };

    char studentAnswers[ARRAY_SIZE];
   
	// Accumulator for number of correct answers
	int correctAnswers = 0;
   
	// Accumulator for number of incorrect answers
	int incorrectAnswers = 0;

	

	// Get the student's replies for each question.
 	// You can use a void function to do this
    // CALL input( ) function.
    input(studentAnswers, ARRAY_SIZE);
   
	// Check the student's replies against the correct
	// answers. CALL checkAnswers( ) function.
	checkAnswers(studentAnswers, answers, ARRAY_SIZE,correctAnswers,incorrectAnswers);


      
	// Display the numbers of correct and incorrect
	// answers provided by the student.

   
	// Display a list of the questions that were
	// incorrectly answered.

	return 0;
}

void input(char studentAnswers[], int ARRAY_SIZE)
{
//cout << "Please Enter Your Answers for each question here"<< endl;

for(int i = 0; i < ARRAY_SIZE; i++)
{
	cin >> studentAnswers[i];


while(studentAnswers[i] !='A' && studentAnswers[i] != 'B'
 && studentAnswers[i] != 'C' && studentAnswers[i] != 'D')
 {
	 cout <<"Use only an A, B, C, or D!"<< endl;
	 cout <<"Please try again."<< endl;
	cin >> studentAnswers[i];
 }
}
}

void checkAnswers(char studentAnswers[], char answers[], const int &ARRAY_SIZE,int &correctAnswers,int incorrectAnswers)
{



for(int i = 0; i < ARRAY_SIZE; i++)
{
if(studentAnswers[i] == answers[i])
{
	correctAnswers++;
}

else if(studentAnswers[i] != answers[i])
{
incorrectAnswers++;
}
}


	if(correctAnswers >=15){
	cout <<"The student passed the exam."<< endl;
						   }
	else{
	cout <<"The student failed the exam."<< endl;
	}

	cout <<"Correct Answers: "<<correctAnswers<< endl;
	cout <<"Incorrect Answers: "<<incorrectAnswers<< endl;
	cout << "Questions that were answered incorrectly:";

	for(int i = 0; i < ARRAY_SIZE; i++)
	{
	if(studentAnswers[i] != answers[i])
	
	cout<< "\n"<<incorrectAnswers++;
	}
}
