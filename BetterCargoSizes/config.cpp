class CfgPatches
{
	class BetterCargoSizes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Pants"  
		};
	};
};
class CfgMods
{
	class BetterCargoSizes
	{
		dir="BetterCargoSizes";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="BetterCargoSizes";
		credits="Seristic - Bringing BCS to life | Spurgle - Helping out a fuck ton with his Tutorials!."; 
		author="Seristic";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		/*class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"BetterCargoSizes/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BetterCargoSizes/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"BetterCargoSizes/scripts/5_mission"
				};
			};
		};*/
	};
};
class CfgVehicles
{
        class Clothing;
    	class ShortJeans_ColorBase: Clothing
	{
		scope=0;=
		itemSize[]={2,1}; //Default Value(s) = {3,1}
		heatIsolation=0.102; //This is a 2% increase from it's default value "0.1"
		itemsCargoSize[]={4,2}; //Default Value(s) = {5,4}
	};
	class Clothing_Base;
	// class Clothing: Clothing_Base

	class Jeans_ColorBase: Clothing
	//Jeans
	{
		itemSize[]={3,2};
		itemsCargoSize[]={7,2};
		heatIsolation=0.6090576; //This is roughly a 1.576% increase from it's default value "0.60000002"
	};
	class CargoPants_ColorBase: Clothing
	//Cargo Pants
	{
		itemSize[]={4,2}; //Default Value(s) = {4,3}
		itemsCargoSize[]={10,2}; //Default Value(s) = {6,4}
		weight=574; //Default Value = 530
		ragQuantity=4; //Default Value = 3
		heatIsolation=0.8320000336; //This is a 4% increase from it's default value "0.80000001"
	};
	class TTSKOPants: Clothing
	//Combat gear is being replaced by alternative mod.
	{
		scope=2;
		itemSize[]={7,7};
		itemsCargoSize[]={0,0};
		weight=2500;
		ragQuantity=3;
		varWetMax=0.79000002;
		heatIsolation=0.0;
	};
	class HunterPants_ColorBase: Clothing
	//Hunter Pants
	{
		itemSize[]={4,2}; //Default Value(s) = {4,3}
		itemsCargoSize[]={9,2}; //Default Value(s) = {6,4}
		weight=730; //Default Value = 630
		ragQuantity=4; //Default Value = 3
		heatIsolation=0.97445; //This is a 2.555% decrease from it's default value "1"
	}; 
	class CanvasPants_ColorBase: Clothing
	//Canvas/Hiking Pants
	{
		itemSize[]={3,2}; //Default Value(s) = {3,2}
		itemsCargoSize[]={4,2}; //Default Value(s) = {4,2}
		weight=330; //Default Value = 370
		ragQuantity=1; //Default Value = 3
		heatIsolation=0.283412004; //This is a 2.555% decrease from it's default value "0.30000001"
	};
	class CanvasPantsMidi_ColorBase: Clothing
	//Cropped Canvas/Hiking Pants
	{
		itemSize[]={3,2}; //Default Value(s) = {3,2}
		itemsCargoSize[]={4,2}; //Default Value(s) = {5,4}
		weight=330; //Default Value = 370
		ragQuantity=1; //Default Value = 3
		heatIsolation=0.19181; //This is a 4.555% decrease from it's default value "0.2"
		repairCosts[]={15,30}; //Default Value(s) = {30,25}
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		itemSize[]={2,2}; //Default Value(s) = {3,2}
		itemsCargoSize[]={4,2}; //Default Value(s) = {5,4}
		weight=400; //Default Value = 490
		ragQuantity=1; //Default Value = 3
		heatIsolation=0.5; //This is a 0.4575% decrease from it's default value "0.5"
	};
	class GorkaPants_ColorBase: Clothing
	{
		itemSize[]={4,2}; //Default Value(s) = {4,3}
		itemsCargoSize[]={10,2}; //Default Value(s) = {6,5}
		weight=590; //Default Value = 400
		varWetMax=0.249;
		heatIsolation=0.4186; //This is a 0.4575% decrease from it's default value "0.40000001"
	};
	class PolicePantsOrel: Clothing
    	{
    	itemSize[]={4,2}; //Default Value(s) = {4,3}
    	itemsCargoSize[]={8,2}; //Default Value(s) = {6,4}
    	ragQuantity=4; //Default Value = 3
    	heatIsolation=0.535; //This is a 3.5% decrease from it's default value "0.5"
    };
    class ParamedicPants_ColorBase: Clothing
    	{
    	itemSize[]={4,2}; //Default Value(s) = {4,3}
    	itemsCargoSize[]={9,2}; //Default Value(s) = {6,4}
    	weight=440; //Default Value = 390
    	ragQuantity=4; //Default Value = 3
    	heatIsolation=0.5175; //This is a 3.5% decrease from it's default value "0.5"
        };
    class FirefightersPants_ColorBase: Clothing
        {
        itemSize[]={4,2}; //Default Value(s) = {4,4}
        itemsCargoSize[]={10,2}; //Default Value(s) = {6,4}
        ragQuantity=4; //Default Value = 3
        varWetMax=0.249;
        heatIsolation=1.0432; //This is a 4.32% decrease from it's default value "1"
        };
    class PrisonUniformPants: Clothing
	    {
		itemSize[]={3,2}; //Default Value(s) = {4,2}
		itemsCargoSize[]={5,4}; //Default Value(s) = {4,3}
		weight=280; //Default Value = 310
		ragQuantity=2; //Default Value = 3
		heatIsolation=0.30333000111;
	    };
    class LeatherPants_ColorBase: Clothing
	    {
		itemSize[]={4,2}; //Default Value(s) = 4,4
		itemsCargoSize[]={7,2}; //Default Value(s) = 6,4
		weight=310; //Default Value = 590
		heatIsolation=1.03588; //This is a 3.588% decrease from it's default value "1"
	    };
	class MedicalScrubsPants_ColorBase: Clothing
        	{
        itemSize[]={2,2};
        itemsCargoSize[]={6,2};
        weight=340;
        ragQuantity=3;
        heatIsolation=0.1; //Default Value = 0.1
        };
    class USMCPants_ColorBase: Clothing
	    {
		itemSize[]={4,2}; //Default Value(s) = 4,3
		itemsCargoSize[]={10,2}; //Default Value(s) = 6,5
		weight=945; //Default Value(s) = 872
		ragQuantity=2; //Default Value(s) = 2
		heatIsolation=0.608580000286; //This is a 1.43% decrease from it's default value "0.60000002"
	    };
    class SlacksPants_ColorBase: Clothing
	    {
		itemSize[]={3,2}; //Default Value(s) = 3,2
		itemsCargoSize[]={4,2}; //Default Value(s) = 5,4
		weight=160; //Default Value = 184
		ragQuantity=1; //Default Value = 3
		heatIsolation=0.95000001; //This is a 0.55% decrease from it's default value "0.40000001"
		};
    class BDUPants: Clothing
	    {
		itemSize[]={4,2};
		itemsCargoSize[]={8,3}; //Default Value(s) = 6,5
		heatIsolation=0.6325120244; //This is a 5.42% decrease from it's default value "0.60000002 "
	    };
    class NBCPantsBase: Clothing
	    {

		itemSize[]={3,2}; //Default Value(s) = 3,2
		itemsCargoSize[]={5,2}; //Default Value(s) = 5,4
		weight=300; //Default Value = 520
		heatIsolation=0.40000001; //This is a 0% decrease/increase from it's default value "0.40000001"
        };
    class Breeches_ColorBase: Clothing
    	{
    	itemSize[]={3,2};
    	ItemsCargoSize[]={6,2};
    	weight=410;
    	heatIsolation=0.305280008176; //This is a 0% decrease/increase from it's default value "0.30000001"
    	};
};