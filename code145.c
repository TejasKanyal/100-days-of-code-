#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    float marks;
};


struct Student getTopStudent() {
    
    struct Student topStudent;

    
    topStudent.id = 101;
    strcpy(topStudent.name, "John Doe"); 
    topStudent.marks = 95.5;

   
    return topStudent;
}

int main() {
    
    struct Student studentDetails;

    
    studentDetails = getTopStudent();

    
    printf("Top Student Details:\n");
    printf("ID: %d\n", studentDetails.id);
    printf("Name: %s\n", studentDetails.name);
    printf("Marks: %.2f\n", studentDetails.marks);

    return 0;
}
