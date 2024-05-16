#pragma once
#include <vector>
#include <string>

namespace Const {
	constexpr size_t windowWidth = 640, windowHeight = 512;
	constexpr size_t startLines = 10, startColumns = 16, startColors = 3;
	constexpr float buttonStartHeight = 3. / 40., buttonStartY = 9. / 10., buttonStartZoneHeight = 1. / 10.;
	constexpr float indentToPLayingField = 1. / 20.;
	constexpr float fadeDuration = 0.2, fadeDelay = 0.05;
	constexpr size_t blocksFallingSpeed = 10;
	constexpr size_t blocksMaxQuantity = 8;
	const std::string blockFileNames[] = { "block0.png", "block1.png", "block2.png", "block3.png",
		"block4.png", "block5.png", "block6.png", "block7.png" };
	constexpr size_t maxLines = 30, minLines = 3, maxCols = 50, minCols = 3, maxColors = blocksMaxQuantity, minColors = 1;
}