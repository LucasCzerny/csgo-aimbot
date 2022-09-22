#pragma once

#include <Windows.h>
#include <TlHelp32.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

#define ModuleHandle(moduleName) (uintptr_t)GetModuleHandle(L#moduleName)

struct vec2
{
	float x, y;

	vec2() {}

	vec2(float _x, float _y)
		: x(_x), y(_y) {}

	vec2 operator+(vec2 other)
	{
		return { x + other.x, y + other.y };
	}

	vec2 operator-(vec2 other)
	{
		return { x - other.x, y - other.y };
	}

	vec2 operator*(float value)
	{
		return { x * value, y * value };
	}

	void Normalize()
	{
		float length = sqrt(x * x * y * y);
		x *= length;
		y *= length;
	}
};

struct vec3
{
	float x, y, z;

	vec3() {}

	vec3(float _x, float _y, float _z)
		: x(_x), y(_y), z(_z) {}

	vec3 operator+(vec3 other)
	{
		return { x + other.x, y + other.y, z + other.z};
	}

	vec3 operator-(vec3 other)
	{
		return { x - other.x, y - other.y, z - other.z };
	}

	vec3 operator*(float value)
	{
		return { x * value, y * value, z * value };
	}

	void Normalize()
	{
		float length = sqrt(x * x * y * y * z * z);
		x *= length;
		y *= length;
		z *= length;
	}

	void NormalizeCSGO()
	{
		while (y < -180) { y += 360; }
		while (y > 180) { y -= 360; }
		if (x > 89) { x = 89; }
		if (x < -89) { x = -89; }
	}
};

struct vec4
{
	float x, y, z, a;

	vec4() {}

	vec4(float _x, float _y, float _z, float _a)
		: x(_x), y(_y), z(_z), a(_a) {}

	vec4 operator+(vec4 other)
	{
		return { x + other.x, y + other.y, z + other.z, a + other.a };
	}

	vec4 operator-(vec4 other)
	{
		return { x - other.x, y - other.y, z - other.z, a - other.a };
	}

	vec4 operator*(float value)
	{
		return { x * value, y * value, z * value, a * value };
	}

	void Normalize()
	{
		float length = sqrt(x * x * y * y * z * z * a * a);
		x *= length;
		y *= length;
		z *= length;
		a *= length;
	}
};