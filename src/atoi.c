/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * atoi.c
 * 
 */

/******************************************************
 *                      Include Files
 ******************************************************/

#include <stdio.h>

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

/******************************************************
 *               Function Declarations
 ******************************************************/

int atoi(const char *str);

/******************************************************
 *            Interrupt Handlers Mapping
 ******************************************************/

/******************************************************
 *               Variables Definitions
 ******************************************************/

/******************************************************
 *               Function Definitions
 ******************************************************/

/**
 * Main entry point for clearBits 
 */
int main(int argc, char *argv)
{
    char mystr[256] = "-0123456789";
    printf("the input string is %s and output is %d \n", mystr, atoi(mystr));
    return 0;
}

/**
 * convert char string into integer 
 *
 * @param str[in]      : char pointer 
 * 
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 * @return integer 
 *
 */
int atoi(const char *str)
{
    int value = 0;
    char negative = 1;
    char *ch = (char *)str;

    /* check for negative values */
    if (*ch == '-')
    {
        negative = -1;
        ch++;
    }
    while (*ch != '\0')
    {
        if ((*ch < 47) || (*ch > 57))
        {
            return 0;
        }
        value = (*ch - 48) + value * 10;
        ch++;
    }

    return (value * negative);
}