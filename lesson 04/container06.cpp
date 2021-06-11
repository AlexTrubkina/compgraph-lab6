#include <QString>
#include "book.h"
 
Book::Book(QString auth, QString tit) {
    
    author = auth;
    title = tit;
}
 
QString Book::getAuthor() const {
    
    return author;
}
 
QString Book::getTitle() const {
    
    return title;
}

#include <QTextStream>
#include <QList>
#include <algorithm> 
#include "book.h"

bool compareByTitle(const Book &b1, const Book &b2) {
    
  return b1.getTitle() < b2.getTitle();
}

int main(void) {

    QTextStream out(stdout);

    QList<Book> books = {
        Book("Jack London", "The Call of the Wild"),
        Book("Honoré de Balzac", "Father Goriot"),
        Book("Leo Tolstoy", "War and Peace"),
        Book("Gustave Flaubert", "Sentimental education"),
        Book("Guy de Maupassant", "Une vie"),
        Book("William Shakespeare", "Hamlet")
    };
    
    std::sort(books.begin(), books.end(), compareByTitle);
    
    for (Book book : books) {
        out << book.getAuthor() << ": " << book.getTitle() << endl;
    }
}

#include <QTextStream>
#include <QList>
#include <algorithm> 
#include "book.h"
 
bool compareByTitle(const Book &b1, const Book &b2) {
    
  return b1.getTitle() < b2.getTitle();
}
 
int main(void) {
 
    QTextStream out(stdout);
 
    QList<Book> books = {
        Book("Jack London", "The Call of the Wild"),
        Book("Honoré de Balzac", "Father Goriot"),
        Book("Leo Tolstoy", "War and Peace"),
        Book("Gustave Flaubert", "Sentimental education"),
        Book("Guy de Maupassant", "Une vie"),
        Book("William Shakespeare", "Hamlet")
    };
    
    std::sort(books.begin(), books.end(), compareByTitle);
    
    for (Book book : books) {
        out << book.getAuthor() << ": " << book.getTitle() << endl;
    }
}


bool compareByTitle(const Book &b1, const Book &b2) {
  return b1.getTitle() < b2.getTitle();
}

bool compareByTitle(const Book &b1, const Book &b2) {
  return b1.getTitle() < b2.getTitle();
}


std::sort(books.begin(), books.end(), compareByTitle);

