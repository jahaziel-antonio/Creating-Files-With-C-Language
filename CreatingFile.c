#include <stdio.h>
//CALLING OTHER FUNCTIONS TO THE TOP
int Input();

//MAIN FUNCTION
int main()
{
  //CALLING FUNCTION INSIDE OF MAIN
  Input();
}

int Input()
{
  //CREATING FILE
  File *file = fopen("Datafile.csv","a");
  char *Name[100];
  
  //ASKING FOR NAME
  printf("\nName:");
  scanf("%s", Name);
  
  //INSERTING NAMES TO THE FILE
  fprintf(file, "%s", Name);
  //CLOSE
  fclose(file);
  
  return 0;
}
