#pragma once

#include "Internal.h"

#define HEAD 8

class Player
{
public:
	static int* GetMaxPlayer();
	static Player* GetPlayer(int index);

	vec3* GetOrigin();
	vec3* GetViewOffset();
	vec3* GetBonePos(int boneID);
	int* GetHealth();
	int* GetTeam();

private:
	Player() {}
};

class LocalPlayer : public Player
{
public:
	static LocalPlayer* Get();

	Player* GetClosestEnemy();

	void AimAt(vec3* target);
	float GetDistance(vec3* target);
};