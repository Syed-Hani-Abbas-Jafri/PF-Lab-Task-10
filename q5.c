#include <stdio.h>

int main() {
    char *students[5] = {"Asbagh", "Shurayh", "Rustam", "Burayd", "Arous"};
    int marks[5] = {85, 92, 78, 88, 90};

    int i, top_index = 0;
    float total = 0;

    printf("Student Marks Table\n");
    printf("-----------------------\n");
    printf("Name\t\tMarks\n");
    printf("------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-10s\t%d\n", students[i], marks[i]);
        total += marks[i];
        if(marks[i] > marks[top_index])
            top_index = i;
    }

    float average = total / 5;

    printf("----------------------------\n");
    printf("Top Student: %s with %d marks\n", students[top_index], marks[top_index]);
    printf("Class Average: %.2f\n", average);

    return 0;
}
