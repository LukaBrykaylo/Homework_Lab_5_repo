#include <iostream>

using namespace std;

class Book
{
public:
   string name;
   int price;
   int numberOfPages;
   string author;
   int quantity;
   int numberOfSales;

   Book(){};

   Book(string name_, int price_, int numberOfPages_, string author_, int quantity_, int numberOfSales_)
   {
      name = name_;
      price = price_;
      numberOfPages = numberOfPages_;
      author = author_;
      quantity = quantity_;
      numberOfSales = numberOfSales_;
   }

   void InformationBook()
   {
      cout << "Name = " << name << "  Price = " << price << "  Number of Pages = " << numberOfPages << "  Author = " << author << "  Quantity = " << quantity << "  Number of sales = " << numberOfSales << endl;
   }
};

class BookShop
{
public:
   int NumberOfBooks = 0;
   Book ArrayBook[99];
   Book ArrayBook_2[1];

   void BookAdd(Book Book_)
   {
      ArrayBook[NumberOfBooks] = Book_;
      NumberOfBooks++;
   }
   void BookDel(string BookName)
   {
      for (int t = 0; t < NumberOfBooks; t++)
      {
         if (ArrayBook[t].name == BookName)
         {
            for (int p = t; p < NumberOfBooks; p++)
            {
               ArrayBook[t] = ArrayBook[t + 1];
               t++;
            }
            NumberOfBooks--;
            break;
         }
      }
   }
   void SeeAllBooks()
   {
      cout << "----------------------------------------------Without Sort--------------------------------------------------------" << endl;
      for (int i = 0; i < NumberOfBooks; i++)
      {
         ArrayBook[i].InformationBook();
      }
   }
   void SeeAllBook_ByPrice()
   {
      for (int i = 1; i < NumberOfBooks; i++)
      {
         for (int j = 1; j < NumberOfBooks; j++)
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
      for (int i = 0; i < NumberOfBooks; i++)
      {
         ArrayBook[i].InformationBook();
      }
   }
   void SeeAllBook_ByNumberOfSales()
   {
      for (int i = 1; i < NumberOfBooks; i++)
      {
         for (int j = 1; j < NumberOfBooks; j++)
         {
            if (ArrayBook[j].numberOfSales > ArrayBook[j - 1].numberOfSales)
            {
               ArrayBook_2[0] = ArrayBook[j];
               ArrayBook[j] = ArrayBook[j - 1];
               ArrayBook[j - 1] = ArrayBook_2[0];
            }
         }
      }

      cout << "---------------------------------------------By Number Of Sales-----------------------------------------------------" << endl;
      for (int i = 0; i < NumberOfBooks; i++)
      {
         ArrayBook[i].InformationBook();
      }
   }
};