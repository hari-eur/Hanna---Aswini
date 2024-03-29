#include <stdio.h>


struct Student_Detailes {
  char name[50];
  char mailID[50];
  char mobileNumber[15];
  float percentage;
};


struct Department {
  char deptName[50];
  struct Student_Detailes studentDetails[50];
  int numStudents;
  float totalAverage;
};

int main() {
  int numDepartments, i, j;
  float sum, average;

  
  printf("Enter the number of departments: ");
  scanf("%d", &numDepartments);

  struct Department departments[numDepartments];

  for (i = 0; i < numDepartments; i++) {
    printf("\nEnter details for department %d:\n", i+1);
    printf("Enter the department name: ");
    scanf("%s", departments[i].deptName);

   
    printf("Enter the number of students in the department: ");
    scanf("%d", &departments[i].numStudents);

    sum = 0;
    for (j = 0; j < departments[i].numStudents; j++) {
      printf("\nEnter details for student %d:\n", j+1);
      printf("Enter the student name: ");
      scanf("%s", departments[i].studentDetails[j].name);
      printf("Enter the student email ID: ");
      scanf("%s", departments[i].studentDetails[j].mailID);
      printf("Enter the student mobile number: ");
      scanf("%s", departments[i].studentDetails[j].mobileNumber);
      printf("Enter the student percentage: ");
      scanf("%f", &departments[i].studentDetails[j].percentage);

      
      sum += departments[i].studentDetails[j].percentage;
    }

    
    average = sum / departments[i].numStudents;
    departments[i].totalAverage = average;
  }

 
  printf("\nDepartment Details:\n");
  for (i = 0; i < numDepartments; i++) {
    printf("\nDepartment %d:\n", i+1);
    printf("Department name: %s\n", departments[i].deptName);
    printf("Number of students: %d\n", departments[i].numStudents);

    
    printf("Student Details:\n");
    for (j = 0; j < departments[i].numStudents; j++) {
      printf("\nStudent %d:\n", j+1);
      printf("Name: %s\n", departments[i].studentDetails[j].name);
      printf("Email ID: %s\n", departments[i].studentDetails[j].mailID);
      printf("Mobile number: %s\n", departments[i].studentDetails[j].mobileNumber);
      printf("Percentage: %.2f\n", departments[i].studentDetails[j].percentage);
    }


    printf("Total average: %.2f\n", departments[i].totalAverage);
  }

  return 0;
}







#include <stdio.h>

struct Time {
  unsigned char Hours;
  unsigned char Minutes;
  unsigned char Seconds;
  unsigned char Day;
  unsigned char Month;
  unsigned short Year;
};

int main() {
  struct Time t;

  printf("Enter the hours: ");
  scanf("%hhu", &t.Hours);

  printf("Enter the minutes: ");
  scanf("%hhu", &t.Minutes);

  printf("Enter the seconds: ");
  scanf("%hhu", &t.Seconds);

  printf("Enter the day: ");
  scanf("%hhu", &t.Day);

  printf("Enter the month: ");
  scanf("%hhu", &t.Month);

  printf("Enter the year: ");
  scanf("%hu", &t.Year);

  printf("The input time is: %02hhu:%02hhu:%02hhu %02hhu/%02hhu/%04hu\n",
         t.Hours, t.Minutes, t.Seconds, t.Day, t.Month, t.Year);

  printf("The size of the Time struct is: %zu bytes\n", sizeof(t));

  return 0;
}




#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define KEY 0x1F

void encrypt_file(const char* filename);
void decrypt_file(const char* filename);

int main() {
    const char* filename = "test.txt";
    encrypt_file(filename);
    decrypt_file("encrypted.bin");
    return 0;
}

void encrypt_file(const char* filename) {
    FILE* fp_in = fopen(filename, "rb");
    if (fp_in == NULL) {
        printf("Error: could not open file %s\n", filename);
        exit(1);
    }

    FILE* fp_out = fopen("encrypted.bin", "wb");
    if (fp_out == NULL) {
        printf("Error: could not create output file\n");
        fclose(fp_in);
        exit(1);
    }

    unsigned char buffer[BUFFER_SIZE];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, sizeof(unsigned char), BUFFER_SIZE, fp_in)) > 0) {
        for (int i = 0; i < bytes_read; i++) {
            buffer[i] ^= KEY;
        }
        fwrite(buffer, sizeof(unsigned char), bytes_read, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}

void decrypt_file(const char* filename) {
    FILE* fp_in = fopen(filename, "rb");
    if (fp_in == NULL) {
        printf("Error: could not open file %s\n", filename);
        exit(1);
    }

    FILE* fp_out = fopen("decrypted.txt", "wb");
    if (fp_out == NULL) {
        printf("Error: could not create output file\n");
        fclose(fp_in);
        exit(1);
    }

    unsigned char buffer[BUFFER_SIZE];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, sizeof(unsigned char), BUFFER_SIZE, fp_in)) > 0) {
        for (int i = 0; i < bytes_read; i++) {
            buffer[i] ^= KEY;
        }
        fwrite(buffer, sizeof(unsigned char), bytes_read, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
}
