/*!
  \file utils.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief General utils
  \remarks None

  This file contains general
  utility methods.

*/

#include "utils.h"





void stringInput(char** str_string, size_t* st_memory, int* int_length)
{
  *int_length = getline(str_string, st_memory, stdin);
  (*str_string)[*int_length - 1] = '\0';
}

int intInput(void)
{
  /* Variables */
  int int_input;
  int int_correct;
  int int_c;

  int_correct = scanf("%d", &int_input);
  if (int_correct == 0) {
    fprintf(stderr, "The value is not an int.\n");
    exit(INT_INPUT_ERROR);
  }

  /* Empty buffer */
  while ( ((int_c = getchar()) != '\n') && (int_c != EOF) ) { }

  return (int_input);
}

void printHelp(void)
{
  printf("NAME\n");
  printf("\tcipher - cipher a string of characters\n");
  printf("\n");
  printf("SYNOPSIS\n");
  printf("\tcipher [OPTION]\n");
  printf("\n");
  printf("OPTIONS\n");
  printf("\t-c\tuse Cesar algorithm\n");
  printf("\n");
  printf("\t-v\tuse Vigenère algorithm\n");
  printf("\n");
  printf("\t-s\tuse scytale algorithm\n");
}

int argIsValid(char* str_argument)
{
  /* Cesar case */
  if (strcmp(str_argument, "-c") == 0) return(1);

  /* Vigenère case */
  if (strcmp(str_argument, "-v") == 0) return(2);

  /* Scytale case */
  if (strcmp(str_argument, "-s") == 0) return(3);

  /* Help case */
  if (strcmp(str_argument, "-h") == 0) return(-1);

  /* Default */
  return(0);
}