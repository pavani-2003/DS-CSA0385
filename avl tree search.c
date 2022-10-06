#include<stdio.h>
#include<conio.h>
struct building{
int id;
char* streetName;
int streetNumber; };
void searchAfterStreetName(node* root, char* searchedStreet){
int counter = 0;
if (root){
    if (strcmp(searchedStreet, root->info->streetName) < 0){
        return searchAfterStreetName(root->left, searchedStreet);
    }
    else if (strcmp(searchedStreet, root->info->streetName) > 0){
        return searchAfterStreetName(root->right, searchedStreet);
    }
    else{
        if (strcmp(searchedStreet, root->info->streetName) == 0){
                counter = counter + 1;
                printf("%d\n", counter);
            }

        }
      }
else{
    printf("Not found");
}

}
