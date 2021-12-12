#pragma once


namespace Renderer_Defines {
	float Width;
	float Height;
}



namespace Settings
{
	//Aim
	static bool Aim = 1;
	static bool AimPrediction = 0;
	static bool MouseAim = 0;
	int aimbone = 66;
	int smooth = 3;
	static bool SilentAim = 0;
	int FovCircle_Value = 130;
	
	

	//Player ESP
	static bool Box = 1;
	static int  BoxTypeSelected = 1;
	static bool Skeleton = 1;
	static bool DistanceESP = 1;
	static bool SnapLines = 0;
	
	//Loot ESP
	static bool ChestESP = 0;
	static bool LLamaESP = 0;
	static bool WeaponESP = 0;
	static bool LootESP = 0;
	static bool AmmoBoxESP = 0;
	static bool VehiclesESP = 0;


	//Exploits
	static bool VehicleFly = 0;

	//Misc

	static int MaxESPDistance = 300;
	static bool crosshair = 0;
	static bool ShowFovCircle = 1;
	static bool trigger = 0;
	static bool VisibleCheck = 1;
	


}