#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE* pFile;

  pFile = fopen ("filelog.txt", "a+");
  fprintf(pFile, "%s %s\n", argv[1], "Ran the File \n" );

  fclose(pFile);

  return 0;
}
