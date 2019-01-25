#include "CMathNerd.hpp"

CMathNerd::CMathNerd(int start)
{
	value = start;
}

void CMathNerd::Add(int val)
{
	value += val;
}

int CMathNerd::Val()
{
	return value;
}