#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 50
#define DAYS 7
#define SHIFTS 3

// Patient structure
typedef struct {
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
void viewPatients();
void searchPatient();
void dischargePatient();
void manageDoctorSchedule();
void displayDoctorSchedule();
void displayMenu();
int isUniqueID(int id);

int main() {
    int choice;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: searchPatient(); break;
            case 4: dischargePatient(); break;
            case 5: manageDoctorSchedule(); break;
            case 6: displayDoctorSchedule(); break;
            case 7: printf("Exiting program...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}

void displayMenu() {
    printf("\nHospital Management System\n");
    printf("1. Add Patient Record\n");
    printf("2. View All Patients\n");
    printf("3. Search Patient\n");
    printf("4. Discharge Patient\n");
    printf("5. Manage Doctor Schedule\n");
    printf("6. Display Weekly Doctor Schedule\n");
    printf("7. Exit\n");
}

void addPatient() {
    if (patient_count >= MAX_PATIENTS) {
        printf("Hospital is at full capacity!\n");
        return;
    }

    Patient new_patient;
    printf("Enter Patient ID: ");
    scanf("%d", &new_patient.id);
    getchar();

    if (!isUniqueID(new_patient.id)) {
        printf("Error: Patient ID must be unique!\n");
        return;
    }

    printf("Enter Name: ");
    fgets(new_patient.name, sizeof(new_patient.name), stdin);
    new_patient.name[strcspn(new_patient.name, "\n")] = 0;

    do {
        printf("Enter Age: ");
        if (scanf("%d", &new_patient.age) != 1 || new_patient.age <= 0) {
            printf("Error: Age must be a positive integer!\n");
            while (getchar() != '\n');
        } else break;
    } while (1);
    getchar();

    printf("Enter Diagnosis: ");
    fgets(new_patient.diagnosis, sizeof(new_patient.diagnosis), stdin);
    new_patient.diagnosis[strcspn(new_patient.diagnosis, "\n")] = 0;

    printf("Enter Room Number: ");
    scanf("%d", &new_patient.room);

    patients[patient_count++] = new_patient;
    printf("Patient added successfully!\n");
}

int isUniqueID(int id) {
    for (int i = 0; i < patient_count; i++) {
        if (patients[i].id == id) return 0;
    }
    return 1;
}

void viewPatients() {
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

void searchPatient() {
    char name[50];
    int id, choice;
    printf("Search by: 1. ID 2. Name: ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        printf("Enter Patient ID: ");
        scanf("%d", &id);
        for (int i = 0; i < patient_count; i++) {
            if (patients[i].id == id) {
                printf("ID: %d | Name: %s | Age: %d | Diagnosis: %s | Room: %d\n",
                    patients[i].id, patients[i].name, patients[i].age,
                    patients[i].diagnosis, patients[i].room);
                return;
            }
        }
    } else {
        printf("Enter Patient Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;
        for (int i = 0; i < patient_count; i++) {
            if (strcmp(patients[i].name, name) == 0) {
                printf("ID: %d | Name: %s | Age: %d | Diagnosis: %s | Room: %d\n",
                    patients[i].id, patients[i].name, patients[i].age,
                    patients[i].diagnosis, patients[i].room);
                return;
            }
        }
    }
    printf("Patient not found!\n");
}

void displayDoctorSchedule() {
    printf("\nDoctor Schedule:\n");
    for (int day = 0; day < DAYS; day++) {
        printf("Day %d:\n", day);
        for (int shift = 0; shift < SHIFTS; shift++) {
            printf(" Shift %d: %s\n", shift, doctor_schedule[day][shift][0] ? doctor_schedule[day][shift] : "Unassigned");
        }
    }
}
