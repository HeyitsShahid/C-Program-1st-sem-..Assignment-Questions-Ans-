//Lets code it--Shahid
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

float calculateAverage(struct Student *students, int n) {
    int totalMarks = 0;
    for (int i = 0; i < n; i++) {
        totalMarks += students[i].marks;
    }
    return (float)totalMarks / n;
}

int main() {
    int n;

   
    scanf("%d", &n);

    
    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    
    float average = calculateAverage(students, n);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
