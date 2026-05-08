#include <stdio.h>
#include <string.h>
#define MAX 50
struct Employee
{
int empId;
char name[30];
char dept[20];
char position[20];
float salary;
char doj[15]; // Date of Joining
};
struct Employee emp[MAX];
int count = 0;
/* Function Declarations */
void createRecord();
void displayRecords();
void modifyRecord();
void deleteRecord();
int main()
{
int choice;
do
{
printf("\n========== Employee Database Menu ==========\n");
printf("1. Create New Record\n");
printf("2. Display All Records\n");
printf("3. Modify a Record\n");
printf("4. Delete a Record\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{   case 1:createRecord();
        break;
    case 2:displayRecords();
        break;  
    case 3:modifyRecord();
            break;
    case 4:deleteRecord();
        break;
    case 5:printf("Exiting the program. Goodbye!\n");
        break;
    default:printf("Invalid choice. Please try again.\n");
}
} while (choice != 5);
return 0;
}
//create a new employee record
void createRecord()
{
if(count >= MAX)
{
printf("Database is full.\n");
return;
}
printf("Enter Employee ID: ");
scanf("%d", &emp[count].empId);
printf("Enter Name: ");
scanf(" %[^\n]", emp[count].name); // Read string with spaces
printf("Enter Department: ");
scanf(" %[^\n]", emp[count].dept);
printf("Enter Position: ");
scanf(" %[^\n]", emp[count].position);
printf("Enter Salary: ");
scanf("%f", &emp[count].salary);
printf("Enter Date of Joining (dd/mm/yyyy): ");
scanf("%s", emp[count].doj);
count++;
printf("Record created successfully.\n");
}
//display all employee records
void displayRecords()
{
    int i;
    if(count == 0)
    {
        printf("No records to display.\n");
        return;
    }
    for(i = 0; i < count; i++)
    {
        printf("\nEmployee ID: %d\n", emp[i].empId);
        printf("Name: %s\n", emp[i].name);
        printf("Department: %s\n", emp[i].dept);
        printf("Position: %s\n", emp[i].position);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Date of Joining: %s\n", emp[i].doj);
    }
}
//modify an existing employee record 
void modifyRecord()
{
    int id, i,found = 0;
    printf("Enter Employee ID to modify: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("Enter new Name: ");
            scanf(" %[^\n]", emp[i].name);
            printf("Enter new Department: ");
            scanf(" %[^\n]", emp[i].dept);
            printf("Enter new Position: ");
            scanf(" %[^\n]", emp[i].position);
            printf("Enter new Salary: ");
            scanf("%f", &emp[i].salary);
            printf("Enter new Date of Joining (dd/mm/yyyy): ");
            scanf("%s", emp[i].doj);
            printf("Record modified successfully.\n");
                found = 1;
                break;
        }
    }
    if(!found)
    printf("Employee ID not found.\n");
}
//delete an employee record
void deleteRecord()
{
    int id, i, j, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            for(j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1]; // Shift records left
            }
            count--;
            printf("Record deleted successfully.\n");
            found = 1;
            break;
        }
    }
    if(!found)
    printf("Employee ID not found.\n");
}
