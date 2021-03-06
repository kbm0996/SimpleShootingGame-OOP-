#ifndef __CONFIG_H__
#define __CONFIG_H__

//////////////////////////////////////////////////////////////
// CONSOLE
//
//////////////////////////////////////////////////////////////
// Screen Size
#define dfSCREEN_WIDTH		81		// horizontal 80 spaces + NULL
#define dfSCREEN_HEIGHT		25		// vertical 24 spaces 


//////////////////////////////////////////////////////////////
// LOGIC
//
//////////////////////////////////////////////////////////////
// Option
#define dfMAX_ENEMY 20
#define dfMAX_BULLET 50

// Scene
#define dfSCENE_STAGE1 200 
#define dfSCENE_STAGE2 201
#define dfSCENE_TITLE 202
#define dfSCENE_GAMEOVER 203
#define dfSCENE_PAUSE 204

// Player Move Direction
#define dfUP 1
#define dfDOWN 2
#define dfLEFT 3
#define dfRIGHT 4
#define dfUPLEFT 5
#define dfUPRIGHT 6
#define dfDOWNLEFT 7
#define dfDOWNRIGHT 8

// Action
#define dfATTACK 0
#define dfUP_ATTACK 10
#define dfDOWN_ATTACK 20
#define dfLEFT_ATTACK 30
#define dfRIGHT_ATTACK 40
#define dfUPLEFT_ATTACK 50
#define dfUPRIGHT_ATTACK 60
#define dfDOWNLEFT_ATTACK 70
#define dfDOWNRIGHT_ATTACK 80

// Key
#define dfENTER 100
#define dfESCAPE 101


//////////////////////////////////////////////////////////////
// OBJECT
//
//////////////////////////////////////////////////////////////
// Type
#define dfTYPE_ALLY 1
#define dfTYPE_ENEMY 2
#define dfTYPE_ALLY_BULLET 10
#define dfTYPE_ENEMY_BULLET 20
#define dfTYPE_ENEMY_SPECIAL_BULLET 30

// Player
#define dfSIZE_PLAYER_QUEUE 10
#endif // !__CONFIG_H__
