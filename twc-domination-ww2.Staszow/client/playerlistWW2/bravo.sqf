//made by hartzie edited by FakeMatty
_player9 = if(isNil "p9")then{"No-One"}else{(name p9)};
_player10 = if(isNil "p10")then{"No-One"}else{(name p10)};
_player11 = if(isNil "p11")then{"No-One"}else{(name p11)};
_player12 = if(isNil "p12")then{"No-One"}else{(name p12)};
_player13 = if(isNil "p13")then{"No-One"}else{(name p13)};
_player14 = if(isNil "p14")then{"No-One"}else{(name p14)};
_player15 = if(isNil "p15")then{"No-One"}else{(name p15)};
_player16 = if(isNil "p16")then{"No-One"}else{(name p16)};
_player17 = if(isNil "p17")then{"No-One"}else{(name p17)};



g_playerlist = [ ["Bravo US Army",      [["Bravo Squad Leader", [_player9, "Squad Leader"]], ["Fire Team 1", [_player10, "Fire Team Leader"], [_player11, "Rifleman"], [_player12, "Grenadier"], [_player13, "Automatic Rifleman"]], ["Fire Team 2", [_player14, "Fire Team Leader"], [_player15, "Automatic Rifleman"], [_player16, "Marksman"], [_player17, "Medic"]]]]				
				
				];

_bigheadline = "<t color='#CCCC00' size='1.5' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_headline = "<t color='#CCCC00' size='1.2' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_smallheadline = "<t color='#99CCFF' size='1.1' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_itemEmpty = "<t color='#99FFFF' size='1' shadow='1' shadowColor='#000000' align='left'>  Offline</t><br />";
_item = "<t color='#33CC00' size='1' shadow='1' shadowColor='#000000' align='left'>  %1</t><br />";
_text = "";


{
	//systemChat format["debug:%1", _x];
	_text = "";
	_text = _text + format[_bigheadline, _x select 0];
	{
		//systemChat format["debug:%1", _x];
		_text = _text + format[_headline, _x select 0];
		for "_i" from 1 to ((count _x) -1) do {
			_temp2 = _x select _i;
			_text = _text + format [_smallheadline, _temp2 select 1];
			if (_temp2 select 0 == "") then {
				_text = _text + _itemEmpty;
			} else {
				_text = _text + format [_item, _temp2 select 0];
			};
		};
	} forEach (_x select 1);
	hint parseText _text;
	sleep 7;
} forEach g_playerList;

