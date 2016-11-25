/*
 * Copyright 2016, Sandesh J. Ghimire
 * All Rights Reserved.
 */

/** @file
 * memory.c
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

void *memmove(void *dest, const void *src, size_t count);
void *memcpy(void *dest, const void *src, size_t count);

/******************************************************
 *       Test Suite  Function Declarations
 ******************************************************/

void memcpy_test1();
void memcpy_test2();

void memmove_test1();

void memmove_test2();

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

    memcpy_test1(); // memcpy test 1

    memcpy_test2(); // memcpy test 2

    memmove_test1(); // memcpy test 1

    memmove_test2(); // memcpy test 2

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
void *memmove(void *dest, const void *src, size_t count)
{
    size_t i = 0;
    char *p1 = (char *)dest;
    const char *p2 = (const char *)src;

    if (p1 > p2)
    {
        for (i = 0; i < count; i++)
        {
            *(p1++) = *(p2++);
        }
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            *(p1++) = *(p2++);
        }
    }
}
/**
 * copyes memory content from one location to another 
 *
 * @param src[in]      : source of memory  
 * @parm dest[in]      : destination memory location 
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 * @return errors  
 *
 */
void *memcpy(void *dest, const void *src, size_t count)
{
    size_t i = 0;
    char *p1 = (char *)dest;
    const char *p2 = (const char *)src;

    for (i = count; i > 0; i--)
    {
        *(p1 + i) = *(p2 + i);
    }
}

/******************************************************
 *               Test Suite 
 ******************************************************/
/**
 * memcpy test 1
 *
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 *
 */
void memcpy_test1()
{
    char src[256] = "This land is my land, this land is your land";
    char dest[2560];
    printf("the source string is %s \nthe destination is %s \n", src, dest);
    (void)memcpy(dest, src, 50);
    printf("the source string is %s \nthe destination is %s \n", src, dest);
}

/**
 * memcpy test 2
 *
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 *
 */
void memcpy_test2()
{
    char src[256] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    char dest[2560];
    printf("the source string is %s \nthe destination is %s \n", src, dest);
    (void)memcpy(dest, src, 350);
    printf("the source string is %s \nthe destination is %s \n", src, dest);
}

/**
 * memmove test 1
 *
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 *
 */
void memmove_test1()
{
    char src[256] = "This land is my land, this land is your land";
    char dest[2560];
    printf("the source string is %s \nthe destination is %s \n", src, dest);
    (void)memmove(dest, src, 50);
    printf("the source string is %s \nthe destination is %s \n", src, dest);
}

/**
 * memmove test 2
 *
 *
 * @note: This is not a generic function and does not support all architecture 
 * @bugs: Has not been fully tested 
 *
 *
 */
void memmove_test2()
{
    char src[256] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    char dest[2560];
    printf("the source string is %s \nthe destination is %s \n", src, dest);
    (void)memmove(dest, src, 350);
    printf("the source string is %s \nthe destination is %s \n", src, dest);
}
