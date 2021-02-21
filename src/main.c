/*!
  \file main.c
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \brief Main project file
  \remarks None

  This project implements a few simple
  cipher algorithms to pratice string
  manipulation in C language.

*/

/* Additional librairies */
#include "cesar.h"
#include "scytale.h"
#include "vigenere.h"
#include "utils.h"



/*!
  \fn void cipherAlgorithm(int int_cipherToUse)
  \author L.Draescher <draescherl@eisti.eu>
  \date 08/12/2020
  \version 0.1 - first draft
  \param int_cipherToUse Number corresponding to the cipher to use
  \brief Calls the correct algorithm
  \remarks None
*/
void cipherAlgorithm(int int_cipherToUse)
{
  /* Variables */
  int int_shift;
  int int_stringLength;
  int int_keywordlength;
  char* str_text;
  char* str_key;
  size_t st_stringMemory;
  size_t st_keywordMemory;

  str_text = NULL;
  str_key = NULL;
  printf("Enter string to cipher : ");
  stringInput(&str_text, &st_stringMemory, &int_stringLength);

  switch (int_cipherToUse) {
  case 1 : /* Cesar */
    printf("Enter shift : ");
    int_shift = intInput();
    cesarCipher(&str_text, int_stringLength, int_shift);
    break;

  case 2 : /* Vigenere */
    printf("Enter key word : ");
    stringInput(&str_key, &st_keywordMemory, &int_keywordlength);
    vigenereCipher(&str_text, int_stringLength, str_key, int_keywordlength);
    break;

  case 3 : /* Scytale */
    scytaleCipher(&str_text, int_stringLength);
    break;
  
  default:
    break;
  }

  printf("Ciphered string : %s\n", str_text);

  /* Free memory */
  free(str_text);
  free(str_key);
}



/*!
  \fn int main(int argc, char** argv)
  \author L.Draescher <draescherl@eisti.eu>
  \date 04/12/2020
  \version 0.1 - first draft
  \param argc Number of console arguments
  \param argv Console parameters
  \return 0 on success
  \brief Main program
  \remarks None
*/
int main(int argc, char** argv) {
  /* Variables */
  int int_cipherToUse;

  /* If user has given 0 or more than
  two arguments then there is an error */
  if (argc != 2) {

    if (argc == 1) {
      printf("Error: too few arguments.\n");
    } else {
      printf("Error: too many arguments.\n");
    }
    printf("Help: ./cipher -h\n");

  } else {

    int_cipherToUse = argIsValid(argv[argc-1]);
    if (int_cipherToUse == -1) {
      printHelp();
    } else if (int_cipherToUse > 0) {
      cipherAlgorithm(int_cipherToUse);
    } else {
      printf("Error: unknown argument \"%s\".\n", argv[argc-1]);
    }

  }

  return(0);
}