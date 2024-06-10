#include "MathUtil.h"

bool MathUtil::CheckForCollision(Vec2 vector1, Vec2 vector2, int radius1, int radius2)
{
	Vec2 distanceVector = Vec2::SubtractVec2(vector1, vector2);
	if (Vec2::Vec2Lenght(distanceVector) <= radius1 + radius2)
	{
		return true;
	}
	else
		return false;
}