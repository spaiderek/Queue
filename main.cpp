#include <stdio.h>
#include "gueue.h"
void menu(void){
    printf("\n");
    printf("1.Enter a number into queue (push)\n");
    printf("2.Read a value of the first element (top)\n");
    printf("3.Delete first number (pop)\n");
    printf("4.Check if queue is empty\n");
    printf("5.Check if queue is full\n");
    printf("0.EXIT\n");
}
int main()
{
    int temp = 0;
    int option = 0;
    do{
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 0:
                break;
            case 1:
                if ( !isQueueFull() ){
                    printf("Enter value: ");
                    scanf("%d", &temp);
                    Push(temp);
                }
                else {
                    printf("Wrong operation. Queue is Full!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Top();
                    printf("Read value: %d", temp);
                }
                else {
                    printf("Wrong operation. Queue is Empty!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Pop();
                    printf("New first element: %d", temp);
                }
                else {
                    printf("Wrong operation. Queue is Empty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Queue is Empty.\n");
                }
                else {
                    printf("Queue isn't Empty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Queue is Full.\n");
                }
                else {
                    printf("Queue isn't Full.\n");
                }
                break;
            default:
                printf("Choose option.\n\n");
                break;
        }
    }while(option=0);
    printf("Good bye :)");
    return (0);
}