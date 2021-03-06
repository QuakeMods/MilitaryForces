#include "../game/q_shared.h"
#include "../qcommon/qfiles.h"
#include "../game/bg_public.h"
#include "bg_datamanager.h"
#include "bg_weaponinfo.h"




void						
WeaponInfo::createAllMissiles(WeaponList& weapons)
{
	WeaponInfo* wep = 0;

	// Sidewinder
	wep = createWeapon();
	wep->type_ = WT_ANTIAIRMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "AIM-9 Sidewinder";		
	wep->modelName_ = "models/weapons/vwep_sidewinder.md3";				
	wep->vwepName_ = "models/weapons/vwep_sidewinder.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_PLANE|CAT_HELO;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 1000;		
	wep->range_ = 1800;					
	wep->fuelRange_ = 2500;				
	wep->fireInterval_ = 400;			
	wep->damage_ = 70;				
	wep->damageRadius_ = 40;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.5f;				
	wep->followCone_ = 0.5f;			
	wep->lockDelay_ = 1000;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE|CAT_HELO;			
	wep->fitsPylon_ = WeaponInfo::PF_AAM_SW;				
	wep->basicECMVulnerability_ = 30;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// AMRAAM
	wep = createWeapon();
	wep->type_ = WT_ANTIAIRMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "AIM-120 AMRAAM";		
	wep->modelName_ = "models/weapons/vwep_amraam.md3";				
	wep->vwepName_ = "models/weapons/vwep_amraam.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_PLANE|CAT_HELO;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 1500;		
	wep->range_ = 4500;					
	wep->fuelRange_ = 6500;				
	wep->fireInterval_ = 600;			
	wep->damage_ = 90;				
	wep->damageRadius_ = 60;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.7f;				
	wep->followCone_ = 0.7f;			
	wep->lockDelay_ = 1500;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE;			
	wep->fitsPylon_ = WeaponInfo::PF_AAM_AM;				
	wep->basicECMVulnerability_ = 25;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// Phoenix
	wep = createWeapon();
	wep->type_ = WT_ANTIAIRMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "AIM-54 Phoenix";		
	wep->modelName_ = "models/weapons/vwep_phoenix.md3";				
	wep->vwepName_ = "models/weapons/vwep_phoenix.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_PLANE|CAT_HELO;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 3500;		
	wep->range_ = 18000;					
	wep->fuelRange_ = 20000;				
	wep->fireInterval_ = 1200;			
	wep->damage_ = 300;				
	wep->damageRadius_ = 120;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.985f;				
	wep->followCone_ = 0.985f;			
	wep->lockDelay_ = 3000;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE;			
	wep->fitsPylon_ = WeaponInfo::PF_AAM_PH;				
	wep->basicECMVulnerability_ = 15;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// Stinger
	wep = createWeapon();
	wep->type_ = WT_ANTIAIRMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "Stinger";		
	wep->modelName_ = "models/weapons/vwep_stinger.md3";				
	wep->vwepName_ = "models/weapons/vwep_stinger.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_PLANE|CAT_HELO;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 1100;		
	wep->range_ = 4500;					
	wep->fuelRange_ = 9000;				
	wep->fireInterval_ = 1000;			
	wep->damage_ = 60;				
	wep->damageRadius_ = 40;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.7f;				
	wep->followCone_ = 0.7f;			
	wep->lockDelay_ = 1500;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_ANY;			
	wep->fitsPylon_ = WeaponInfo::PF_AAM_ST;				
	wep->basicECMVulnerability_ = 25;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// Hellfire
	wep = createWeapon();
	wep->type_ = WT_ANTIGROUNDMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "Hellfire";		
	wep->modelName_ = "models/weapons/vwep_hellfire.md3";				
	wep->vwepName_ = "models/weapons/vwep_hellfire.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_GROUND;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 1000;		
	wep->range_ = 4500;					
	wep->fuelRange_ = 6500;				
	wep->fireInterval_ = 1500;			
	wep->damage_ = 150;				
	wep->damageRadius_ = 50;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.5f;				
	wep->followCone_ = 0.5f;			
	wep->lockDelay_ = 2500;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE;			
	wep->fitsPylon_ = WeaponInfo::PF_AGM_HF;				
	wep->basicECMVulnerability_ = 25;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// HARM
	wep = createWeapon();
	wep->type_ = WT_ANTIGROUNDMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "HARM";		
	wep->modelName_ = "models/weapons/vwep_harm.md3";				
	wep->vwepName_ = "models/weapons/vwep_harm.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_GROUND;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 3000;		
	wep->range_ = 5000;					
	wep->fuelRange_ = 6000;				
	wep->fireInterval_ = 500;			
	wep->damage_ = 300;				
	wep->damageRadius_ = 70;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.985f;				
	wep->followCone_ = 0.996f;			
	wep->lockDelay_ = 1700;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE;			
	wep->fitsPylon_ = WeaponInfo::PF_AGM_HM;				
	wep->basicECMVulnerability_ = 25;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);

	// Maverick
	wep = createWeapon();
	wep->type_ = WT_ANTIGROUNDMISSILE;					
	wep->gameSet_ = MF_GAMESET_MODERN;				
	wep->descriptiveName_ = "Maverick";		
	wep->modelName_ = "models/weapons/vwep_maverick.md3";				
	wep->vwepName_ = "models/weapons/vwep_maverick.md3";				
	wep->iconName_ = "hud/iconw_rkt.tga";				
	wep->targetCategory_ = CAT_GROUND;				
	wep->nonCatMod_ = 0.3f;				
	wep->muzzleVelocity_ = 3000;		
	wep->range_ = 5000;					
	wep->fuelRange_ = 6000;				
	wep->fireInterval_ = 500;			
	wep->damage_ = 300;				
	wep->damageRadius_ = 70;			
	wep->spread_ = 0;				
	wep->barrels_ = 2;				
	wep->barrelDistance_ = 0;		
	wep->lockCone_ = 0.985f;				
	wep->followCone_ = 0.996f;			
	wep->lockDelay_ = 1700;				
	wep->crosshair_ = CH_MISSILEMODE;				
	wep->crosshairTrack_ = CH_MISSILEMODETRACK;		
	wep->crosshairLock_ = CH_MISSILEMODELOCK;			
	wep->numberPerPackage_ = 1;		
	wep->fitsCategory_ = CAT_PLANE;			
	wep->fitsPylon_ = WeaponInfo::PF_AGM_MV;				
	wep->basicECMVulnerability_ = 25;	
	wep->flags_ = WF_HAS_FIRE_FRAME;
	weapons.push_back(wep);
}






