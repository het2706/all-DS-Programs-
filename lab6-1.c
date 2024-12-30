#include <string.h>
struct book
{
    char booktitle[256];
    char bookauthor[256];
    char bookpublication[256];
    float price;
};
void main()
{
    int n,i;
    printf("enter number of book");
    scanf("%d",&n);
    struct book b1[n];
    for ( i = 0; i<n; i++)
    {
    printf("enter book title:\n");
    scanf("%s",&b1[i].booktitle);
    printf("enter book author:\n");
    scanf("%s",&b1[i].bookauthor);
    printf("enter book publication:\n");
    scanf("%s",&b1[i].bookpublication);
    printf("enter price:\n");
    scanf("%f",&b1[i].price);
}
for (i = 0; i <n; i++)
{ 
    printf("title:","%s\n",b1[i].booktitle);
    printf("author:","%s\n",b1[i].bookauthor);
    printf("publication:","%s\n",b1[i].bookpublication);
    printf("price:","%f\n",b1[i].price);
}

}