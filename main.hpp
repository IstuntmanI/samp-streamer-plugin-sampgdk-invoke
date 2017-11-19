#ifndef STREAMER_H
#define STREAMER_H

#include <string>

#include <sampgdk/sampgdk.h>

// Definitions

#define STREAMER_TYPE_OBJECT (0)
#define STREAMER_TYPE_PICKUP (1)
#define STREAMER_TYPE_CP (2)
#define STREAMER_TYPE_RACE_CP (3)
#define STREAMER_TYPE_MAP_ICON (4)
#define STREAMER_TYPE_3D_TEXT_LABEL (5)
#define STREAMER_TYPE_AREA (6)
#define STREAMER_TYPE_ACTOR (6)

#define STREAMER_AREA_TYPE_CIRCLE (0)
#define STREAMER_AREA_TYPE_CYLINDER (1)
#define STREAMER_AREA_TYPE_SPHERE (2)
#define STREAMER_AREA_TYPE_RECTANGLE (3)
#define STREAMER_AREA_TYPE_CUBOID (4)
#define STREAMER_AREA_TYPE_POLYGON (5)

#define STREAMER_OBJECT_TYPE_GLOBAL (0)
#define STREAMER_OBJECT_TYPE_PLAYER (1)
#define STREAMER_OBJECT_TYPE_DYNAMIC (2)

#define STREAMER_MAX_TYPES (8)
#define STREAMER_MAX_AREA_TYPES (5)
#define STREAMER_MAX_OBJECT_TYPES (3)

#define INVALID_STREAMER_ID (0)

#if !defined STREAMER_OBJECT_SD
	#define STREAMER_OBJECT_SD 300.0
#endif
#if !defined STREAMER_OBJECT_DD
	#define STREAMER_OBJECT_DD 0.0
#endif
#if !defined STREAMER_PICKUP_SD
	#define STREAMER_PICKUP_SD 200.0
#endif
#if !defined STREAMER_CP_SD
	#define STREAMER_CP_SD 200.0
#endif
#if !defined STREAMER_RACE_CP_SD
	#define STREAMER_RACE_CP_SD 200.0
#endif
#if !defined STREAMER_MAP_ICON_SD
	#define STREAMER_MAP_ICON_SD 200.0
#endif
#if !defined STREAMER_3D_TEXT_LABEL_SD
	#define STREAMER_3D_TEXT_LABEL_SD 200.0
#endif

#if !defined STREAMER_ACTOR_SD
	#define STREAMER_ACTOR_SD 200.0
#endif

// Enumerator

enum
{
	E_STREAMER_AREA_ID,
	E_STREAMER_ATTACHED_OBJECT,
	E_STREAMER_ATTACHED_PLAYER,
	E_STREAMER_ATTACHED_VEHICLE,
	E_STREAMER_ATTACH_OFFSET_X,
	E_STREAMER_ATTACH_OFFSET_Y,
	E_STREAMER_ATTACH_OFFSET_Z,
	E_STREAMER_ATTACH_R_X,
	E_STREAMER_ATTACH_R_Y,
	E_STREAMER_ATTACH_R_Z,
	E_STREAMER_ATTACH_X,
	E_STREAMER_ATTACH_Y,
	E_STREAMER_ATTACH_Z,
	E_STREAMER_COLOR,
	E_STREAMER_DRAW_DISTANCE,
	E_STREAMER_EXTRA_ID,
	E_STREAMER_HEALTH,
	E_STREAMER_INTERIOR_ID,
	E_STREAMER_INVULNERABLE,
	E_STREAMER_MAX_X,
	E_STREAMER_MAX_Y,
	E_STREAMER_MAX_Z,
	E_STREAMER_MIN_X,
	E_STREAMER_MIN_Y,
	E_STREAMER_MIN_Z,
	E_STREAMER_MODEL_ID,
	E_STREAMER_MOVE_R_X,
	E_STREAMER_MOVE_R_Y,
	E_STREAMER_MOVE_R_Z,
	E_STREAMER_MOVE_SPEED,
	E_STREAMER_MOVE_X,
	E_STREAMER_MOVE_Y,
	E_STREAMER_MOVE_Z,
	E_STREAMER_NEXT_X,
	E_STREAMER_NEXT_Y,
	E_STREAMER_NEXT_Z,
	E_STREAMER_PLAYER_ID,
	E_STREAMER_PRIORITY,
	E_STREAMER_ROTATION,
	E_STREAMER_R_X,
	E_STREAMER_R_Y,
	E_STREAMER_R_Z,
	E_STREAMER_SIZE,
	E_STREAMER_STREAM_DISTANCE,
	E_STREAMER_STYLE,
	E_STREAMER_SYNC_ROTATION,
	E_STREAMER_TEST_LOS,
	E_STREAMER_TYPE,
	E_STREAMER_WORLD_ID,
	E_STREAMER_X,
	E_STREAMER_Y,
	E_STREAMER_Z
};

