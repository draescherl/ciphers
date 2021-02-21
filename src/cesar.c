/*!
  \file cesar.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Cesar cipher
  \remarks None

  This file contains all the necessary
  methods to implement a Cesar cipher.

*/

#include "cesar.h"



void cesarCipher(char** str_string, int int_length, int int_shift)
{
  /* Variables */
  int i;
  char char_c;

  /* Substract one to cancel out the \0 */
  int_length -= 1;

  /* Go through the word */
  for (i = 0; i < int_length; i++) {
    char_c = (*str_string)[i];

    /* Check the lowercase letters first, then the uppercase ones */
    if ( (char_c >= 'a') && (char_c <= 'z') ) {
      char_c = (char_c + int_shift - 'a') % 26 + 'a';
    } else if ( (char_c >= 'A') && (char_c <= 'Z') ) {
      char_c = (char_c + int_shift - 'A') % 26 + 'A';
    }

    (*str_string)[i] = char_c;
  }
}