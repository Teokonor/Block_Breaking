#pragma once
#include "Const.h"
#include "cocos2d.h"

USING_NS_CC;

class Block {
	size_t Row, Col;
	Block* Left = NULL, * Up = NULL, * Right = NULL, * Down = NULL;
	Sprite* me;
	size_t colorNumber;
	float BlockSize;
	bool checked = false;
public:
	Block(size_t row, size_t col, float x0, float y0, float blockSize, size_t _colorNumber);
	void initNeighbors(Block* left, Block* up, Block* right, Block* down);
	void setConnections(Block* thisOrNull);
	~Block();

	size_t row() noexcept { return Row; }
	size_t col() noexcept { return Col; }
	Sprite* getSprite() noexcept { return me; }
	size_t colorNum() noexcept { return colorNumber; }
	Block* left() noexcept { return Left; }
	Block* up() noexcept { return Up; }
	Block* right() noexcept { return Right; }
	Block* down() noexcept { return Down; }

	bool notCheckedAndColorNumberIs(size_t colorNum);
	void uncheck() noexcept { checked = false; }
	void move(size_t newRow, size_t newCol, Block* left, Block* up, Block* right, Block* down);
};