namespace Plugins
{
	namespace Streamer
	{
		namespace Settings
		{
			int GetTickRate( );
			bool SetTickRate( int rate );
			int GetPlayerTickRate( int playerid );
			bool SetPlayerTickRate( int playerid, int rate );
			bool ToggleChunkStream( bool toggle );
			bool IsToggleChunkStream( );
			int GetChunkTickRate( int type, int playerid = -1 );
			bool SetChunkTickRate( int type, int rate, int playerid = -1 );
			int GetChunkSize( int type );
			bool SetChunkSize( int type, int size );
			int GetMaxItems( int type );
			bool SetMaxItems( int type, int items );
			int GetVisibleItems( int type, int playerid = -1 );
			bool SetVisibleItems( int type, int items, int playerid = -1 );
			bool GetRadiusMultiplier( int type, float * multiplier, int playerid = -1 );
			bool SetRadiusMultiplier( int type, float multiplier, int playerid = -1 );
			bool GetTypePriority( int types[ ], int maxtypes );
			bool SetTypePriority( const int types[ ], int maxtypes );
			bool GetCellDistance( float * distance );
			bool SetCellDistance( float distance );
			bool GetCellSize( float * size );
			bool SetCellSize( float size );
			bool ToggleItemStatic( int type, int id, bool toggle );
			bool IsToggleItemStatic( int type, int id );
			bool ToggleItemInvAreas( int type, int id, bool toggle );
			bool IsToggleItemInvAreas( int type, int id );
			bool ToggleItemCallbacks( int type, int id, bool toggle );
			bool IsToggleItemCallbacks( int type, int id );
			bool ToggleErrorCallback( bool toggle );
			bool IsToggleErrorCallback( );
		};

		namespace Updates
		{
			bool ProcessActiveItems( );
			bool ToggleIdleUpdate( int playerid, bool toggle );
			bool IsToggleIdleUpdate( int playerid );
			bool ToggleCameraUpdate( int playerid, bool toggle );
			bool IsToggleCameraUpdate( int playerid );
			bool ToggleItemUpdate( int playerid, int type, bool toggle );
			bool IsToggleItemUpdate( int playerid, int type );
			bool GetLastUpdateTime( float * time );
			bool Update( int playerid, int type = -1 );
			bool UpdateEx( int playerid, float x, float y, float z, int worldid = -1, int interiorid = -1, int type = -1, int compensatedtime = -1, bool freezeplayer = 1 );
		};

		namespace Data
		{
			bool GetFloatData( int type, int id, int data, float * result );
			bool SetFloatData( int type, int id, int data, float value );
			int GetIntData( int type, int id, int data );
			bool SetIntData( int type, int id, int data, int value );
			bool GetArrayData( int type, int id, int data, int dest[ ], int maxdest );
			bool SetArrayData( int type, int id, int data, const int src[ ], int maxsrc );
			bool IsInArrayData( int type, int id, int data, int value );
			bool AppendArrayData( int type, int id, int data, int value );
			bool RemoveArrayData( int type, int id, int data, int value );
			int GetUpperBound( int type );
		};

		namespace Miscellaneous
		{
			bool GetDistanceToItem( float x, float y, float z, int type, int id, float * distance, int dimensions = 3 );
			bool ToggleItem( int playerid, int type, int id, int toggle );
			bool IsToggleItem( int playerid, int type, int id );
			bool ToggleAllItems( int playerid, int type, int toggle, int exceptions[ ], int maxexceptions );
			int GetItemInternalID( int playerid, int type, int streamerid );
			int GetItemStreamerID( int playerid, int type, int internalid );
			bool IsItemVisible( int playerid, int type, int id );
			bool DestroyAllVisibleItems( int playerid, int type, int serverwide = 1 );
			int CountVisibleItems( int playerid, int type, int serverwide = 1 );
			bool DestroyAllItems( int type, int serverwide = 1 );
			int CountItems( int type, int serverwide = 1 );
			int GetNearbyItems( float x, float y, float z, int type, int items[ ], int maxitems, float range = 300.0 );
			int GetAllVisibleItems( int playerid, int type, int items[ ], int maxitems );
			bool GetItemOffset( int type, int id, float * x, float * y, float * z );
			bool SetItemOffset( int type, int id, float x, float y, float z );
		};

