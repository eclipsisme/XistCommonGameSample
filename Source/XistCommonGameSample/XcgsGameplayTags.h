// Copyright (c) 2023 xist.gg

#pragma once

#include "NativeGameplayTags.h"


namespace XcgsTag
{
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_Message);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_Message_Paused);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_Message_Unpaused);

	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Time_Start);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Time_Stop);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Zoom);

	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UI_Action_MainMenu);

	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UI_Layer_Game);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UI_Layer_GameMenu);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UI_Layer_Menu);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(UI_Layer_Modal);
}