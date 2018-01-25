#include <string>

#include "sampgdk/sampgdk.h"
#include "main.hpp"

namespace Plugins
{
	namespace Streamer
	{
		namespace Settings
		{
			int GetTickRate( )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetTickRate" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "" );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetTickRate( int rate )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetTickRate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", rate );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetPlayerTickRate( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetPlayerTickRate" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetPlayerTickRate( int playerid, int rate )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetPlayerTickRate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, rate );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleChunkStream( bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleChunkStream" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "b", toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleChunkStream( )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleChunkStream" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "" );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetChunkTickRate( int type, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetChunkTickRate" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ii", type, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetChunkTickRate( int type, int rate, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetChunkTickRate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", type, rate, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetChunkSize( int type )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetChunkSize" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", type );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetChunkSize( int type, int size )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetChunkSize" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, size );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetMaxItems( int type )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetMaxItems" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", type );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetMaxItems( int type, int items )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetMaxItems" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, items );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetVisibleItems( int type, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetVisibleItems" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ii", type, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetVisibleItems( int type, int items, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetVisibleItems" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", type, items, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetRadiusMultiplier( int type, float * multiplier, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetRadiusMultiplier" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iRi", type, multiplier, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetRadiusMultiplier( int type, float multiplier, int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetRadiusMultiplier" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifi", type, multiplier, playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetTypePriority( int types[ ], int maxtypes )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetTypePriority" );

				std::string function_format = std::string( "A[" ) + std::to_string( maxtypes ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), types, maxtypes );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetTypePriority( const int types[ ], int maxtypes )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetTypePriority" );

				std::string function_format = std::string( "a[" ) + std::to_string( maxtypes ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), types, maxtypes );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetCellDistance( float * distance )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetCellDistance" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "R", distance );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetCellDistance( float distance )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetCellDistance" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "f", distance );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetCellSize( float * size )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetCellSize" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "R", size );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetCellSize( float size )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetCellSize" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "f", size );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleItemStatic( int type, int id, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleItemStatic" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", type, id, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleItemStatic( int type, int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleItemStatic" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleItemInvAreas( int type, int id, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleItemInvAreas" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", type, id, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleItemInvAreas( int type, int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleItemInvAreas" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleItemCallbacks( int type, int id, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleItemCallbacks" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", type, id, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleItemCallbacks( int type, int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleItemCallbacks" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleErrorCallback( bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleErrorCallback" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "b", toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleErrorCallback( )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleErrorCallback" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "" );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Updates
		{
			bool ProcessActiveItems( )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ProcessActiveItems" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "" );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleIdleUpdate( int playerid, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleIdleUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", playerid, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleIdleUpdate( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleIdleUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleCameraUpdate( int playerid, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleCameraUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", playerid, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleCameraUpdate( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleCameraUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleItemUpdate( int playerid, int type, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleItemUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iib", playerid, type, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleItemUpdate( int playerid, int type )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleItemUpdate" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, type );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetLastUpdateTime( float * time )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetLastUpdateTime" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "R", time );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool Update( int playerid, int type )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_Update" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, type );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool UpdateEx( int playerid, float x, float y, float z, int worldid, int interiorid, int type, int compensatedtime, bool freezeplayer )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_UpdateEx" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifffiiiib", playerid, x, y, z, worldid, interiorid, type, compensatedtime, freezeplayer );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Data
		{
			bool GetFloatData( int type, int id, int data, float * result )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetFloatData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiiR", type, id, data, result );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetFloatData( int type, int id, int data, float value )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetFloatData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiif", type, id, data, value );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetIntData( int type, int id, int data )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetIntData" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iii", type, id, data );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetIntData( int type, int id, int data, int value )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetIntData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiii", type, id, data, value );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetArrayData( int type, int id, int data, int dest[ ], int maxdest )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetArrayData" );

				std::string function_format = std::string( "iiiA[" ) + std::to_string( maxdest ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), type, id, data, dest, maxdest );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetArrayData( int type, int id, int data, const int src[ ], int maxsrc )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetArrayData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiiai", type, id, data, src, maxsrc );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsInArrayData( int type, int id, int data, int value )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsInArrayData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiii", type, id, data, value );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AppendArrayData( int type, int id, int data, int value )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_AppendArrayData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiii", type, id, data, value );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool RemoveArrayData( int type, int id, int data, int value )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_RemoveArrayData" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiii", type, id, data, value );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetArrayDataLength( int type, int id, int data )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetArrayDataLength" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iii", type, id, data );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetUpperBound( int type )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetUpperBound" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", type );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}
		};

		namespace Miscellaneous
		{
			bool GetDistanceToItem( float x, float y, float z, int type, int id, float * distance, int dimensions )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetDistanceToItem" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "fffiiRi", x, y, z, type, id, distance, dimensions );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleItem( int playerid, int type, int id, int toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleItem" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiii", playerid, type, id, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleItem( int playerid, int type, int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsToggleItem" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", playerid, type, id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleAllItems( int playerid, int type, int toggle, const int exceptions[ ], int maxexceptions )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_ToggleAllItems" );

				std::string function_format = std::string( "iiia[" ) + std::to_string( maxexceptions ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), playerid, type, toggle, exceptions, maxexceptions );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetItemInternalID( int playerid, int type, int streamerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetItemInternalID" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iii", playerid, type, streamerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetItemStreamerID( int playerid, int type, int internalid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetItemStreamerID" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iii", playerid, type, internalid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool IsItemVisible( int playerid, int type, int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_IsItemVisible" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", playerid, type, id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool DestroyAllVisibleItems( int playerid, int type, int serverwide )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_DestroyAllVisibleItems" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iii", playerid, type, serverwide );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int CountVisibleItems( int playerid, int type, int serverwide )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_CountVisibleItems" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iii", playerid, type, serverwide );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool DestroyAllItems( int type, int serverwide )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_DestroyAllItems" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", type, serverwide );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int CountItems( int type, int serverwide )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_CountItems" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ii", type, serverwide );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetNearbyItems( float x, float y, float z, int type, int items[ ], int maxitems, float range )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetNearbyItems" );

				std::string function_format = std::string( "fffiA[" ) + std::to_string( maxitems ) + std::string( "]if" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), x, y, z, type, items, maxitems, range );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetAllVisibleItems( int playerid, int type, int items[ ], int maxitems )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetAllVisibleItems" );

				std::string function_format = std::string( "iiA[" ) + std::to_string( maxitems ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), playerid, type, items, maxitems );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool GetItemPos( int type, int id, float * x, float * y, float * z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetItemPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiRRR", type, id, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetItemPos( int type, int id, float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetItemPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iifff", type, id, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetItemOffset( int type, int id, float * x, float * y, float * z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_GetItemOffset" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiRRR", type, id, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetItemOffset( int type, int id, float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "Streamer_SetItemOffset" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iifff", type, id, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Object
		{
			int Create( int modelid, double x, double y, double z, double rx, double ry, double rz, int worldid, int interiorid, int playerid, float streamdistance, float drawdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicObject" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iffffffiiiffii", modelid, static_cast< float >( x ), static_cast< float >( y ), static_cast< float >( z ), static_cast< float >( rx ), static_cast< float >( ry ), static_cast< float >( rz ), worldid, interiorid, playerid, streamdistance, drawdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetPos( int objectid, float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicObjectPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifff", objectid, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetPos( int objectid, float * x, float * y, float * z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicObjectPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iRRR", objectid, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetRot( int objectid, float rx, float ry, float rz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicObjectRot" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifff", objectid, rx, ry, rz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetRot( int objectid, float * rx, float * ry, float * rz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicObjectRot" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iRRR", objectid, rx, ry, rz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetNoCameraCol( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicObjectNoCameraCol" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetNoCameraCol( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicObjectNoCameraCol" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool Move( int objectid, float x, float y, float z, float speed, float rx, float ry, float rz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "MoveDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifffffff", objectid, x, y, z, speed, rx, ry, rz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool Stop( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "StopDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsMoving( int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsDynamicObjectMoving" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachCameraTo( int playerid, int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachCameraToDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachToObject( int objectid, int attachtoid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz, int syncrotation )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicObjectToObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiffffffi", objectid, attachtoid, offsetx, offsety, offsetz, rx, ry, rz, syncrotation );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachToPlayer( int objectid, int playerid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicObjectToPlayer" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiffffff", objectid, playerid, offsetx, offsety, offsetz, rx, ry, rz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachToVehicle( int objectid, int vehicleid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicObjectToVehicle" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiffffff", objectid, vehicleid, offsetx, offsety, offsetz, rx, ry, rz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool Edit( int playerid, int objectid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "EditDynamicObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, objectid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsMaterialUsed( int objectid, int materialindex )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsDynamicObjectMaterialUsed" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", objectid, materialindex );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetMaterial( int objectid, int materialindex, int * modelid, char txdname[ ], char texturename[ ], int * materialcolor, int maxtxdname, int maxtexturename )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicObjectMaterial" );

				std::string function_format = std::string( "iiRS[" ) + std::to_string( maxtxdname ) + std::string( "]S[" ) + std::to_string( maxtexturename ) + std::string( "]Rii" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), objectid, materialindex, modelid, txdname, texturename, materialcolor, maxtxdname, maxtexturename );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetMaterial( int objectid, int materialindex, int modelid, const char txdname[ ], const char texturename[ ], int materialcolor )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicObjectMaterial" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiissi", objectid, materialindex, modelid, txdname, texturename, materialcolor );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsMaterialTextUsed( int objectid, int materialindex )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsDynamicObjectMaterialTextUsed" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", objectid, materialindex );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetMaterialText( int objectid, int materialindex, char text[ ], int * materialsize, char fontface[ ], int * fontsize, int * bold, int * fontcolor, int * backcolor, int * textalignment, int maxtext, int maxfontface )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicObjectMaterialText" );

				std::string function_format = std::string( "iiS[" ) + std::to_string( maxtext ) + std::string( "]RS[" ) + std::to_string( maxfontface ) + std::string( "]RRRRRii" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), objectid, materialindex, text, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment, maxtext, maxfontface );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetMaterialText( int objectid, int materialindex, const char text[ ], int materialsize, const char fontface[ ], int fontsize, int bold, int fontcolor, int backcolor, int textalignment )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicObjectMaterialText" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iisisiiiii", objectid, materialindex, text, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Pickup
		{
			int Create( int modelid, int type, float x, float y, float z, int worldid, int interiorid, int playerid, float streamdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicPickup" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iifffiiifii", modelid, type, x, y, z, worldid, interiorid, playerid, streamdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int pickupid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicPickup" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", pickupid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int pickupid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicPickup" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", pickupid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		}

		namespace CP
		{
			int Create( float x, float y, float z, float size, int worldid, int interiorid, int playerid, float streamdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicCP" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffiiifii", x, y, z, size, worldid, interiorid, playerid, streamdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsPlayerIn( int playerid, int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPlayerInDynamicCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetPlayerVisible( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerVisibleDynamicCP" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}
		};

		namespace RaceCP
		{
			int Create( int type, float x, float y, float z, float nextx, float nexty, float nextz, float size, int worldid, int interiorid, int playerid, float streamdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicRaceCP" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ifffffffiiifii", type, x, y, z, nextx, nexty, nextz, size, worldid, interiorid, playerid, streamdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicRaceCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicRaceCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsPlayerIn( int playerid, int checkpointid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPlayerInDynamicRaceCP" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", playerid, checkpointid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int IsPlayerIn( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerVisibleDynamicRaceCP" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}
		};

		namespace MapIcon
		{
			int Create( float x, float y, float z, int type, int color, int worldid, int interiorid, int playerid, float streamdistance, int style, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicMapIcon" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "fffiiiiifiii", x, y, z, type, color, worldid, interiorid, playerid, streamdistance, style, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateEx( float x, float y, float z, int type, int color, int style, float streamdistance, const int worlds[], const int interiors[], const int players[], const int areas[], int priority, int maxworlds, int maxinteriors, int maxplayers, int maxareas )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicMapIconEx" );

				std::string function_format = std::string( "fffiiif" ) +
												std::string( "a[" ) + std::to_string( maxworlds ) + std::string( "]" ) +
												std::string( "a[" ) + std::to_string( maxinteriors ) + std::string( "]" ) +
												std::string( "a[" ) + std::to_string( maxplayers ) + std::string( "]" ) +
												std::string( "a[" ) + std::to_string( maxareas ) + std::string( "]" ) +
											std::string( "iiiii" );

				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), x, y, z, type, color, style, streamdistance, worlds, interiors, players, areas, priority, maxworlds, maxinteriors, maxplayers, maxareas );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int iconid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicMapIcon" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", iconid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int iconid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicMapIcon" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", iconid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace TextLabel
		{
			int Create( const char text[], int color, float x, float y, float z, float drawdistance, int attachedplayer, int attachedvehicle, bool testlos, int worldid, int interiorid, int playerid, float streamdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamic3DTextLabel" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "siffffiibiiifii", text, color, x, y, z, drawdistance, attachedplayer, attachedvehicle, testlos, worldid, interiorid, playerid, streamdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamic3DTextLabel" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int id )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamic3DTextLabel" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", id );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetText( int id, char text[ ], int maxtext )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamic3DTextLabelText" );

				std::string function_format = std::string( "iS[" ) + std::to_string( maxtext ) + std::string( "]i" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), id, text, maxtext );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool UpdateText( int id, int color, const char text[ ] )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "UpdateDynamic3DTextLabelText" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iis", id, color, text );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Area
		{
			int CreateCircle( float x, float y, float size, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicCircle" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "fffiiii", x, y, size, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateCylinder( float x, float y, float minz, float maxz, float size, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicCylinder" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "fffffiiii", x, y, minz, maxz, size, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateSphere( float x, float y, float z, float size, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicSphere" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffiiii", x, y, z, size, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateRectangle( float minx, float miny, float maxx, float maxy, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicRectangle" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffiiii", minx, miny, maxx, maxy, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateCuboid( float minx, float miny, float minz, float maxx, float maxy, float maxz, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicCuboid" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffffiiii", minx, miny, minz, maxx, maxy, maxz, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreateCube( float minx, float miny, float minz, float maxx, float maxy, float maxz, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicCube" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffffiiii", minx, miny, minz, maxx, maxy, maxz, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int CreatePolygon( const float points[ ], float minz, float maxz, int maxpoints, int worldid, int interiorid, int playerid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicPolygon" );

				std::string function_format = std::string( "a[" ) + std::to_string( maxpoints ) + std::string( "]ffiiiii" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), points, minz, maxz, maxpoints, worldid, interiorid, playerid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int areaid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", areaid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int areaid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", areaid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetType( int areaid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicAreaType" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", areaid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetDynamicPolygonPoints( int areaid, float points[ ], int maxpoints )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicPolygonPoints" );

				std::string function_format = std::string( "iA[" ) + std::to_string( maxpoints ) + std::string( "]i" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), areaid, points, maxpoints );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetDynamicPolygonNumberPoints( int areaid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicPolygonNumberPoints" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", areaid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool IsPlayerIn( int playerid, int areaid, bool recheck )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPlayerInDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iib", playerid, areaid, recheck );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsPlayerInAny( int playerid, bool recheck )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPlayerInAnyDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", playerid, recheck );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsAnyPlayerIn( int areaid, bool recheck )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsAnyPlayerInDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", areaid, recheck );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsAnyPlayerInAny( bool recheck )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsAnyPlayerInAnyDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "b", recheck );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetPlayerDynamicAreas( int playerid, int areas[ ], int maxareas )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerDynamicAreas" );

				std::string function_format = std::string( "iA[" ) + std::to_string( maxareas ) + std::string( "]i" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), playerid, areas, maxareas );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetPlayerNumber( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerNumberDynamicAreas" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool IsPointIn( int areaid, float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPointInDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifff", areaid, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsPointInAny( float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsPointInAnyDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "fff", x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsLineIn( int areaid, float x1, float y1, float z1, float x2, float y2, float z2 )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsLineInDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iffffff", areaid, x1, y1, z1, x2, y2, z2 );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsLineInAny( float x1, float y1, float z1, float x2, float y2, float z2 )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsLineInAnyDynamicArea" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ffffff", x1, y1, z1, x2, y2, z2 );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetDynamicAreasForPoint( float x, float y, float z, int areas[ ], int maxareas )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicAreasForPoint" );

				std::string function_format = std::string( "fffA[" ) + std::to_string( maxareas ) + std::string( "]i" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), x, y, z, areas, maxareas );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetNumberDynamicAreasForPoint( float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetNumberDynamicAreasForPoint" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "fff", x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetDynamicAreasForLine( float x1, float y1, float z1, float x2, float y2, float z2, int areas[ ], int maxareas )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicAreasForLine" );

				std::string function_format = std::string( "ffffffA[" ) + std::to_string( maxareas ) + std::string( "]i" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, function_format.c_str( ), x1, y1, z1, x2, y2, z2, areas, maxareas );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			int GetNumberForLine( float x1, float y1, float z1, float x2, float y2, float z2 )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetNumberDynamicAreasForLine" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "ffffff", x1, y1, z1, x2, y2, z2 );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool AttachToObject( int areaid, int objectid, int type, int playerid, float offsetx, float offsety, float offsetz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicAreaToObject" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iiiifff", areaid, objectid, type, playerid, offsetx, offsety, offsetz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachToPlayer( int areaid, int playerid, float offsetx, float offsety, float offsetz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicAreaToPlayer" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iifff", areaid, playerid, offsetx, offsety, offsetz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool AttachToVehicle( int areaid, int vehicleid, float offsetx, float offsety, float offsetz )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "AttachDynamicAreaToVehicle" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iifff", areaid, vehicleid, offsetx, offsety, offsetz );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ToggleSpectateMode( int areaid, bool toggle )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "ToggleDynAreaSpectateMode" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", areaid, toggle );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsToggleSpectateMode( int areaid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsToggleDynAreaSpectateMode" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", areaid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}
		};

		namespace Actor
		{
			int Create( int modelid, float x, float y, float z, float r, bool invulnerable, float health, int worldid, int interiorid, int playerid, float streamdistance, int areaid, int priority )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "CreateDynamicActor" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "iffffbfiiifii", modelid, x, y, z, r, invulnerable, health, worldid, interiorid, playerid, streamdistance, areaid, priority );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool Destroy( int actorid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "DestroyDynamicActor" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", actorid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsValid( int actorid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsValidDynamicActor" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", actorid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsStreamedIn( int actorid, int forplayerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsDynamicActorStreamedIn" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", actorid, forplayerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetVirtualWorld( int actorid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicActorVirtualWorld" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", actorid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}

			bool SetVirtualWorld( int actorid, int vworld )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicActorVirtualWorld" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ii", actorid, vworld );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetAnimation( int actorid, char animlib[ ], char animname[ ], float * fdelta, bool * loop, int * lockx, int * locky, int * freeze, int * time, int maxanimlib, int maxanimname )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicActorAnimation" );

				std::string function_format = std::string( "iS[" ) + std::to_string( maxanimlib ) + std::string( "]S[" ) + std::to_string( maxanimname ) + std::string( "]RRRRRRii" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, function_format.c_str( ), actorid, animlib, animname, fdelta, loop, lockx, locky, freeze, time, maxanimlib, maxanimname );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ApplyAnimation( int actorid, const char animlib[ ], const char animname[ ], float fdelta, bool loop, int lockx, int locky, int freeze, int time )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "ApplyDynamicActorAnimation" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "issfbiiii", actorid, animlib, animname, fdelta, loop, lockx, locky, freeze, time );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool ClearAnimations( int actorid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "ClearDynamicActorAnimations" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", actorid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetFacingAngle( int actorid, float * ang )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicActorFacingAngle" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iRRR", actorid, ang );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetFacingAngle( int actorid, float ang )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicActorFacingAngle" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "if", actorid, ang );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetPos( int actorid, float * x, float * y, float * z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicActorPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iRRR", actorid, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetPos( int actorid, float x, float y, float z )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicActorPos" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ifff", actorid, x, y, z );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool GetHealth( int actorid, float * health )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetDynamicActorHealth" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "iR", actorid, health );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetHealth( int actorid, float health )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicActorHealth" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "if", actorid, health );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool SetInvulnerable( int actorid, bool invulnerable )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "SetDynamicActorInvulnerable" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "ib", actorid, invulnerable );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			bool IsInvulnerable( int actorid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "IsDynamicActorInvulnerable" );
				if( Native != NULL ) return !!sampgdk::InvokeNative( Native, "i", actorid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetPlayerTarget( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerTargetDynamicActor" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), false;
			}

			int GetPlayerCameraTarget( int playerid )
			{
				static AMX_NATIVE Native = sampgdk::FindNative( "GetPlayerCameraTargetDynActor" );
				if( Native != NULL ) return sampgdk::InvokeNative( Native, "i", playerid );
				else return sampgdk::logprintf( "'" __FILE__ "' / '%s' - Function not discovered !", __func__ ), 0;
			}
		};
	};
};

PLUGIN_EXPORT bool PLUGIN_CALL OnPublicCall( AMX * amx, const char * name, cell * params, cell * retval )
{
	std::string lName = std::string( name );

	if( lName == "OnDynamicObjectMoved" ) { return OnDynamicObjectMoved( static_cast< int >( params[ 1 ] ) ); } // ( int objectid )
	else if( lName == "OnPlayerEditDynamicObject" ) { return OnPlayerEditDynamicObject( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ), static_cast< int >( params[ 3 ] ), amx_ctof( params[ 4 ] ), amx_ctof( params[ 5 ] ), amx_ctof( params[ 6 ] ), amx_ctof( params[ 7 ] ), amx_ctof( params[ 8 ] ), amx_ctof( params[ 9 ] ) ); } // ( int playerid, int objectid, int response, float x, float y, float z, float rx, float ry, float rz )
	else if( lName == "OnPlayerSelectDynamicObject" ) { return OnPlayerSelectDynamicObject( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ), static_cast< int >( params[ 3 ] ), amx_ctof( params[ 4 ] ), amx_ctof( params[ 5 ] ), amx_ctof( params[ 6 ] ) ); } // ( int playerid, int objectid, int modelid, float x, float y, float z )
	else if( lName == "OnPlayerShootDynamicObject" ) { return OnPlayerShootDynamicObject( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ), static_cast< int >( params[ 3 ] ), amx_ctof( params[ 4 ] ), amx_ctof( params[ 5 ] ), amx_ctof( params[ 6 ] ) ); } // ( int playerid, int weaponid, int objectid, float x, float y, float z )
	else if( lName == "OnPlayerPickUpDynamicPickup" ) { return OnPlayerPickUpDynamicPickup( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int pickupid )
	else if( lName == "OnPlayerEnterDynamicCP" ) { return OnPlayerEnterDynamicCP( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int checkpointid )
	else if( lName == "OnPlayerLeaveDynamicCP" ) { return OnPlayerLeaveDynamicCP( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int checkpointid )
	else if( lName == "OnPlayerEnterDynamicRaceCP" ) { return OnPlayerEnterDynamicRaceCP( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int checkpointid )
	else if( lName == "OnPlayerLeaveDynamicRaceCP" ) { return OnPlayerLeaveDynamicRaceCP( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int checkpointid )
	else if( lName == "OnPlayerEnterDynamicArea" ) { return OnPlayerEnterDynamicArea( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int areaid )
	else if( lName == "OnPlayerLeaveDynamicArea" ) { return OnPlayerLeaveDynamicArea( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int playerid, int areaid )
	else if( lName == "OnPlayerGiveDamageDynamicActor" ) { return OnPlayerGiveDamageDynamicActor( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ), amx_ctof( params[ 3 ] ), static_cast< int >( params[ 4 ] ), static_cast< int >( params[ 5 ] ) ); } // ( playerid, int actorid, float amount, int weaponid, int bodypart );
	else if( lName == "OnDynamicActorStreamIn" ) { return OnDynamicActorStreamIn( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int actorid, int forplayerid );
	else if( lName == "OnDynamicActorStreamOut" ) { return OnDynamicActorStreamOut( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int actorid, int forplayerid );
	else if( lName == "Streamer_OnItemStreamIn" ) { return Streamer_OnItemStreamIn( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int type, int id );
	else if( lName == "Streamer_OnItemStreamOut" ) { return Streamer_OnItemStreamOut( static_cast< int >( params[ 1 ] ), static_cast< int >( params[ 2 ] ) ); } // ( int type, int id );
	else if( lName == "Streamer_OnPluginError" ) // ( const char error[ ] )
	{
		cell * lAddress = nullptr;
		amx_GetAddr( amx, params[ 1 ], &lAddress );

		int lLength = 0;
		amx_StrLen( lAddress, &lLength );

		std::string lString( lLength, ' ' );
		amx_GetString( &lString[ 0 ], lAddress, 0, lLength + 1 );

		return Streamer_OnPluginError( lString.c_str( ) );
	}

	return 1;
}