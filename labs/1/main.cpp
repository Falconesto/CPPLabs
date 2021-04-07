#include "procedure.h"

int main() {
    struct Circle circle;
    struct Input input;
    input.array.resize(3);
    input.array = {{1, 1, 1},
                   {1, 1, 1},
                   {1, 1, 1}};


    scanf("%f %f %f %f %f %f %d", &input.firstTask, &input.secondTask, &input.x, &input.y, &input.xMove, &input.yMove,
          &input.multiplyVariable);
    circle.x = input.x;
    circle.y = input.y;
    printf("Please enter the number of the action\n");
    scanf("%d", &input.action);
    if (input.action == 1) {
        numberWithoutFractional(&input.firstTask);
        changeSign(&input.secondTask);
        moveCircle(&circle, &input.xMove, &input.yMove);
        multiplyByNumber(&input.array, input.multiplyVariable);
        printf("POINTERS:\n");
        printf("%.3f\n", input.firstTask);
        printf("%.3f\n", input.secondTask);
        printf("%.3f %.3f\n", circle.x, circle.y);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%.3f ", input.array[i][j]);
            }
            printf("\n");
        }
    }else{
        numberWithoutFractional(input.firstTask);
        changeSign(input.secondTask);
        moveCircle(circle, input.xMove, input.yMove);
        multiplyByNumber(input.array, (float)input.multiplyVariable);
        printf("LINKS:\n");
        printf("%.3f\n", input.firstTask);
        printf("%.3f\n", input.secondTask);
        printf("%.3f %.3f\n", circle.x, circle.y);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%.3f ", input.array[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}