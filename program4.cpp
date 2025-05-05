#include<iostream>  //input output stream
using namespace std; //standard namespace
struct Book //structure to define a book
{
    char title[50]; //title of the book
     int id; //id of the book
     char name[50];
        //name of the book
};

struct order
{
    int orderid; //order id
    Book b[5];
}

int main()
{
    order o;
    cout << "Enter order id: "; //prompt for order id
    cin >> o.orderid; //input order id
    cout << "Enter book details: " << endl; //prompt for book details
    for (int i = 0; i < 5; i++) //loop to input details of 5 books
    {
        cout << "Enter title of book " << i + 1 << ": "; //prompt for book title
        cin >> o.b[i].title; //input book title
        cout << "Enter id of book " << i + 1 << ": "; //prompt for book id
        cin >> o.b[i].id; //input book id
        cout << "Enter name of book " << i + 1 << ": "; //prompt for book name
        cin >> o.b[i].name; //input book name
    }

    // dispaly all the details of the order
    cout << "Order ID: " << o.orderid << endl; //display order id
    cout << "Books in the order: " << endl; //prompt for book details
    for (int i = 0; i < 5; i++) //loop to display details of 5 books
    {
        cout << "Book " << i + 1 << ": " << endl; //prompt for book details
        cout << "Title: " << o.b[i].title << endl; //display book title
        cout << "ID: " << o.b[i].id << endl; //display book id
        cout << "Name: " << o.b[i].name << endl; //display book name
    }
    return 0; //return 0 to indicate successful execution

}