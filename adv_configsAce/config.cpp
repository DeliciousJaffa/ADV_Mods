class CfgPatches
{
    class adv_configsAce
    {
        units[] = {
			"adv_Box_82mmShells_F"
		};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {
			"adv_configsVanilla"
			,"ace_smallarms"
			,"ace_ballistics"
			,"ace_grenades"
		};
		version = "1.01";
		versionStr = "1.01";
		author = "[SeL] Belbo // Adrian";
		authorUrl = "http://spezialeinheit-luchs.de/";
    };
};

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

#define standard_flare intensity = 50000;\
	flareSize = 18;\
	timeToLive = 60;

class CfgAmmo {
	class FlareCore;
    class FlareBase: FlareCore {
        standard_flare
	};
    class F_40mm_White: FlareBase {
        standard_flare
    };
	class Flare_82mm_AMOS_White : FlareCore {
        intensity = 120000;
        flareSize = 18;
		timeToLive = 60;
		aimAboveTarget[] = {20,40,80,120,160,200,240};
		aimAboveDefault = 4;
	};
};


class CfgWeapons
{
	class Rifle_Long_Base_F;
	
	class LMG_Mk200_F: Rifle_Long_Base_F {
		magazines[] += {"200Rnd_65x39_cased_Box_red","200Rnd_65x39_cased_Box_Tracer_red","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag"};
	};
	
	class LMG_03_base_F: Rifle_Long_Base_F {
		magazines[] += {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
	};
};

class cfgVehicles
{
	class Box_Syndicate_WpsLaunch_F;
	
	class adv_Box_82mmShells_F : Box_Syndicate_WpsLaunch_F {
		author = "[SeL] Belbo";
		displayName = "82mm Mortar Ammo";
		
		class TransportWeapons {};
		class TransportMagazines {
			MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_HE,16);
			MACRO_ADDMAGAZINE(ACE_1Rnd_82mm_Mo_Smoke,8);
		};
		class TransportItems {};
		class TransportBackpacks {};
	};

};