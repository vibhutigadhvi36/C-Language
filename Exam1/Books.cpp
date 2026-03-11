#include <iostream>
using namespace std; 

class Book {
public:
    string title;
    string author;
    int publishedYear; 
};

int main() {

    Book books[3];

    books[0].title = "The Alchemist";
    books[0].author = "Paulo Coelho";
    books[0].publishedYear = 1988;

    books[1].title = "Rich Dad Poor Dad";
    books[1].author = "Robert Kiyosaki";
    books[1].publishedYear = 1997;

    books[2].title = "Atomic Habits";
    books[2].author = "James Clear";
    books[2].publishedYear = 2018;

    for(int i = 0; i < 3; i++) {
        cout << "Book " << i+1 << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Published Year: " << books[i].publishedYear << endl;
        cout << endl;
    }

    return 0;
}
