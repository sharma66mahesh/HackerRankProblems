#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook : Book
{
    int price;

public:
    MyBook(string tit, string auth, int pr) : Book(tit, auth)
    {
        price = pr;
    }

    void display()
    {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
