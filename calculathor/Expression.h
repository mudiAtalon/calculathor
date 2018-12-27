#pragma once
#include "pch.h"
#include <string>
#include "Node.h"

class Expression : public Node
{
public:
	Expression(std::string text)
		: text(text)
	{
	}

	double Node::calc() override;

	~Expression() override;

private:
	std::string text;
	Node* son;

	void parse();
};