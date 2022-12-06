#include <stdio.h>
#include <stdlib.h>

struct struct_books{
    /*Structure to store data of books*/

    int isbn;
    char book_name[40];
    char author_name[40];
    char publisher[30];
    float price;
};

int bookDetails(int n)
{
    int i;
    struct struct_books books[10];
    for (i=0; i<=n-1; i++)
    {
        printf("Enter the ISBN: ");
        scanf("%d", &books[i].isbn);
        printf("Enter the name of book: ");
        scanf("%s", &books[i].book_name);
        printf("Enter the author's name: ");
        scanf("%s", &books[i].author_name);
        printf("Enter the name of publisher: ");
        scanf("%s", &books[i].publisher);
        printf("Enter the price of book");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    for(i=0;i<n;i++){
        printf("details of %d book\n",i+1);
        printf("ISBN:%d\n",books[i].isbn);
        printf("Book name: %s\n",books[i].book_name);
        printf("Author name:%s\n",books[i].author_name);
        printf("Publisher name:%s\n",books[i].publisher);
        printf("Price of book:%f\n",books[i].price);      
        printf("\n");
    }
    //printf("")
    //printf("Choose an option:")
    return 0;
}

int main(void)
{
    int num;

    printf("Enter the number of books to store details of:");
    scanf("%d", &num);
    bookDetails(num);
    return 0;
}