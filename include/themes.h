/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef LED_THEMES_H_
#define LED_THEMES_H_

#include <vector>
#include <MPG.h>
#include "AnimationStation.hpp"
#include "BoardConfig.h"

static StaticTheme themeStaticRainbow(
	matrix,
	{
		{ GAMEPAD_MASK_DL, ColorRed },
		{ GAMEPAD_MASK_DD, ColorOrange },
		{ GAMEPAD_MASK_DR, ColorYellow },
		{ GAMEPAD_MASK_DU, (LED_LAYOUT == LED_LAYOUT_ARCADE_HITBOX) ? ColorGreen : ColorOrange },
		{ GAMEPAD_MASK_B3, ColorGreen },
		{ GAMEPAD_MASK_B1, ColorGreen },
		{ GAMEPAD_MASK_B4, ColorAqua },
		{ GAMEPAD_MASK_B2, ColorAqua },
		{ GAMEPAD_MASK_R1, ColorBlue },
		{ GAMEPAD_MASK_R2, ColorBlue },
		{ GAMEPAD_MASK_L1, ColorMagenta },
		{ GAMEPAD_MASK_L2, ColorMagenta },
	}
);

static StaticTheme themeGuiltyGearTypeA(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B1, ColorPink },
		{ GAMEPAD_MASK_B3, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorGreen },
		{ GAMEPAD_MASK_R1, ColorRed },
		{ GAMEPAD_MASK_R2, ColorOrange },
	}
);

static StaticTheme themeGuiltyGearTypeD(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorPink },
		{ GAMEPAD_MASK_B1, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorGreen },
		{ GAMEPAD_MASK_B2, ColorRed },
		{ GAMEPAD_MASK_R1, ColorOrange },
	}
);

static StaticTheme themeGuiltyGearCustom(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorPink },
		{ GAMEPAD_MASK_B1, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorGreen },
		{ GAMEPAD_MASK_R1, ColorRed },
		{ GAMEPAD_MASK_R2, ColorOrange },
		{ GAMEPAD_MASK_L1, ColorSeafoam },
	}
);

static StaticTheme themeNeoGeo(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorRed },
		{ GAMEPAD_MASK_B4, ColorYellow },
		{ GAMEPAD_MASK_R1, ColorGreen },
		{ GAMEPAD_MASK_L1, ColorBlue },
	}
);

static StaticTheme themeNeoGeoCurved(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B1, ColorRed },
		{ GAMEPAD_MASK_B3, ColorYellow },
		{ GAMEPAD_MASK_B4, ColorGreen },
		{ GAMEPAD_MASK_R1, ColorBlue },
	}
);

static StaticTheme themeNeoGeoModern(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorRed },
		{ GAMEPAD_MASK_B1, ColorYellow },
		{ GAMEPAD_MASK_B4, ColorGreen },
		{ GAMEPAD_MASK_B2, ColorBlue },
	}
);

static StaticTheme themeSixButtonFighter(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorBlue },
		{ GAMEPAD_MASK_B1, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorYellow },
		{ GAMEPAD_MASK_B2, ColorYellow },
		{ GAMEPAD_MASK_R1, ColorRed },
		{ GAMEPAD_MASK_R2, ColorRed },
	}
);

static StaticTheme themeSixButtonFighterPlus(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B3, ColorBlue },
		{ GAMEPAD_MASK_B1, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorYellow },
		{ GAMEPAD_MASK_B2, ColorYellow },
		{ GAMEPAD_MASK_R1, ColorRed },
		{ GAMEPAD_MASK_R2, ColorRed },
		{ GAMEPAD_MASK_L1, ColorMagenta },
		{ GAMEPAD_MASK_L2, ColorMagenta },
	}
);

static StaticTheme themeSuperFamicom(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B1, ColorYellow },
		{ GAMEPAD_MASK_B2, ColorRed },
		{ GAMEPAD_MASK_B3, ColorGreen },
		{ GAMEPAD_MASK_B4, ColorBlue },
		{ GAMEPAD_MASK_R1, ColorSeafoam },
		{ GAMEPAD_MASK_R2, ColorMagenta },
		{ GAMEPAD_MASK_L1, ColorOrange },
		{ GAMEPAD_MASK_L2, ColorAqua },
	}
);

static StaticTheme themeXbox(
	matrix,
	{
		{ GAMEPAD_MASK_DU, ColorWhite },
		{ GAMEPAD_MASK_DD, ColorWhite },
		{ GAMEPAD_MASK_DL, ColorWhite },
		{ GAMEPAD_MASK_DR, ColorWhite },
		{ GAMEPAD_MASK_B1, ColorGreen },
		{ GAMEPAD_MASK_B2, ColorRed },
		{ GAMEPAD_MASK_B3, ColorBlue },
		{ GAMEPAD_MASK_B4, ColorYellow },
		{ GAMEPAD_MASK_R1, ColorSeafoam },
		{ GAMEPAD_MASK_R2, ColorMagenta },
		{ GAMEPAD_MASK_L1, ColorOrange },
		{ GAMEPAD_MASK_L2, ColorAqua },
	}
);

static std::vector<StaticTheme> customThemes =
{
	themeStaticRainbow,
	themeSuperFamicom,
	themeXbox,
	themeNeoGeo,
	themeNeoGeoCurved,
	themeNeoGeoModern,
	themeSixButtonFighter,
	themeSixButtonFighterPlus,
	themeGuiltyGearTypeA,
	themeGuiltyGearTypeD,
	themeGuiltyGearCustom,
};

#endif
