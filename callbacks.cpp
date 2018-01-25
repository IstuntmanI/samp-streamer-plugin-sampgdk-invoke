/*
	This file is just an example, you have to define all these callbacks in any .cpp file of your project as shown here,
	otherwise you will get some linking errors because they are called without being defined.
*/

#include "streamer.hpp"

bool OnDynamicObjectMoved( int objectid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerEditDynamicObject( int playerid, int objectid, int response, float x, float y, float z, float rx, float ry, float rz )
{
	// your plugin's code
	return 1;
}

bool OnPlayerSelectDynamicObject( int playerid, int objectid, int modelid, float x, float y, float z )
{
	// your plugin's code
	return 1;
}

bool OnPlayerShootDynamicObject( int playerid, int weaponid, int objectid, float x, float y, float z )
{
	// your plugin's code
	return 1;
}

bool OnPlayerPickUpDynamicPickup( int playerid, int pickupid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerEnterDynamicCP( int playerid, int checkpointid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerLeaveDynamicCP( int playerid, int checkpointid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerEnterDynamicRaceCP( int playerid, int checkpointid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerLeaveDynamicRaceCP( int playerid, int checkpointid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerEnterDynamicArea( int playerid, int areaid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerLeaveDynamicArea( int playerid, int areaid )
{
	// your plugin's code
	return 1;
}

bool OnPlayerGiveDamageDynamicActor( int playerid, int actorid, float amount, int weaponid, int bodypart )
{
	// your plugin's code
	return 1;
}

bool OnDynamicActorStreamIn( int actorid, int forplayerid )
{
	// your plugin's code
	return 1;
}

bool OnDynamicActorStreamOut( int actorid, int forplayerid )
{
	// your plugin's code
	return 1;
}

bool Streamer_OnItemStreamIn( int type, int id )
{
	// your plugin's code
	return 1;
}

bool Streamer_OnItemStreamOut( int type, int id )
{
	// your plugin's code
	return 1;
}

bool Streamer_OnPluginError( const char error[ ] )
{
	// your plugin's code
	return 1;
}
