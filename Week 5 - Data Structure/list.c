#include <stdio.h>
#include <stdlib.h>

int main (void) {
    // dynamicaly create array size 3
    int *list = malloc(sizeof(int));
    if (list==NULL){
    return 1;
    }
    list[0]=1;
    list[1]=2;
    list[2]=3;

    // I Messed up ,now need 4 element
    int *tmp=malloc(4*sizeof(int)); //allocate memory for 4 int
    // check fo NULL pointer
    if(tmp==NULL)
    {
        free(list);
        return 1;
    }
    // assign list element into new tmp array iteratively
    for (int i=0; i<3;i++){
        tmp[i]=list[i];
    }
    tmp[3]=4; // assign value into new array
    free(list); // free previous size 3 array malloc

    list=tmp; //assign tmp size 4 array to list

    for(int i=0;i<4;i++)
    {
        printf("%i\n",list[i]);
    }

}