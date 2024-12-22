//Lets code it--Shahid
#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int age;
    float gpa;
};


void displayStudent(struct Student s) {
    printf("Name: %s, Age: %d, GPA: %.1f\n", s.name, s.age, s.gpa);
}

int main() {
    int n, i;
    
    
    scanf("%d", &n);
    
    
    struct Student students[n];
    
    
    for(i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].age);
        scanf("%f", &students[i].gpa);
    }
    
    
    printf("All Students:\n");
    for(i = 0; i < n; i++) {
        displayStudent(students[i]);
    }
    
    
    int highestIndex = 0;
    for(i = 1; i < n; i++) {
        if(students[i].gpa > students[highestIndex].gpa) {
            highestIndex = i;
        }
    }
    
    
    printf("Student with the highest GPA:\n");
    displayStudent(students[highestIndex]);
    
    return 0;
}