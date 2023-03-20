#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * File: 3-function_like_macro.h
 * Desc: This header file defines a function-like macro named ABS(x)
 *       that computes the absolute value of a number x.
 *       The macro uses the ternary operator to check if x is less than 0.
 *       If x is less than 0, the macro returns -x (the negation of x).
 *       If x is greater than or equal to 0, the macro returns x.
 */

#define ABS(x) ((x) < 0 ? (-x) : (x))

#endif
