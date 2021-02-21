/*!
  \file vigenere.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Vigenère cipher
  \remarks None

  This file contains all the necessary
  methods to implement a Vigenère cipher.

*/

#include "vigenere.h"



void vigenereCipher(char** str_string, int int_length, char* str_key, int int_keyLength)
{
  /* Varibles */
  int i;
  int j;
  char char_c;
  char char_shift;

  /* Substract terminating null byte */
  int_length--;
  int_keyLength--;

  j = 0;
  for (i = 0; i < int_length; i++) {
    if (j == int_keyLength) j = 0;

    char_c = (*str_string)[i];
    char_shift = str_key[j];

    /* Bring the shift back to it's position in the alphabet */
    if ( (char_shift >= 'a') && (char_shift <= 'z') ) {
      char_shift = (str_key[j] - 'a') % 26;
    } else if ( (char_shift >= 'A') && (char_shift <= 'Z') ) {
      char_shift = (str_key[j] - 'A') % 26;
    }

    /* Check the lowercase letters first, then the uppercase ones */
    if ( (char_c >= 'a') && (char_c <= 'z') ) {
      char_c = (char_c + char_shift - 'a') % 26 + 'a';
      j++;
    } else if ( (char_c >= 'A') && (char_c <= 'Z') ) {
      char_c = (char_c + char_shift - 'A') % 26 + 'A';
      j++;
    }

    (*str_string)[i] = char_c;
  }
}