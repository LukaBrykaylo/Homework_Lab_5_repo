#include "LAB_5_head.h"

int main()
{
   Book book_one("Name_1", 5, 555, "Good Author", 54, 220);
   Book book_two("Name_2", 0, 213, "Bad Author", 70, 0);
   Book book_three("Name_3", 45, 223, "Bad-Semi Author", 70, 1);
   Book book_four("Name_4", 8, 223, "Semi Author", 70, 7);
   Book book_five("Name_5", 4, 203, "Sem Author", 78, 999);
   Book book_six("Name_6", 55, 143, "S-Author", 38, 21);

   BookShop bookShop;
   bookShop.BookAdd(book_one);
   bookShop.BookAdd(book_two);
   bookShop.BookAdd(book_three);
   bookShop.BookAdd(book_four);
   bookShop.BookAdd(book_five);
   bookShop.BookAdd(book_six);
   bookShop.BookDel("Name_3");
   bookShop.SeeAllBooks();
   bookShop.SeeAllBook_ByPrice();
   bookShop.SeeAllBook_ByNumberOfSales();
}