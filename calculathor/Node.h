#pragma once
#include "pch.h"

class Node
{
public:
	virtual double calc() = 0;

	virtual ~Node()
	{
	}
};