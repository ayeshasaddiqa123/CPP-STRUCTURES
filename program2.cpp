#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
struct employee
{
    int codeNumber;
    double salary;
    int grade;
};

int main()             // built-in function (main) from where execution starts
{
    employee emp1,emp2;
    //input records of both employees
    cout << "Enter the code number of employee 1: ";
    cin >> emp1.codeNumber; //input code number of employee 1       
    cout << "Enter the salary of employee 1: ";
    cin >> emp1.salary; //input salary of employee 1
    cout << "Enter the grade of employee 1: ";
    cin >> emp1.grade; //input grade of employee 1 

   cout << "Enter the salary of employee 2: ";
    cin >> emp2.salary; //input salary of employee 2
    cout << "Enter the code number of employee 2: ";
    cin >> emp2.codeNumber; //input code number of employee 2   
    cout << "Enter the grade of employee 2: ";
    cin >> emp2.grade; //input grade of employee 2

    //display record of employee with higher salary
    //if salary of employee 1 is greater than employee 2
    if(emp1.salary > emp2.salary) 
    {
        cout << "Employee 1 has a higher salary." << endl; 
        cout << "Code number: " << emp1.codeNumber << endl; 
        cout << "Salary: " << emp1.salary << endl; 
        cout << "Grade: " << emp1.grade << endl; 
    }

    //if salary of employee 2 is greater than employee 1
    else if(emp2.salary > emp1.salary) 
    {
        cout << "Employee 2 has a higher salary." << endl; 
        cout << "Code number: " << emp2.codeNumber << endl; 
        cout << "Salary: " << emp2.salary << endl; 
        cout << "Grade: " << emp2.grade << endl; 
    }
    else //if both employees have same salary
    {
        cout << "Both employees have the same salary."<<endl; //display message
    }


return 0; //return 0 to indicate successful execution of the program

}