#include <stdio.h>

int main() {
    char dir;
    printf("Enter the character:");
    scanf_s("%c",&dir);
    switch (dir)
    {
    case 'w':
        printf("Up");
        break;
    case 's':
        printf("Down");
        break;
    case 'a':
        printf("Left");
        break;
    case 'd':
        printf("Right");
        break;
    default:
        printf("Wrong");
        break;
    }

    return 0;
}