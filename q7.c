#include <stdio.h>
#include <string.h>

int main() {
  
    char *students[4] = {"Amr", "Burayd", "Cassim", "Dinar"};

    char *courses[4][5] = {
        {"Math", "Physics", "Chemistry"},          
        {"Physics", "Biology"},                    
        {"Math", "Chemistry", "English", "Physics"}, 
        {"History", "Math"}                        
    };

    int course_count[4] = {4, 2, 4, 2};

    int i, j;

    printf("Student Course Registrations:\n");
    printf("---------------------------------\n");
    for(i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for(j = 0; j < course_count[i]; j++) {
            printf("%s", courses[i][j]);
            if(j != course_count[i]-1) printf(", ");
        }
        printf("\n");
    }

    printf("\n");

    char search_course[50];
    printf("Enter course to search for students: ");
    scanf("%s", search_course);

    printf("Students taking %s:\n", search_course);
    for(i = 0; i < 4; i++) {
        for(j = 0; j < course_count[i]; j++) {
            if(strcmp(courses[i][j], search_course) == 0) {
                printf("- %s\n", students[i]);
                break;
            }
        }
    }

    printf("\n");

    printf("Overloaded students (more than 3 courses):\n");
    for(i = 0; i < 4; i++) {
        if(course_count[i] > 3) {
            printf("- %s (%d courses)\n", students[i], course_count[i]);
        }
    }

    return 0;
}
