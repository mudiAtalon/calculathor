#pragma once
#include "pch.h"
#include "Node.h"

class BinaryOperation : public Node
{
public:
	enum class Operation : char
	{
		ADD='+', SUB='-', MUL='*', DIV='/', POW='^'
	};

	BinaryOperation(Node* left, Operation op, Node* right)
	{

		this->left = left;
		this->right = right;
		this->op = op;
	}

	double Node::calc();

	~BinaryOperation() override;
private:
	Node* left;
	Node* right;
	Operation op;
};