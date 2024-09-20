#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Book {
    private:
        string title;
        string author;
        int publicationYear;
        bool isAvailable;

    public:
        Book(string title, string author, int publicationYear) {
            this->title = title;
            this->author = author;
            this->publicationYear = publicationYear;
            this->isAvailable = true;
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

        bool getAvailability() {
            return isAvailable;
        }

        void setAvailability(bool availability) {
            this->isAvailable = availability;
        }
};

class Library {
    private:
        vector<Book> books;

    public:
        void addBook(Book book) {
            books.push_back(book);
        }

        void removeBook(string title) {
            for (int i = 0; i < books.size(); i++) {
                if (books[i].getTitle() == title) {
                    books.erase(books.begin() + i);
                    cout << "Book removed successfully." << endl;
                    return;
                }
            }
            cout << "Book not found." << endl;
        }

        void displayBooks() {
            for (Book book : books) {
                cout << "Title: " << book.getTitle() << endl;
                cout << "Author: " << book.getAuthor() << endl;
                cout << "Publication Year: " << book.getPublicationYear() << endl;
                cout << "Availability: " << (book.getAvailability() ? "Available" : "Not Available") << endl;
                cout << "------------------------" << endl;
            }
        }

        void borrowBook(string title) {
            for (Book &book : books) {
                if (book.getTitle() == title) {
                    if (book.getAvailability()) {
                        book.setAvailability(false);
                        cout << "Book borrowed successfully." << endl;
                    } else {
                        cout << "Book is not available." << endl;
                    }
                    return;
                }
            }
            cout << "Book not found." << endl;
        }

        void returnBook(string title) {
            for (Book &book : books) {
                if (book.getTitle() == title) {
                    if (!book.getAvailability()) {
                        book.setAvailability(true);
                        cout << "Book returned successfully." << endl;
                    } else {
                        cout << "Book is already available." << endl;
                    }
                    return;
                }
            }
            cout << "Book not found." << endl;
        }
};

int main() {
    Library library;

    int choice;
    while (true) {
        cout << "Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Display Books" << endl;
        cout << "4. Borrow Book" << endl;
        cout << "5. Return Book" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, author;
                int publicationYear;
                cout << "Enter title: ";
                cin >> title;
                cout << "Enter author: ";
                cin >> author;
                cout << "Enter publication year: ";
                cin >> publicationYear;
                Book book(title, author, publicationYear);
                library.addBook(book);
                break;
            }
            case 2: {
                string title;
                cout << "Enter title: ";
                cin >> title;
                library.removeBook(title);
                break;
            }
            case 3:
                library.displayBooks();
                break;
            case 4: {
                string title;
                cout << "Enter title: ";
                cin >> title;
                library.borrowBook(title);
                break;
            }
            case 5: {
                string title;
                cout << "Enter title: ";
                cin >> title;
                library.returnBook(title);
                break;
            }
            case 6:
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}