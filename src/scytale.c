/*!
  \file scytale.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Scytale cipher
  \remarks None

  This file contains all the necessary
  methods to implement a Scytale cipher.

*/

#include "scytale.h"



void scytaleCipher(char** str_string, int int_length)
{
  /* Variables */
  int int_matrixLength;
  int int_spacesToAdd;
  int i;
  int j;
  int k;
  char** pchar_matrix;

  /* Substract one to cancel out the \0 */
  int_length -= 1;

  /* Create temporary matrix for the cipher */
  int_matrixLength = ceil(sqrt((double)int_length));
  pchar_matrix = malloc(int_matrixLength * sizeof(char*));
  for (i = 0; i < int_matrixLength; i++) {
    pchar_matrix[i] = malloc(int_matrixLength * sizeof(char));
  }

  /* Add extra spaces to the end of the string
  if the length is not a perfect square */
  int_spacesToAdd = (int_matrixLength * int_matrixLength) - int_length;
  if ( int_spacesToAdd != 0 ) {
    for (i = 0; i < int_spacesToAdd; i++) {
      (*str_string)[int_length + i] = ' ';
    }
  }

  /* Copy all the values into the matrix */
  k = 0;
  for (i = 0; i < int_matrixLength; i++) {
    for (j = 0; j < int_matrixLength; j++) {
      pchar_matrix[i][j] = (*str_string)[k];
      k++;
    }
  }

  /* Paste all the values back into the
  string to create the cipher */
  k = 0;
  for (i = 0; i < int_matrixLength; i++) {
    for (j = 0; j < int_matrixLength; j++) {
      (*str_string)[k] = pchar_matrix[j][i];
      k++;
    }
  }

  /* Free matrix */
  for (i = 0; i < int_matrixLength; i++) free(pchar_matrix[i]);
  free(pchar_matrix);
}