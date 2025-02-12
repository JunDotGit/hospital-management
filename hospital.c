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
} Patient;

// Global variables
Patient patients[MAX_PATIENTS];
int patient_count = 0;
char doctor_schedule[DAYS][SHIFTS][50];

// Function prototypes
void addPatient();
void viewPatient();
void searchPatient();
void dischargePatient();
void manageDoctorSchedule();
void displayMenu();
int isUniqueID(int id);

int main()
{
    int choice;
    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addPatient(); break;
            case 2: viewPatient(); break;
            case 3: searchPatient(); break;
            case 4: dischargePatient(); break;
            case 5: manageDoctorSchedule(); break;
            case 6: printf("Exiting program...\n"); break;
            default:printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    return 0;
}

// Function to display menu
void displayMenu() {
    printf("\nHospital Management System\n");
    printf("1. Add Patient Record\n");
    printf("2. View All Patients\n");
    printf("3. Search Patient by ID\n");
    printf("4. Discharge Patient\n");
    printf("5. Manage Doctor Schedule\n");
    printf("6. Exit\n");
}

// Function to add a new patient
void addPatient()
{
    if (patient_count >= MAX_PATIENTS)
    {
        printf("Hospital is at full capacity! Cannot add more patients.\n");
        return;
    }

    Patient new_patient;
    printf("Enter Patient ID: ");
    scanf("%d", &new_patient.id);
    getchar();

    if (!isUniqueID(new_patient.id))
    {
        printf("Error: Patient ID must be unique!\n");
        return;
    }

    printf("Enter Name: ");
    fgets(new_patient.name, sizeof(new_patient.name), stdin);
    new_patient.name[strcspn(new_patient.name, "\n")] = 0;

    printf("Enter Age: ");
    scanf("%d", &new_patient.age);
    getchar();
    if (new_patient.age <= 0)
    {
        printf("Error: Age must be a positive integer!\n");
        return;
    }

    printf("Enter Diagnosis: ");
    fgets(new_patient.diagnosis, sizeof(new_patient.diagnosis), stdin);
    new_patient.diagnosis[strcspn(new_patient.diagnosis, "\n")] = 0;

    printf("Enter Room Number:");
    scanf("%d", &new_patient.room);

    patients[patient_count++] = new_patient;
    printf("Patient added successfully!\n");
}

// Function to check if Patient ID is unique
int isUniqueID(int id)
{
    for (int i = 0; i < patient_count; i++)
    {
        if (patients[i].id == id)
            return 0;
    }
    return 1;
}

// Function to view all patients
void viewPatients()
{
    if (patient_count == 0) {
        printf("No patient records found.\n");
        return;
    }

    printf("\nPatient Records:\n");
    for (int i = 0; i < patient_count; i++) {
        printf("ID: %d | Name: %s | Age: %d | Diagnosis: %s | Room: %d\n",
               patients[i].id, patients[i].name, patients[i].age,
               patients[i].diagnosis, patients[i].room);
    }
}

// Function to search for a patient
void searchPatient()
{
    int id;
    printf("Enter Patient ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < patient_count; i++)
    {
        if (patients[i].id == id)
        {
            printf("ID: %d | Name: %s | Age: %d | Diagnosis: %s | Room: %d\n",
                patients[i].id, patients[i].name, patients[i].age,
                patients[i].diagnosis, patients[i].room);
            return;
        }
    }
    printf("Patient not found!\n");
}

// Function to discharge a patient
void dischargePatient()
{
    int id;
    printf("Enter Patient ID to discharge: ");
    scanf("%d", &id);

    for (int i = 0; i < patient_count; i++)
    {
        if (patients[i].id == id)
        {
            for (int j = i; j < patient_count -1; j++)
            {
                patients[j] = patients[j + 1];
            }
            patient_count--;
            printf("Patient discharged successfully!\n");
            return;
        }
    }
    printf("Patient not found!\n");
}

// Function to manage doctor schedules
void manageDoctorSchedule()
{
    int day, shift;
    char doctor_name[50];

    printf("Enter day (0=Sunday, 6=Saturday): ");
    scanf("%d", &day);
    getchar();
    if (day < 0 || day > 6)
    {
        printf("Invalid day input!\n");
        return;
    }

    printf("Enter shift (0=Morning, 1=Afternoon, 2=Evening):");
    scanf("%d", shift);
    getchar();
    if (shift < 0 || shift > 2)
    {
        printf("Invalid shift input!\n");
        return;
    }

    printf("Enter Doctor's Name: ");
    fgets(doctor_name, sizeof(doctor_name), stdin);
    doctor_name[strcspn(doctor_name, "\n")] = 0;

    strcpy(doctor_schedule[day][shift], doctor_name);
    printf("Doctor assigned successfully!\n");
}

















