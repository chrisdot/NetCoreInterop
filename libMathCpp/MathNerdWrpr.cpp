#include <stdlib.h>
#include "MathNerdWrpr.hpp"
#include "CMathNerd.hpp"



MathNerd new_MathNerd(int start)
{
	return reinterpret_cast<void*>(new CMathNerd(start));
} 

void del_MathNerd(MathNerd o_instance) 
{
	delete reinterpret_cast<CMathNerd*>(o_instance);
}


void MathNerd_Add(MathNerd o_instance, int val)
{
	return reinterpret_cast<CMathNerd*>(o_instance)->Add(val);
}

int MathNerd_Val(MathNerd o_instance)
{
	return reinterpret_cast<CMathNerd*>(o_instance)->Val();
} 

