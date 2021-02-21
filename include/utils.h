/*!
  \file utils.h
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Header file for utils.c
  \remarks None
*/

#ifndef _UTILS_H_
#define _UTILS_H_

/* Additional librairies */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Global variables */
/*!
  \def INT_INPUT_ERROR
  Error if user didn't input an int
*/
#define INT_INPUT_ERROR -1


/* Function prototypes */
/*!
  \fn void stringInput(char** str_string, size_t* st_memory, int* int_length)
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \param str_string Where to store the text
  \param st_memory The amount of memory allocated to the string
  \param int_length The number of characters of the string + 1
  \brief Makes sure the user inputs a clean string
  \remarks None
*/
void stringInput(char** str_string, size_t* st_memory, int* int_length);

/*!
  \fn int intInput(void)
  \author L.Draescher <draescherl@eisti.eu>
  \date 13/10/2020
  \version 0.1 - first draft
  \return The user's input
  \brief This function makes sure the user inputs an int
  \remarks None
*/
int intInput(void);

/*!
  \fn void printHelp(void)
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Print help to terminal
  \remarks None
*/
void printHelp(void);

/*!
  \fn int argIsValid(char* str_argument)
  \author L.Draescher <draescherl@eisti.eu>
  \date 06/12/2020
  \version 0.1 - first draft
  \param str_argument The option given to the command
  \return An int corresponding to the cipher to call
  \brief Returns 1 for the Cesar cipher, 2 for the
  Vigenère cipher, 3 for the scytale cipher, 0 otherwise
  \remarks None
*/
int argIsValid(char* str_argument);

#endif