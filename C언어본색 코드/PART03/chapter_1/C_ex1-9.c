#include <stdio.h>

struct node{
    int data;
    struct node* right_link;
    struct node* left_link;
};

int main(){
    struct node n1 = {10,NULL,NULL};
    struct node n2 = {20,NULL,NULL};
    struct node n3 = {30,NULL,NULL};
    struct node n4 = {40,NULL,NULL};
    struct node n5 = {50,NULL,NULL};
    struct node n6 = {60,NULL,NULL};
    struct node n7 = {70,NULL,NULL};    
    
    return 0;
}