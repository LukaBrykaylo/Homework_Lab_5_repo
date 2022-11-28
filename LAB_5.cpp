#include "LAB_5_head.h"

int main()
{
   Book a("Name_1", 5, 555, "Good Author", 54, 220);
   Book b("Name_2", 0, 213, "Bad Author", 70, 0);
   Book c("Name_3", 45, 223, "Bad-Semi Author", 70, 1);
   Book d("Name_4", 8, 223, "Semi Author", 70, 7);
   Book e("Name_5", 4, 203, "Sem Author", 78, 999);
   Book f("Name_6", 55, 143, "S-Author", 38, 21);

   BookShop bookShop;
   bookShop.BookAdd(a);
   bookShop.BookAdd(b);
   bookShop.BookAdd(c);
   bookShop.BookAdd(d);
   bookShop.BookAdd(e);
   bookShop.BookAdd(f);
   bookShop.BookDel("Name_3");
   bookShop.SeeAllBooks();
   bookShop.SeeAllBook_ByPrice();
   bookShop.SeeAllBook_ByNumberOfSales();
}