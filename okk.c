#include <stdio.h>

int main() {
    int i, roll, num_students,subject;
    float marks[5], cgpa, total_marks = 0.0, grade_point;
    char name[50];

    // get number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // create a file and write student data
    FILE *fptr;
    fptr = fopen("students.txt", "w");



    FILE *tt;
    tt= fopen("final.txt", "w");

    for (i = 0; i < num_students; i++) {
        // get student information
        printf("\nStudent %d:\n", i+1);
        printf("Enter student name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter number of subject: ");
        scanf("%d",&subject);

        
        total_marks = 0.0;
        for (int j = 0; j < subject; j++) {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%f", &marks[j]);

            // calculate grade point for the subject
            if (marks[j] >= 80.0) {
                grade_point = 4.0;
            } else if (marks[j] >= 75.0) {
                grade_point = 3.75;
            } else if (marks[j] >= 70.0) {
                grade_point = 3.5;
            } else if (marks[j] >= 65.0) {
                grade_point = 3.25;
            } else if (marks[j] >= 55.0) {
                grade_point = 3.0;
            } else if (marks[j] >= 50.0) {
                grade_point = 2.75;
            } else if (marks[j] >= 45.0) {
                grade_point = 2.5;
            } else if (marks[j] >= 40.0) {
                grade_point = 2.25;
            } else {
                grade_point = 0.0;
            }

            total_marks += grade_point;
        }

        // calculate CGPA
        cgpa = total_marks / subject;

        // write student data to file
        fprintf(fptr, "Name: %s\n", name);
        fprintf(fptr, "Roll: %d\n", roll);
        fprintf(fptr, "Marks: ");
        for (int j = 0; j < subject; j++) {
            fprintf(fptr, "%.2f ", marks[j]);
        }
        fprintf(fptr, "\n");
        fprintf(fptr, "CGPA: %.2f\n\n", cgpa);

        fprintf(tt, "Roll: %d\n", roll);
        fprintf(tt, "CGPA: %.2f\n\n", cgpa);


    }

    fclose(tt);
    fclose(fptr);
    printf("\nStudent data written to file.\n");

       fptr = fopen("students.txt", "r");

    // read and print student data
    printf("\nStudent data:\n\n");
    char ch;
   while ((ch=getc(fptr)) != EOF)
   {
    printf("%c",ch);
   }
   
    fclose(fptr);
    printf("\n");
  printf("\n");


    // reopen the file for reading
     tt = fopen("final.txt", "r");

    // read and print student data
    printf("\nStudent data:\n\n");
    char c;
   while ((c=getc(tt)) != EOF)
   {
    printf("%c",c);
   }
   
    fclose(tt);
    printf("\n");
  printf("\n");

    return 0;
}