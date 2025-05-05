#include<iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing std::
// declaring structs for the program
struct person
{
   double income;
   double taxrate;
    double tax;

};

int main()
{
// defining array to satore record of five persons
person p[5];

  // inputting data for each person
    for(int i=0; i<5; i++)
    {
        cout<<"Enter income for person "<<i+1<<": ";
        cin>>p[i].income;
        cout<<"Enter tax rate for person "<<i+1<<": ";
        cin>>p[i].taxrate;
      // tax payable is calculated by multiplying income and tax rate
        p[i].tax = p[i].income * p[i].taxrate;
    }

// display text of each person
    cout<<"Person\tIncome\tTax Rate\tTax Payable\n";
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<"\t"<<p[i].income<<"\t"<<p[i].taxrate<<"\t\t"<<p[i].tax<<endl;
    }
// calculating total tax payable by all persons
    double totalTax = 0;
    for(int i=0; i<5; i++)
    {
        totalTax += p[i].tax;
    }
// displaying total tax payable by all persons
    cout<<"Total tax payable by all persons: "<<totalTax<<endl; 
    return 0; // Return 0 to indicate successful completion of the program
}