#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct product
{
    int id;
    char product_name[50];
    int quantity;
    float price;

} p;
FILE *fp;

void addProduct()
{
    fp = fopen("product.txt", "ab");
    printf("Enter Product id : ");
    scanf("%d", &p.id);

    printf("Enter Product name : ");
    fflush(stdin);
    gets(p.product_name);

    printf("Enter Product Quantity : ");
    fflush(stdin);
    scanf("%d", &p.quantity);

    printf("Enter price of Product");
    fflush(stdin);
    scanf("%f", &p.price);

    printf("\n Product Added successfully...");

    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);
}

void displayProduct()
{
    system("cls");
    printf("<== Product List ==>\n\n");
    printf("%-10s %-30s %-30s %s\n", "Id", "Product Name", "Quantity", "Price");
    printf("-------------------------------------------------------------------------------------------------------------------------------");
    fp = fopen("product.txt", "rb");
    while (fread(&p, sizeof(p), 1, fp) == 1)
    {
        printf("%-10d %-30s %-30d %f\n", p.id, p.product_name, p.quantity, p.price);
    }
    fclose(fp);
}

void updateProduct()
{
    int id, f;
    system("cls");
    printf("<== Update Product ==>\n\n");
    printf("Enter Product id to update : ");
    scanf("%d", &id);

    FILE *ft;

    fp = fopen("product.txt", "rb+");

    while (fread(&p, sizeof(p), 1, fp) == 1)
    {
        if (id == p.id)
        {
            f = 1;
            printf("Enter new product name : ");
            fflush(stdin);
            gets(p.product_name);

            printf("Enter new product quantity : ");
            fflush(stdin);
            scanf("%d", &p.quantity);

            printf("Enter new product price : ");
            fflush(stdin);
            scanf("%f", &p.price);

            fseek(fp, -sizeof(p), 1);
            fwrite(&p, sizeof(p), 1, fp);
            fclose(fp);
            break;
        }
    }

    if (f == 1)
    {
        printf("\n Product updated..");
    }
    else
    {
        printf("\n\n Product Not Found !");
    }
}

void deleteProduct()
{
    int id, f;

    system("cls");
    printf("<== Delete Products ==>\n\n");
    printf("Enter Product id to delete : ");
    scanf("%d", &id);

    FILE *ft;
    fp = fopen("product.txt", "rb");

    while (fread(&p, sizeof(p), 1, fp) == 1)
    {
        if (id == p.id)
        {
            f = 1;
            fclose(fp);
            break;
        }
    }

    if (f == 1)
    {
        printf("\n Product Deleted successfully...");
        //   delete id;
    }
    else
    {
        printf("\n\n Product Not Found !");
    }
}

void buyProduct()
{
    int id, n, f = 0;
    system("cls");
    printf("<== Buy Products ==>\n\n");
    printf("Enter Product id to Buy : ");
    scanf("%d", &id);

    printf("Enter quantity of product buy : ");
    scanf("%d", &n);

    FILE *ft;

    fp = fopen("product.txt", "rb+");

    while (fread(&p, sizeof(p), 1, fp) == 1)
    {
        if (id == p.id)
        {
            f = 1;
            p.quantity = p.quantity - n;
            fseek(fp, -sizeof(p), 1);
            fwrite(&p, sizeof(p), 1, fp);
            fclose(fp);
        }
        break;
    }

    if (f == 1)
    {
        printf("\n Product bought successfully...");
    }
    else
    {
        printf("\n\n Product Not Found !");
    }
}

int main()
{
    int ch;

    while (1)
    {
        system("cls");
        printf("<--Store Management System-->\n");
        printf("1. Add Product\n");
        printf("2. Display products \n");
        printf("3. Update product\n");
        printf("4. Delete Product\n");
        printf("5. buy product\n");
        printf("0. Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            addProduct();
            break;
        case 2:
            displayProduct();
            break;
        case 3:
            updateProduct();
            break;
        case 4:
            deleteProduct();
            break;
        case 5:
            buyProduct();
            break;

        default:
            printf("Invalid choice...\n\n");
            break;
        }
        printf("\n\n Press any key to continue...");
        getch();
    }
    return 0;
}