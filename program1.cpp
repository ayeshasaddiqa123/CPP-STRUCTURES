#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
struct record
{
    float distance;
    int minutes;
    int seconds;
};
int main()             // built-in function (main) from where execution starts
{
record r[2];

for(int i=0; i<2; i++)
{
    cout << "Enter distance in km: ";
    cin >> r[i].distance;
    cout << "Enter time in minutes and seconds: ";
    cin >> r[i].minutes >> r[i].seconds;
}
    //disply record of winner
    if(r[0].distance > r[1].distance)
    {
        cout << "Winner is: " <<"Player 1"<< endl;
        cout << "Distance: " << r[0].distance << " km" << endl;
        cout << "Time: " << r[0].minutes << " minutes " << r[0].seconds << " seconds" << endl;
    }
    else if(r[1].distance > r[0].distance)
    {
        cout << "Winner is: "<<<<" Player 2" << endl;
        cout << "Distance: " << r[1].distance << " km" << endl;
        cout << "Time: " << r[1].minutes << " minutes " << r[1].seconds << " seconds" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
    
    return 0;         //return 0 to indicate successful execution
}