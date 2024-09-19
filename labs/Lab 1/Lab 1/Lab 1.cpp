// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//project name:  Gradecalculator
//// deo mulumba



#include <iostream>
#include <iomanip>
//Included  iomanip for  use of  std::setprecision();


int main()
{

	std::cout << "lab1\n";
	std::cout << "deo mulumba\n";
	std::cout << "COSC1436-Fall2024\n";

		std::string userName;
		
	std::cout << "please Input Your Name: \n";
	std::cin >> userName;
	std::cout << std::endl;


	double lab1Grade = 0.0;
	double lab2Grade = 0.0;
	double lab3Grade = 0.0;
	double lab4Grade = 0.0;


	std::cout << "please Input your Lab Grades:" << "userName" << "?\n";
	std::cout << "lab  1:  ";
	std::cin >> lab1Grade;
	std::cout << "lab  2: ";
	std::cin >> lab2Grade;
	std::cout << "Lab 3: ";
	std::cin >> lab3Grade;
	std::cout << "Lab 4: ";
	std::cin >> lab4Grade;
	std::cout << std::endl;


	double exam1Grade = 0.0;
	double exam2Grade = 0.0;
	double exam3Grade = 0.0;

	std::cout << "please  Input your Exam Grades: " << userName<< "?\n";
	std::cout << "Exam 1: ";
	std::cin >> exam1Grade;
	std::cout << "Exam 2: ";
	std::cin >> exam2Grade;
	std::cout << "Exam 3: ";
	std::cin >> exam3Grade;
	std::cout << std::endl;


	double  participationGrade = 0.0;


	std::cout << "please Input your  Participation  Grade:" << userName << "?\n";
	std::cout << "participation  Grade: ";
	std::cin >> participationGrade;
	std::cout << std::endl;

	double finalExam = 0.0;


	std::cout << "please Input  your  final  Exam  Grade: " << userName << "?\n";
	std::cout << "final Exam  Grade: ";
	std::cin >> finalExam;
	std::cout << std::endl;


	std::cout << "Here Are Your  Grades," << userName << "?\n";
	std::cout << "Lab 1: " << lab1Grade << std::endl;
	std::cout << "lab 2: " << lab2Grade << std::endl;
	std::cout << "lab 3: " << lab3Grade << std::endl;
	std::cout << "lab 4: " << lab4Grade << std::endl;
	 

	std::cout << "Exam 1: " << exam1Grade << std::endl;
	std::cout << "Exam 2: " << exam2Grade << std::endl;
	std::cout << "Exam 3: " << exam3Grade << std::endl;


	std::cout << "participation: " << participationGrade << std::endl;
	 
	std::cout << "Final Exam: " << finalExam << std::endl;
	std::cout << std::endl;
	 

	double  labAssignmentcount = 4;
	double labAverage = (lab1Grade + lab2Grade + lab3Grade + lab4Grade) / labAssignmentcount;
	std::cout << "Lab Average  (65% of total): " << std::fixed << std::setprecision(2) << labAverage << std::endl;

	double examAssignmentCount = 3;
	double examAverage = (exam1Grade + exam2Grade + exam3Grade) / examAssignmentCount;
	std::cout << "Exam Avrage (20% of total):" << std::fixed << std::setprecision(2) << examAverage << std::endl;

	std::cout << "participation (5% of total):" << participationGrade << std::endl;

	std::cout << "final Exam (10% of total):" << finalExam << std::endl;
	std::cout << std::endl;

	double classAverage = (examAverage * 0.20) + (labAverage * 0.65) + (participationGrade * .05) + (finalExam * .10);
	std::cout << "Class Average: " << std::fixed << std::setprecision(2) << classAverage << std::endl;

		










		

    

}

