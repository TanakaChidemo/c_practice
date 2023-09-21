#include <stdio.h>

typedef struct
{
    int house_num;
    char area[20];
    char city[20];
} Address;

struct cust_details
{
    char name[20];
    char sex[2];
    int age;
    Address address; // Changed to store an instance of the Address struct
};

int main()
{
    struct cust_details customer;

    printf("Please enter your name: \n");
    scanf("%19s", customer.name);

    printf("Please enter your sex (M/F): \n");
    scanf(" %1s", customer.sex); // Read a single character into customer.sex

    printf("Please enter your age: \n");
    scanf("%d", &customer.age);

    printf("Please enter your house number: \n");
    scanf("%d", &customer.address.house_num); // Access the house_num field through customer.address

    printf("Please enter your area: \n");
    scanf("%19s", customer.address.area); // Access the area field through customer.address

    printf("Please enter your city: \n");
    scanf("%19s", customer.address.city); // Access the city field through customer.address

    printf("Customer Details:\n");
    printf("Name: %s\n", customer.name);
    printf("Sex: %s\n", customer.sex);
    printf("Age: %d\n", customer.age);
    printf("Address:\n");
    printf("House Number: %d\n", customer.address.house_num);
    printf("Area: %s\n", customer.address.area);
    printf("City: %s\n", customer.address.city);

    return 0;
}
