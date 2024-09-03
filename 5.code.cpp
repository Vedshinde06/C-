//Problem: Create a Book class with attributes like title, author, price, and year. 
//Write a member function displayDetails() to display the book's information. 
//Create two objects of this class and display their details.

#include<iostream>
using namespace std;

class books{

    public :
        string title;
        string author;
        int price;
        int year;

    books( string Title, string Author, int Price, int Year){

            title=Title;
            author=Author;
            price=Price;
            year=Year;
      }    

    void display(){
        cout<<"Title : "<<title<<endl;
        cout<<"Author : "<<author<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Year : "<<year<<endl;
    }
};

int main(){
    books Book1 = books ("Harry Potter", "JK Rowlin", 500, 2004);
    Book1.display();
    books Book2 = books ("Aganipankh", "APJ Abdul Kalam", 700, 2007);
    Book2.display();
}