#include <iostream>

using namespace std;

class Book
{
public:
   string name;
   int price;
   int number_of_pages;
   string author;
   int quantity;
   int number_of_sales;

   Book(){};

   Book(string name, int price, int number_of_pages, string author, int quantity, int number_of_sales)
   {
      this->name = name;
      this->price = price;
      this->number_of_pages = number_of_pages;
      this->author = author;
      this->quantity = quantity;
      this->number_of_sales = number_of_sales;
   }

   void InformationOfBook()
   {
      cout << "Name = " << name << "  Price = " << price << "  Number of Pages = " << number_of_pages << "  Author = " << author << "  Quantity = " << quantity << "  Number of sales = " << number_of_sales << endl;
   }
};

class BookShop
{
public:
   int number_of_books = 0;
   Book ArrayBook[99];
   Book ArrayBook_2[1];

   void BookAdd(Book book_name)
   {
      ArrayBook[number_of_books] = book_name;
      number_of_books++;
   }
   void BookDel(string book_name)
   {
      for (int t = 0; t < number_of_books; t++)
      {
         if (ArrayBook[t].name == book_name)
         {
            for (int p = t; p < number_of_books; p++)
            {
               ArrayBook[t] = ArrayBook[t + 1];
               t++;
            }
            number_of_books--;
            break;
         }
      }
   }
   void SeeAllBooks()
   {
      cout << "----------------------------------------------Without Sort--------------------------------------------------------" << endl;
      for (int i = 0; i < number_of_books; i++)
      {
         ArrayBook[i].InformationOfBook();
      }
   }
   void SeeAllBook_ByPrice()
   {
      for (int i = 1; i < number_of_books; i++)
      {
         for (int j = 1; j < number_of_books; j++)
         {
            if (ArrayBook[j].price > ArrayBook[j - 1].price)
            {
               ArrayBook_2[0] = ArrayBook[j];
               ArrayBook[j] = ArrayBook[j - 1];
               ArrayBook[j - 1] = ArrayBook_2[0];
            }
         }
      }

      cout << "------------------------------------------------By Price-----------------------------------------------------------" << endl;
      for (int i = 0; i < number_of_books; i++)
      {
         ArrayBook[i].InformationOfBook();
      }
   }
   void SeeAllBook_ByNumberOfSales()
   {
      for (int i = 1; i < number_of_books; i++)
      {
         for (int j = 1; j < number_of_books; j++)
         {
            if (ArrayBook[j].number_of_sales > ArrayBook[j - 1].number_of_sales)
            {
               ArrayBook_2[0] = ArrayBook[j];
               ArrayBook[j] = ArrayBook[j - 1];
               ArrayBook[j - 1] = ArrayBook_2[0];
            }
         }
      }

      cout << "---------------------------------------------By Number Of Sales-----------------------------------------------------" << endl;
      for (int i = 0; i < number_of_books; i++)
      {
         ArrayBook[i].InformationOfBook();
      }
   }
};