#pragma once

#include <string>
#include <vector>


#include <MasaEngine\SpriteBatch.h>
#include <MasaEngine\TilSheet.h>

#include "Defenisions.h"

class LevelManager
{
public:
	// load the level
	LevelManager(const std::string& fileName);
	~LevelManager();

	void draw();

	//getters
	int getWidth();
	int getHeight();
	int getNumMonsters() const ;
	glm::vec2 getStartPlayerPosition() const;
	glm::vec2 getGoalPosition() const;
	const std::vector<glm::vec2>& getMonstersStartPosition() const;
	const std::vector<std::string>& getLevelData() const;
	const char getSymbol(int x, int y);

	glm::vec2 getCameraPos(const glm::vec2& cameraPos, const glm::vec2& screenSize,const float scale);

private:
	std::vector<std::string> _levelData;

	MasaEngine::SpriteBatch _spriteBatch;
	MasaEngine::TileSheet _texture;

	glm::vec2 _startPlayerPosition;
	glm::vec2 _goalPosition;
	std::vector<glm::vec2> _monsterStartPositions;

	int _width = 0;
	int _height = 0;
	int _numMonsters = 0;
};