		namespace Object
		{
			int Create( int modelid, double x, double y, double z, double rx, double ry, double rz, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_OBJECT_SD, float drawdistance = STREAMER_OBJECT_DD, int areaid = -1, int priority = 0 );
			bool Destroy( int objectid );
			bool IsValid( int objectid );
			bool SetPos( int objectid, float x, float y, float z );
			bool GetPos( int objectid, float * x, float * y, float * z );
			bool SetRot( int objectid, float rx, float ry, float rz );
			bool GetRot( int objectid, float * rx, float * ry, float * rz );
			bool SetNoCameraCol( int objectid );
			bool GetNoCameraCol( int objectid );
			bool Move( int objectid, float x, float y, float z, float speed, float rx = -1000.0, float ry = -1000.0, float rz = -1000.0 );
			bool Stop( int objectid );
			bool IsMoving( int objectid );
			bool AttachCameraTo( int playerid, int objectid );
			bool AttachToObject( int objectid, int attachtoid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz, int syncrotation = 1 );
			bool AttachToPlayer( int objectid, int playerid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz );
			bool AttachToVehicle( int objectid, int vehicleid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz );
			bool Edit( int playerid, int objectid );
			bool IsMaterialUsed( int objectid, int materialindex );
			bool GetMaterial( int objectid, int materialindex, int * modelid, char txdname[ ], char texturename[ ], int * materialcolor, int maxtxdname, int maxtexturename );
			bool SetMaterial( int objectid, int materialindex, int modelid, const char txdname[ ], const char texturename[ ], int materialcolor = 0 );
			bool IsMaterialTextUsed( int objectid, int materialindex );
			bool GetMaterialText( int objectid, int materialindex, char text[ ], int * materialsize, char fontface[ ], int * fontsize, int * bold, int * fontcolor, int * backcolor, int * textalignment, int maxtext, int maxfontface );
			bool SetMaterialText( int objectid, int materialindex, const char text[ ], int materialsize = OBJECT_MATERIAL_SIZE_256x128, const char fontface[ ] = "Arial", int fontsize = 24, int bold = 1, int fontcolor = 0xFFFFFFFF, int backcolor = 0, int textalignment = 0 );
		};

		namespace Pickup
		{
			int Create( int modelid, int type, float x, float y, float z, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_PICKUP_SD, int areaid = -1, int priority = 0 );
			bool Destroy( int pickupid );
			bool IsValid( int pickupid );
		};

		namespace CP
		{
			int Create( float x, float y, float z, float size, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_CP_SD, int areaid = -1, int priority = 0 );
			bool Destroy( int checkpointid );
			bool IsValid( int checkpointid );
			bool IsPlayerIn( int playerid, int checkpointid );
			int GetPlayerVisible( int playerid );
		};

		namespace RaceCP
		{
			int Create( int type, float x, float y, float z, float nextx, float nexty, float nextz, float size, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_RACE_CP_SD, int areaid = -1, int priority = 0 );
			bool Destroy( int checkpointid );
			bool IsValid( int checkpointid );
			bool IsPlayerIn( int playerid, int checkpointid );
			int IsPlayerIn( int playerid );
		};

		namespace MapIcon
		{
			int Create( float x, float y, float z, int type, int color, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_MAP_ICON_SD, int style = MAPICON_LOCAL, int areaid = -1, int priority = 0 );
			int CreateEx( float x, float y, float z, int type, int color, int style, float streamdistance, const int worlds[], const int interiors[], const int players[], const int areas[], int priority, int maxworlds, int maxinteriors, int maxplayers, int maxareas );
			bool Destroy( int iconid );
			bool IsValid( int iconid );
		};

		namespace TextLabel
		{
			int Create( const char text[], int color, float x, float y, float z, float drawdistance, int attachedplayer = INVALID_PLAYER_ID, int attachedvehicle = INVALID_VEHICLE_ID, bool testlos = 0, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_3D_TEXT_LABEL_SD, int areaid = -1, int priority = 0 );
			bool Destroy( int id );
			bool IsValid( int id );
			bool GetText( int id, char text[ ], int maxtext );
			bool UpdateText( int id, int color, const char text[ ] );
		};

