#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book {
    string title;
    string author;
    int publicationYear;
    bool isAvailable;

    public:
        Book(string title, string author, int publicationYear) {
            this->title = title;
            this->author = author;
            this->publicationYear = publicationYear;
            isAvailable = true;
        }

        string getTitle() {
            return title;
        }

        string getAuthor() {
            return author;
        }

        int getPublicationYear() {
            return publicationYear;
        }

        bool getAvailability(bool availability) {
            this->isAvailable = availability;
        }
};

class Library {

    vector<Book> books;

    public:
        void addBook(Book book) {
            books.push_back(book);
        }

        void deleteBook(string title) {
            for (int i = 0; i < books.size(); i++) {
                if (books[i].getTitle() == title) {
                    books.erase(books.begin() + i);
                    break;
                }
            }
        }
};
int main() {
    int choice;
    cout<<"Library Management System: "<<endl;
    cout<<"1. Add Book"<<endl;
    cout<<"2. Delete Book"<<endl;
    cout<<"3. Edit Book"<<endl;
    cout<<"4. Search Book"<<endl;
    cout<<"5. View all Books"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
}