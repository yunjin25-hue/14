#include <stdio.h>
#include <stdlib.h>

//½Ç½À 3

struct Book{
       int number;
       char title[10];
};

int main(int argc, char *argv[]){
  int i;
  struct Book **bookshelf;
  
  bookshelf=(struct Book**)malloc(3*sizeof(struct Book*));
  for(i=0; i<3; i++)
    bookshelf[i]=(struct Book*)malloc(10*sizeof(struct Book));
  
  bookshelf[1][3].number=5;
  strcpy(bookshelf[1][3].title, "C++ Programming");
  
  (bookshelf[2]+4)->number=3;
  strcpy((bookshelf[2]+4)-> title, "Communications Theory:");
  
  printf("book (1,3):%i,%s\n", (bookshelf[1]+3)-> number,(bookshelf[1]+3)-> title);
  printf("book (2,4):%i, %\n", bookshelf[2][3].number,bookshelf[2][4].title);
  
  //free bookshelf
  for(i=0; i<3; i++)
    free(bookshelf[i]);
  free(bookshelf);
    
  system("PAUSE");	
  return 0;
}
