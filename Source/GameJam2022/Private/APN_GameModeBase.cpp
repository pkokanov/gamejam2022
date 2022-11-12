#include "APN_GameModeBase.h"

AAPN_WorldSettings* AAPN_GameModeBase::GetWorldSettings()
{
	if (AAPN_WorldSettings* Settings = Cast<AAPN_WorldSettings>(GetWorld()->GetWorldSettings()))
	{
		return Settings;
	}
	return nullptr;
}
