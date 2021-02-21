/*!
  \file cesar.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Header file for cesar.c
  \remarks None
*/

#ifndef _CESAR_H_
#define _CESAR_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void cesarCipher(char** str_string, int int_length, int int_shift)
  \author L.Draescher <draescherl@eisti.eu>
  \date 08/12/2020
  \version 0.1 - first draft
  \param str_string The string to cipher
  \param int_length The length of the string
  \param int_shift The shift to use
  \brief cipher a string of characters using a Cesar cipher
  \remarks None
*/
void cesarCipher(char** str_string, int int_length, int int_shift);

#endif