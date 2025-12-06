#include<stdio.h>
#include<string.h>
struct book
{
    char title[100];
    char author[50];
    int price;
};

int main(){
    struct book b1,b2,b3,b4,b5;
    //  book1
    printf ("Enter the Title name: ");
    fgets(b1.title,sizeof(b1.title),stdin);
    printf ("Enter the Author name: ");
    fgets(b1.author,sizeof(b1.author),stdin);
    printf ("Enter the Price name: ");
    scanf("%d",&b1.price);
    getchar();
    // book2
    printf ("\nEnter the Title name: ");
    fgets(b2.title,sizeof(b2.title),stdin);
    printf ("Enter the Author name: ");
    fgets(b2.author,sizeof(b2.author),stdin);
    printf ("Enter the Price name: ");
    scanf("%d",&b2.price);
    getchar();
    // book3
    printf ("Enter the Title name: ");
    fgets(b3.title,sizeof(b3.title),stdin);
    printf ("Enter the Author name: ");
    fgets(b3.author,sizeof(b3.author),stdin);
    printf ("Enter the Price name: ");
    scanf("%d",&b3.price);
    getchar();
    // book4
    printf ("Enter the Title name: ");
    fgets(b4.title,sizeof(b4.title),stdin);
    printf ("Enter the Author name: ");
    fgets(b4.author,sizeof(b4.author),stdin);
    printf ("Enter the Price name: ");
    scanf("%d",&b4.price);
    getchar();
    // book5
    printf ("Enter the Title name: ");
    fgets(b5.title,sizeof(b5.title),stdin);
    printf ("Enter the Author name: ");
    fgets(b5.author,sizeof(b5.author),stdin);
    printf ("Enter the Price name: ");
    scanf("%d",&b5.price);
    getchar();

    printf("\nBook Title: %sAuthor: %sPrice: %d\n", b1.title,b1.author,b1.price); //Book1
    printf("\nBook Title: %sAuthor: %sPrice: %d\n", b2.title,b2.author,b2.price); //Book2
    printf("\nBook Title: %sAuthor: %sPrice: %d\n", b3.title,b3.author,b3.price); //Book3
    printf("\nBook Title: %sAuthor: %sPrice: %d\n", b4.title,b4.author,b4.price); //Book4
    printf("\nBook Title: %sAuthor: %sPrice: %d\n", b5.title,b5.author,b5.price); //Book5
    return 0;
}