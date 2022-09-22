#include "Player.h"

#include <math.h>

#define square(x) x * x
constexpr double PI = 3.141592653589793238462643383279502884197169399375105820974944592;

#include "Offsets.h"

Player* Player::GetPlayer(int index)
{
	static uintptr_t clientModule = ModuleHandle(client.dll);
	static uintptr_t entityList = clientModule + offsets::dwEntityList;

	std::cout << clientModule << " + " << offsets::dwEntityList << "\n";

	std::cout << entityList << "\n";

	return (Player*)(entityList + index * 0x10);
}

int* Player::GetMaxPlayer()
{
	static uintptr_t engineModule = ModuleHandle(engine.dll);
	return (int*)(*(uintptr_t*)(engineModule + offsets::dwClientState) + offsets::dwClientState_MaxPlayer);
}

LocalPlayer* LocalPlayer::Get()
{
	static uintptr_t clientModule = ModuleHandle(client.dll);
	static LocalPlayer* localPlayer = (LocalPlayer*)(clientModule + offsets::dwLocalPlayer);

	return localPlayer;
}

vec3* Player::GetOrigin()
{
	return (vec3*)(*(uintptr_t*)this + offsets::m_vecOrigin);
}

vec3* Player::GetViewOffset()
{
	return (vec3*)(*(uintptr_t*)this + offsets::m_vecViewOffset);
}

int* Player::GetHealth()
{
	return (int*)(*(uintptr_t*)this + offsets::m_iHealth);
}

int* Player::GetTeam()
{
	return (int*)(*(uintptr_t*)this + offsets::m_iTeamNum);
}

vec3* Player::GetBonePos(int boneID)
{
	uintptr_t boneMatrix = *(uintptr_t*)(*(uintptr_t*)this + offsets::m_dwBoneMatrix);
	static vec3 bonePos;

	bonePos.x = *(float*)(boneMatrix + 0x30 * boneID + 0x0C);
	bonePos.x = *(float*)(boneMatrix + 0x30 * boneID + 0x1C);
	bonePos.x = *(float*)(boneMatrix + 0x30 * boneID + 0x2C);
	return &bonePos;
}

Player* LocalPlayer::GetClosestEnemy()
{
	LocalPlayer* localPlayer = this;

	float closestDistance = 1000000;
	int closestDistanceIndex = -1;

	for (int i = 1; i < *Player::GetMaxPlayer(); i++)
	{
		Player* currentPlayer = Player::GetPlayer(i);

		std::cout << currentPlayer << "\n";

		if (!currentPlayer || !(*(uintptr_t*)currentPlayer) || (uintptr_t)currentPlayer == (uintptr_t)localPlayer)
		{
			continue;
		}

		std::cout << "first\n";

		if (*currentPlayer->GetTeam() == *localPlayer->GetTeam())
		{
			continue;
		}

		std::cout << "second\n";

		if (*currentPlayer->GetHealth() < 1 || *localPlayer->GetHealth() < 1)
		{
			continue;
		}

		std::cout << "third\n";

		float currentDistance = localPlayer->GetDistance(currentPlayer->GetOrigin());
		std::cout << currentDistance << "\n";

		if (currentDistance < closestDistance)
		{
			closestDistance = currentDistance;
			closestDistanceIndex = i;

			std::cout << "new closest player :) index: " << closestDistanceIndex << "\n";
		}
	}

	if (closestDistanceIndex == -1)
	{
		return NULL;
	}

	std::cout << "closest player: " << closestDistanceIndex << "\n";

	return Player::GetPlayer(closestDistanceIndex);
}

float LocalPlayer::GetDistance(vec3* target)
{
	vec3* origin = GetOrigin();
	vec3 delta = vec3(origin->x - target->x, origin->y - target->y, origin->z - target->z);
	
	return sqrt(square(delta.x) + square(delta.y) + square(delta.z));
}

void LocalPlayer::AimAt(vec3* target)
{
	static uintptr_t engineModule = ModuleHandle(engine.dll);
	static vec3* viewAngles = (vec3*)(*(uintptr_t*)(engineModule + offsets::dwClientState) + offsets::dwClientState_ViewAngles);

	vec3 origin = *GetOrigin();
	vec3 viewOffset = *GetViewOffset();
	vec3 temp = origin + viewOffset;
	vec3* myPos = &temp;

	vec3 deltaVec = { target->x - myPos->x, target->y - myPos->y, target->z - myPos->z };
	float deltaVecLength = sqrt(deltaVec.x * deltaVec.x + deltaVec.y * deltaVec.y + deltaVec.z * deltaVec.z);

	float pitch = asin(deltaVec.z / deltaVecLength) * (180 / PI);
	float yaw = atan2(deltaVec.y, deltaVec.x) * (180 / PI);

	if (pitch >= -89 && pitch <= 89 && yaw >= -180 && yaw <= 180)
	{
		viewAngles->x = pitch;
		viewAngles->y = yaw;
	}
}