#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 50
#define DAYS 7
#define SHIFTS 3

// Patient structure
typedef struct
{
    int id;
    char name[50];
    int age;
    char diagnosis[100];
    int room;
} patient;

// Function prototypes
void addPatient();
void viewPatient();
void searchPatient();
void dischargePatient();

int main()
{
    int choice;

}