#include<stdio.h>

int max(int a, int b){
    return a>b?a:b;
}
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Do you want to find max or min? (1/2): ");
    int choice;
    scanf("%d", &choice);
    if (choice==1){
        printf("Max is %d\n", max(a, b));
    }
    else if (choice==2){
        printf("Min is %d\n", min(a, b));
    }
    else {
        printf("Invalid choice\n");
        return 1;
    }
    return 0;
}