 /*Dm Xenon#1337 for missing offsets/sigs */

	#DEFINE UWORLD 0xCC68A48 // not sure if this is right someone sent it to me too lazy to check
  uintptr_t OwningGameInstance = 0x1A8;
	uintptr_t LocalPlayers = 0x38;
	uintptr_t PlayerController = 0x30;
	uintptr_t PlayerCameraManager = 0x328;
	uintptr_t AcknowledgedPawn = 0x310;
	uintptr_t PrimaryPickupItemEntry = 0x2f8;
	uintptr_t ItemDefinition = 0x18;
	uintptr_t DisplayName = 0x90;
	uintptr_t Tier = 0x74;
	uintptr_t WeaponData = 0x3d8;
	uintptr_t LastFireTime = 0xa70;
	uintptr_t LastFireTimeVerified = 0xa74;
	uintptr_t LastFireAbilityTime = 0xd60;
	uintptr_t CurrentWeapon = 0x790;
	uintptr_t bADSWhileNotOnGround = 0x4805;

	uintptr_t Levels = 0x160;
	uintptr_t PersistentLevel = 0x30;
	uintptr_t AActors = 0x98;
	uintptr_t ActorCount = 0xA0;

	uintptr_t RootComponent = 0x188;
	uintptr_t FireStartLoc = 0x9f0;
	uintptr_t RelativeLocation = 0x128;
	uintptr_t RelativeRotation = 0x140;
	uintptr_t PlayerState = 0x290;
	uintptr_t Mesh = 0x2f0;
	uintptr_t TeamIndex = 0x1068;
/* ALL OF THE OFFSETS ABOVE *SHOULD* BE CORRECT AND UPDATED */

 /*Dm Xenon#1337 for missing offsets/sigs THE OFFSETS ABOVE THESE LINES HAVENMT BEEN UPDATED AS OF 6/13/22*/

class vtables{
	GetPlayerViewPoint = 0x7A8 //updated
	SetControlRotation = 0x718 //updated
	GetCameraLocation = 0x7B8 //updated           
	GetCameraRotation = 0x7B0 //updated         
	Process Event = 0x4D //updated                
	GetFOVAngle = 0x768 //updated                             
	Post Render = 0x6E //updated
	}
 /*Dm Xenon#1337 for missing vtables you might need */
