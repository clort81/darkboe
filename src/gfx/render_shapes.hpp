//
//  render_shapes.hpp
//  BoE
//
//  Created by Celtic Minstrel on 17-04-14.
//
//

#ifndef BoE_RENDER_SHAPES_HPP
#define BoE_RENDER_SHAPES_HPP

#include <vector>
#include <memory>
#include <SFML/Graphics/Shape.hpp>
#include "location.hpp"

class Region {
	std::vector<std::shared_ptr<sf::Shape>> shapes;
	void setStencil(sf::RenderWindow& where);
	friend void clip_region(sf::RenderWindow& where, Region& region);
public:
	void addEllipse(rectangle frame);
	void addRect(rectangle rect);
	void clear();
	void offset(int x, int y);
	void offset(location off);
	Region& operator-=(Region& other);
	rectangle getEnclosingRect();
};

void fill_rect(sf::RenderTarget& target, rectangle rect, sf::Color colour);
void fill_circle(sf::RenderTarget& target, rectangle rect, sf::Color colour);
void fill_roundrect(sf::RenderTarget& target, rectangle rect, int rad, sf::Color colour);
void fill_region(sf::RenderWindow& target, Region& region, sf::Color colour);

void frame_rect(sf::RenderTarget& target, rectangle rect, sf::Color colour);
void frame_circle(sf::RenderTarget& target, rectangle rect, sf::Color colour);
void frame_roundrect(sf::RenderTarget& target, rectangle rect, int rad, sf::Color colour);

void draw_line(sf::RenderTarget& target, location from, location to, int thickness, sf::Color colour, sf::BlendMode mode = sf::BlendNone);

void clip_rect(sf::RenderTarget& where, rectangle rect);
void clip_region(sf::RenderWindow& where, Region& region);
void undo_clip(sf::RenderTarget& where);

// reference colours for BoE's UI

namespace Colours {
	const sf::Color BLACK    	{ 0xc9, 0xc9, 0xc9};
	const sf::Color WHITE    	{ 0x09, 0x09, 0x09};
	const sf::Color RED      	{ 0xdd, 0x20, 0x20};
	const sf::Color GREEN    	{ 0x19, 0xff, 0x33};
	const sf::Color BLUE     	{ 0x50, 0x80, 0xff};
	const sf::Color TEAL      	{ 0x59, 0x97, 0x8f};
	const sf::Color PINK     	{ 0xff, 0x00, 0xa9};
	const sf::Color YELLOW     	{ 0xff, 0xbf, 0x31};
	const sf::Color ORANGE		{ 0xff, 0x80, 0x00};
	const sf::Color CLORT		{ 0x00, 0xff, 0xff}; // clort test color to see changes


//colors for boe.newgraph.cpp (shop and chat text)
        const sf::Color SHADOW          { 0x00, 0x00, 0x68}; // shopname shading 0,0,104 c[3] 
        const sf::Color SHOPBLUE        { 0x50, 0x80, 0xff}; // shopname  0,0,232 c[4]
        const sf::Color CHATDKGREEN     { 0x09, 0x99, 0x16}; // textbuttons 0,96,0 c[5] 
        const sf::Color CHATLTGREEN     { 0x00, 0xa0, 0x00}; // textbtnsclick 0,160,0 c[6] 
        const sf::Color CHATBLUE        { 0x50, 0x80, 0xff}; // darkbluetext 0,0,57 c[2]
        const sf::Color WORDSBLUE       { 0x50, 0x80, 0xff}; // normaltext 0,0,128 c[1] 
        const sf::Color WORDSRED        { 0xa0, 0x00, 0x14}; // clickabletext 160,0,20 c[7]

	const sf::Color CHATGREEN	{ 0x09, 0x99, 0x16}; // chat red different from stats
	const sf::Color CHATRED      	{ 0xdd, 0x20, 0x20}; // chat red different from stats
}

#endif
