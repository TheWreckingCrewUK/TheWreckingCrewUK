params["_marker"];

if (_marker == "airbase1") exitWith {
	["Enemy MainHQ captured. All forces routed. Mission Completed.", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};

if (_marker == "airbase2")then {
	if(commanderBaseCount == 0) then {
		airbase2Respawn = [west, "airbase2"] call BIS_fnc_addRespawnPosition;
		publicVariable "airbase2Respawn";
	};
	boatRespawn call BIS_fnc_removeRespawnPosition;
};
	
hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";
[_marker, "SUCCEEDED", true] spawn BIS_fnc_taskSetState;


_rand = (random 100 || _marker != "commanderBase");
if(_rand < 40) exitWith{
	[_marker, _rand] spawn {sleep 10; [(_this select 0), (_this select 1)] call twc_attackDeciding};
};

[_marker]spawn{
	sleep 300;
	{ deleteVehicle _x } forEach allDead;

	_enemyVehicle = nearestObjects [getMarkerPos (_this select 0), ["Tank","Car","Truck"], 800];
	{
		if((typeOf _x) in friendlyVehiclesArray) then{
			_enemyVehicle = _enemyVehicle - [_x];
		};
	}forEach _enemyVehicle;

	{
		deleteVehicle _x
	}forEach _enemyVehicle;

	_enemy = nearestObjects [getMarkerPos (_this select 0), ["Man","WeaponHolder","GroundWeaponHolder"], 800];
	{
		if((side _x) == WEST) then{
			_enemy = _enemy - [_x];
		};
	}forEach _enemy;

	{
		deleteVehicle _x
	}forEach _enemy;

	{
		deleteGroup _x
	}forEach allGroups;
};

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";

if(count remainingArray == 0)then{
	["All Bases Captured. Stick around for the Insurgency Stratis", "hint", True, True] call BIS_fnc_MP;
	[] spawn {sleep 15; ["end1", false, 0] call BIS_fnc_endMission};
};