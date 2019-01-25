//This needs to be compiled as C++ to operate as a true mapper

#ifndef __MATH_NERD_H__
#define __MATH_NERD_H__

#ifdef __cplusplus
#include "CMathNerd.hpp"
extern "C" {
#endif


typedef void* MathNerd;

MathNerd new_MathNerd(int start);
void   del_MathNerd(MathNerd);

void MathNerd_Add(MathNerd m, int val);
int MathNerd_Val(MathNerd m);

#ifdef __cplusplus
}
#endif

#endif /* __MATH_NERD_H__ */
