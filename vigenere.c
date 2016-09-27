#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * function that encrypts with vigenere`s cipher
*/

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        
        printf("Usage:.../ascimath key");
        return 1;
       
    }
  
    else
    {
        // get the string from the user
        string text = GetString();
        int length = strlen(text);
        int key = strlen(argv[1]);

            
            // loops through the text and key
        for(int i = 0, j = 0; i < length; i++)
        { 
            if (isalpha(text[i]))
            {
            // if key is upper make it lower
                if (isupper(argv[1][j]))
                {
                    argv[1][j] = tolower(argv[1][j]) - 'a';
                }
                else
                {
                    argv[1][j] = argv[1][j] - 'a';
                }
                    
                    // if is text upper
                if (isupper(text[i]))
                {
                    int repeat = j++ % key;
                    int cipher = ((text[i] - 'A') + argv[1][repeat]) % 26;
                    int result = cipher + 'A';
                    printf("%c", result);
                
                }
                    // if text is lower
                if (islower(text[i]))
                {
                    int repeat = j++ % key;
                    int cipher = ((text[i] - 'a') + argv[1][repeat]) % 26; 
                    int result = cipher + 'a';
                    printf("%c", result);
                }
                    
                }
                else
            {  
                // if text is not alpaha print it and continue
                printf("%c", text[i]);
                continue;
                  
            }
               
                }
    }
    // print new line
    printf("\n");
    return 0;
}
            
  
