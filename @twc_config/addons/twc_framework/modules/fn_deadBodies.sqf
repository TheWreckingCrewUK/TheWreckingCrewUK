params ["_enabled"];

if !(_enabled) exitWith {};

if (getMarkerColor "base" == "") exitWith {systemChat "Dead Body cleanup in base is Enabled, but no base marker is defined"};

while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "base", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 1;
};