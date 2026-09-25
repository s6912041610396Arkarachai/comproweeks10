#include <stdio.h>
#include <string.h>

int main() {
    char names[3][50];
    float scores[3][3];
    float subject_totals[3] = {0.0, 0.0, 0.0};
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter scores for Math, Phy, Chem: ");
        scanf("%f %f %f", &scores[i][0], &scores[i][1], &scores[i][2]);

        subject_totals[0] += scores[i][0];
        subject_totals[1] += scores[i][1];
        subject_totals[2] += scores[i][2];
    }


    printf("\n=========================================================\n");
    printf("%-20s %-10s %-10s %-10s\n", "Student (length)", "Math", "Phy", "Chem");
    printf("---------------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        char name_with_len[60];
        sprintf(name_with_len, "%s (%d)", names[i], (int)strlen(names[i]));

        printf("%-20s %-10.2f %-10.2f %-10.2f\n",
               name_with_len, scores[i][0], scores[i][1], scores[i][2]);
    }

    printf("---------------------------------------------------------\n");
    printf("%-20s %-10.2f %-10.2f %-10.2f\n",
           "Subject average",
           subject_totals[0] / 3.0,
           subject_totals[1] / 3.0,
           subject_totals[2] / 3.0);
    printf("=========================================================\n");

    return 0;
}
