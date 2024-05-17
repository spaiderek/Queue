#include <stdio.h>
#define CAPACITY 5

int queue[CAPACITY];
int size = 0;

int push(int val) {
    if (size < CAPACITY) {
        queue[size++] = val;
        return 1;
    }
    return 0;
}

int pop() {
    if (size != 0) {
        int popped_value = queue[0];
        for (int i = 0; i < size - 1; i++)
            queue[i] = queue[i + 1];
        size--;
        return popped_value;
    }
    return -1;
}


void display_queue() {
    printf("\n");
    for (int i = 0; i < size; i++)
        printf("%d ", queue[i]);
    printf("\nsize: %d\n", size);
}
int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display_queue();

    //int x = pop();
    //printf("popped value: %d\n", x);
    //display_queue();

   // x = pop();
   // printf("popped value: %d\n", x);
    //display_queue();

    //x = pop();
    //printf("popped value: %d\n", x);
    //display_queue();

    //x = pop();
   // printf("popped value: %d\n", x);
   // display_queue();
}