		namespace Area
		{
			int CreateCircle( float x, float y, float size, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreateCylinder( float x, float y, float minz, float maxz, float size, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreateSphere( float x, float y, float z, float size, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreateRectangle( float minx, float miny, float maxx, float maxy, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreateCuboid( float minx, float miny, float minz, float maxx, float maxy, float maxz, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreateCube( float minx, float miny, float minz, float maxx, float maxy, float maxz, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			int CreatePolygon( const float points[ ], float minz, float maxz, int maxpoints, int worldid = -1, int interiorid = -1, int playerid = -1, int priority = 0 );
			bool Destroy( int areaid );
			bool IsValid( int areaid );
			int GetDynamicPolygonPoints( int areaid, float points[ ], int maxpoints );
			int GetDynamicPolygonNumberPoints( int areaid );
			bool IsPlayerIn( int playerid, int areaid, bool recheck = 0 );
			bool IsPlayerInAny( int playerid, bool recheck = 0 );
			bool IsAnyPlayerIn( int areaid, bool recheck = 0 );
			bool IsAnyPlayerInAny( bool recheck = 0 );
			int GetPlayerDynamicAreas( int playerid, int areas[ ], int maxareas );
			int GetPlayerNumber( int playerid );
			bool IsPointIn( int areaid, float x, float y, float z );
			bool IsPointInAny( float x, float y, float z );
			bool IsLineIn( int areaid, float x1, float y1, float z1, float x2, float y2, float z2 );
			bool IsLineInAny( float x1, float y1, float z1, float x2, float y2, float z2 );
			int GetDynamicAreasForPoint( float x, float y, float z, int areas[ ], int maxareas );
			int GetNumberDynamicAreasForPoint( float x, float y, float z );
			int GetDynamicAreasForLine( float x1, float y1, float z1, float x2, float y2, float z2, int areas[ ], int maxareas );
			int GetNumberForLine( float x1, float y1, float z1, float x2, float y2, float z2 );
			bool AttachToObject( int areaid, int objectid, int type = STREAMER_OBJECT_TYPE_DYNAMIC, int playerid = INVALID_PLAYER_ID, float offsetx = 0.0, float offsety = 0.0, float offsetz = 0.0 );
			bool AttachToPlayer( int areaid, int playerid, float offsetx = 0.0, float offsety = 0.0, float offsetz = 0.0 );
			bool AttachToVehicle( int areaid, int vehicleid, float offsetx = 0.0, float offsety = 0.0, float offsetz = 0.0 );
			bool ToggleSpectateMode( int areaid, bool toggle );
			bool IsToggleSpectateMode( int areaid );
		};

		namespace Actor
		{
			int Create( int modelid, float x, float y, float z, float r, bool invulnerable = 1, float health = 100.0, int worldid = -1, int interiorid = -1, int playerid = -1, float streamdistance = STREAMER_ACTOR_SD, int areaid = -1, int priority = 0 );
			bool Destroy( int actorid );
			bool IsValid( int actorid );
			bool IsStreamedIn( int actorid, int forplayerid );
			int GetVirtualWorld( int actorid );
			bool SetVirtualWorld( int actorid, int vworld );
			bool ApplyAnimation( int actorid, const char animlib[ ], const char animname[ ], float fdelta, bool loop, int lockx, int locky, int freeze, int time );
			bool ClearAnimations( int actorid );
			bool GetFacingAngle( int actorid, float * ang );
			bool SetFacingAngle( int actorid, float ang );
			bool GetPos( int actorid, float * x, float * y, float * z );
			bool SetPos( int actorid, float x, float y, float z );
			bool GetHealth( int actorid, float * health );
			bool SetHealth( int actorid, float health );
			bool SetInvulnerable( int actorid, bool invulnerable = 1 );
			bool IsInvulnerable( int actorid );
			int GetPlayerTarget( int playerid );
			int GetPlayerCameraTarget( int playerid );
		};
	};
};

bool OnDynamicObjectMoved( int objectid );
bool OnPlayerEditDynamicObject( int playerid, int objectid, int response, float x, float y, float z, float rx, float ry, float rz );
bool OnPlayerSelectDynamicObject( int playerid, int objectid, int modelid, float x, float y, float z );
bool OnPlayerShootDynamicObject( int playerid, int weaponid, int objectid, float x, float y, float z );
bool OnPlayerPickUpDynamicPickup( int playerid, int pickupid );
bool OnPlayerEnterDynamicCP( int playerid, int checkpointid );
bool OnPlayerLeaveDynamicCP( int playerid, int checkpointid );
bool OnPlayerEnterDynamicRaceCP( int playerid, int checkpointid );
bool OnPlayerLeaveDynamicRaceCP( int playerid, int checkpointid );
bool OnPlayerEnterDynamicArea( int playerid, int areaid );
bool OnPlayerLeaveDynamicArea( int playerid, int areaid );
bool OnPlayerGiveDamageDynamicActor( int playerid, int actorid, float amount, int weaponid, int bodypart );
bool OnDynamicActorStreamIn( int actorid, int forplayerid );
bool OnDynamicActorStreamOut( int actorid, int forplayerid );
bool Streamer_OnItemStreamIn( int type, int id );
bool Streamer_OnItemStreamOut( int type, int id );
bool Streamer_OnPluginError( char error[ ] );

#endif