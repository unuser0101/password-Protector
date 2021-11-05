//
// Created by anonymous on 11/5/21.
//

#include "function_header.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

char existing_file(char *filename)
{
   FILE *password_document;
   bool exist = false;
   char encrypt_psss[80];
   char pass[80];
    //Checks if the file exists or not
   if (access(filename, F_OK) == 0)
   {
       exist = true;
       fprintf(stderr, "The response is %d", exist);
   }
    else
    {
        password_document = fopen(filename, "w");
        printf("Type your new password: ");
        scanf("%s", pass);
        encrypt_psss[80] = encryption(pass); //Gets the plaintext password and encrypts it
        fprintf(password_document, "%s", &pass); //passing the encrypted password to the file
        fclose(password_document);
    }


}
