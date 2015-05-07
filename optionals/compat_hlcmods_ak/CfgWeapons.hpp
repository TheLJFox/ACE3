class CfgWeapons
{
    class optic_dms;
	class hlc_ak_base;
    class hlc_rifle_ak12;
    class InventoryOpticsItem_Base_F;
	class hlc_rifle_ak74: hlc_ak_base
	{
		ACE_barrelTwist=0.199898;
		ACE_barrelLength=0.41402;
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		ACE_barrelTwist=0.16002;
		ACE_barrelLength=0.21082;
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		ACE_barrelLength=0.58928;
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		ACE_barrelTwist=0.16002;
		ACE_barrelLength=0.21082;
	};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		ACE_barrelTwist=0.24003;
		ACE_barrelLength=0.41402;
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		ACE_barrelTwist=0.199898;
		ACE_barrelLength=0.41402;
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		ACE_barrelTwist=0.24003;
		ACE_barrelLength=0.58928;
	};
	class hlc_rifle_rpk74n: hlc_rifle_rpk
	{
		ACE_barrelTwist=0.24003;
		ACE_barrelLength=0.58928;
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
        ACE_barrelTwist=0.2413;
        ACE_barrelLength=0.4318;
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
        ACE_barrelTwist=0.0;
        ACE_twistDirection=0;
        ACE_barrelLength=0.42926;
    };
    
    class HLC_Optic_PSO1 : optic_dms {
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { -10, 10 };
        ACE_ScopeAdjust_Increment = 0.5;
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
					discreteDistance[]={100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex=3;
                };
            };
        };
    };    
    class HLC_Optic_1p29 : HLC_Optic_PSO1 {
        ACE_ScopeAdjust_Vertical[] = {};
        ACE_ScopeAdjust_Horizontal[] = {};
        ACE_ScopeAdjust_Increment = 0;
    };
};