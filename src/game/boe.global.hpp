

#ifndef BOE_GAME_GLOBAL_H
#define BOE_GAME_GLOBAL_H

#include <vector>
#include <string>
#include <sstream>
#include "boe.consts.hpp"

#define ASB	add_string_to_buf
#define	PSD	univ.party.stuff_done

const int NUM_MONST_G = 173;
const int NUM_TER_G = 251;
const int NUM_ITEM_G = 120;
const int NUM_FACE_G = 80;
const int NUM_DLOG_G = 28;

struct scen_header_type{
	int intro_pic, rating, difficulty, ver[3], prog_make_ver[3];
	std::string name, who1, who2, file;
};

struct effect_pat_type {
	unsigned short pattern[9][9];
};

// Clort - define some SFML colors for use in various places (boe.text.cpp mainly)

#define CL_VLTBLUE sf::Color(156,186,255,255)
#define CL_LTBLUE sf::Color(126,146,255,255)
#define CL_OFFWHITE sf::Color(208,208,208,255)
#define CL_LTGREY sf::Color(198,198,198,255)
#define CL_MDGREY sf::Color(178,178,178,255)
#define CL_DKGREY sf::Color(155,155,155,255)
#define CL_DKKGREY sf::Color(115,115,115,255)
#define CL_LTBLACK sf::Color(71,71,71,255)  // To avoid transparency in compositors, we don't do pure blacks
#define CL_BLACK sf::Color(11,11,11,255)  // To avoid transparency in compositors, we don't do pure blacks
#define CL_LTYELLOW sf::Color(228,228,18,255)
#define CL_MELOYELO sf::Color(223,198,58,255)
#define CL_MELOGREEN sf::Color(58,218,68,255)
#define CL_MELOMAG sf::Color(233,58,233,255)
#define CL_MELOCYAN sf::Color(58,233,233,255)
#define CL_MELORED sf::Color(233,58,38,255)
#define CL_WARNRED sf::Color(253,58,8,255)
#define CL_TEMP sf::Color(0,0,198,255)

#endif
