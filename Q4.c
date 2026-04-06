#include <stdio.h>
int q[5], f = 0, r = 0;

int main() {
    int ch, id;
    while (1) {
        printf("\n1.Add Doc 2.Print 3.Pending 4.Exit: ");
        scanf("%d", &ch);
        if (ch == 1) 
        {
            if (r == 5) {
                printf("Queue Full");
            }
            else{
                printf("Doc ID: "); scanf("%d", &id); q[r++] = id;
            }
        } else if (ch == 2)
        {
            if (f == r){
                printf("Empty");
            }
            else 
                printf("Printing: %d", q[f++]);
        } else if (ch == 3) {
            for (int i = f; i < r; i++){

                printf("%d ", q[i]);
            }
        } else{ 
            break;
        }
    }
    return 0;
}