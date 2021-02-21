/*!
  \file vigenere.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Header file for vigenere.c
  \remarks None
*/

#ifndef _VIGENERE_H_
#define _VIGENERE_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void vigenereCipher(char** str_string, int int_length, char* str_key, int int_keyLength)
  \author L.Draescher <draescherl@eisti.eu>
  \date 08/12/2020
  \version 0.1 - first draft
  \param str_string The string to cipher
  \param int_length The length of the string
  \param str_key The key word
  \param int_keyLength The length of the key
  \brief Cipher a string using Vigenère's algorithm
  \remarks None
*/
void vigenereCipher(char** str_string, int int_length, char* str_key, int int_keyLength);

#endif