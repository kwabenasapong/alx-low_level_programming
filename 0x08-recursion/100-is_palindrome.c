include <stdio.h>

/**
 * is_palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if no
 * @s: pointer to char variable
 *
 * Return: 1 if true or 0 if false
 *
 */
int is_palindrome(char *s)
{
    /* Initialize local variables*/
    int result, len, i = 0, j = _strlen(s) - 1;

    /* Compare original string to reversed string */
    while (i < (_strlen(s) - 1))
    {
        if (s[i] != s[j])
        {
            result = 0;
            break;
        }
        else
            result = 1;
    i++;
    j--;
    }
        return (result);
}
