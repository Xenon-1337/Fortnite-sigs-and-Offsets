 /*Dm Xenon#1337 for missing offsets/sigs */

  uintptr_t OwningGameInstance = 0x1a8;
	uintptr_t LocalPlayers = 0x38;
	uintptr_t PlayerController = 0x30;
	uintptr_t PlayerCameraManager = 0x328;
	uintptr_t AcknowledgedPawn = 0x310;
	uintptr_t PrimaryPickupItemEntry = 0x2f8;
	uintptr_t ItemDefinition = 0x18;
	uintptr_t DisplayName = 0x90;
	uintptr_t Tier = 0x74;
	uintptr_t CurrentVehicle = 0x2158;
	uintptr_t WeaponData = 0x3d8;
	uintptr_t LastFireTime = 0xa70;
	uintptr_t LastFireTimeVerified = 0xa74;
	uintptr_t LastFireAbilityTime = 0xd60;
	uintptr_t CurrentWeapon = 0x4f0;
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
	uintptr_t TeamIndex = 0x1010;

 /*Dm Xenon#1337 for missing offsets/sigs THE OFFSETS ABOVE THESE LINES HAVENMT BEEN UPDATED AS OF 6/9/22 BUT WILL BE SOON*/

class vtables{
	GetPlayerViewPoint = 0x7A8
	SetControlRotation = 0x718
	GetCameraLocation = 0x7B8           
	GetCameraRotation = 0x7B0         
	Process Event = 0x4D                
	GetFOVAngle = 0x768                             
	Post Render = 0x6E
	}
 /*Dm Xenon#1337 for missing vtables you might need */
