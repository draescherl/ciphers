/*!
  \file scytale.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Header file for scytale.c
  \remarks None
*/

#ifndef _SCYTALE_H_
#define _SCYTALE_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Global variables */


/* Function prototypes */
/*!
  \fn void scytaleCipher(char** str_string, int int_length)
  \author L.Draescher <draescherl@eisti.eu>
  \date 05/12/2020
  \version 0.1 - first draft
  \param str_string The string to cipher
  \param int_length The length of the string
  \brief cipher a string of characters using a scytale cipher
  \remarks None
*/
void scytaleCipher(char** str_string, int int_length);

#endif