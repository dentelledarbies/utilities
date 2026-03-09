#include <SFML/Graphics.hpp>
#ifndef __CSS_COLORS_IN_SFML__
#define __CSS_COLORS_IN_SFML__
class FED_Colors {
public:
	//these are the 140* browser safe colors as defined by W3Schools https://www.w3schools.com/colors/colors_names.asp
	//*I removed the british greys, so it's a little less
	constexpr static sf::Color AliceBlue = sf::Color(240,248,255);
	constexpr static sf::Color AntiqueWhite = sf::Color(250, 235, 215);
	constexpr static sf::Color Aqua = sf::Color(0, 255, 255);
	constexpr static sf::Color Aquamarine = sf::Color(127, 255, 212);
	constexpr static sf::Color Azure = sf::Color(240, 255, 255);
	constexpr static sf::Color Beige = sf::Color(245, 245, 220);
	constexpr static sf::Color Bisque = sf::Color(255, 228, 196);
	constexpr static sf::Color Black = sf::Color(0, 0, 0);
	constexpr static sf::Color BlanchedAlmond = sf::Color(255, 235, 205);
	constexpr static sf::Color Blue = sf::Color(0, 0, 255);
	constexpr static sf::Color BlueViolet = sf::Color(138, 43, 226);
	constexpr static sf::Color Brown = sf::Color(165, 42, 42);//more like burgundy but okay
	constexpr static sf::Color Burlywood = sf::Color(222, 184, 135);
	constexpr static sf::Color CadetBlue = sf::Color(95, 158, 160);
	constexpr static sf::Color Chartreuse = sf::Color(127, 255, 0);
	constexpr static sf::Color Chocolate = sf::Color(210, 105, 30);
	constexpr static sf::Color Coral = sf::Color(255, 127, 80);
	constexpr static sf::Color CornflowerBlue = sf::Color(100, 149, 237);
	constexpr static sf::Color Cornsilk = sf::Color(255, 248, 220);
	constexpr static sf::Color Crimson = sf::Color(220, 20, 60);
	constexpr static sf::Color Cyan = sf::Color(0, 255, 255);
	constexpr static sf::Color DarkBlue = sf::Color(0, 0, 139);
	constexpr static sf::Color DarkCyan = sf::Color(0, 139, 139);
	constexpr static sf::Color DarkGoldenrod = sf::Color(184, 134, 11);
	constexpr static sf::Color DarkGray = sf::Color(169, 169, 169);
	constexpr static sf::Color DarkGreen = sf::Color(0, 100, 0);
	constexpr static sf::Color DarkKhaki = sf::Color(189, 183, 107);
	constexpr static sf::Color DarkMagenta = sf::Color(139, 0, 139);
	constexpr static sf::Color DarkOliveGreen = sf::Color(85, 107, 47);
	constexpr static sf::Color DarkOrange = sf::Color(255, 140, 0);
	constexpr static sf::Color DarkOrchid = sf::Color(153, 50, 204);
	constexpr static sf::Color DarkRed = sf::Color(139, 0, 0);
	constexpr static sf::Color DarkSalmon = sf::Color(233, 150, 122);
	constexpr static sf::Color DarkSeaGreen = sf::Color(143, 188, 143);
	constexpr static sf::Color DarkSlateBlue = sf::Color(72, 61, 139);
	constexpr static sf::Color DarkSlateGray = sf::Color(47, 79, 79);
	constexpr static sf::Color DarkTurquoise = sf::Color(0, 206, 209);
	constexpr static sf::Color DarkViolet = sf::Color(148, 0, 211);
	constexpr static sf::Color DeepPink = sf::Color(255, 20, 147);
	constexpr static sf::Color DeepSkyBlue = sf::Color(0, 191, 255);
	constexpr static sf::Color DimGray = sf::Color(105, 105, 105);
	constexpr static sf::Color DodgerBlue = sf::Color(30, 144, 255);
	constexpr static sf::Color FireBrick = sf::Color(178, 34, 34);
	constexpr static sf::Color FloralWhite = sf::Color(255, 250, 240);
	constexpr static sf::Color ForestGreen = sf::Color(34, 139, 34);
	constexpr static sf::Color Fuchsia = sf::Color(255, 0, 255);
	constexpr static sf::Color Gainsboro = sf::Color(220, 220, 220);
	constexpr static sf::Color GhostWhite = sf::Color(248, 248, 255);
	constexpr static sf::Color Gold = sf::Color(255, 215, 0);
	constexpr static sf::Color GoldenRod = sf::Color(218, 165, 32);
	constexpr static sf::Color Gray = sf::Color(128, 128, 128);
	constexpr static sf::Color Green = sf::Color(0, 128, 0);
	constexpr static sf::Color GreenYellow = sf::Color(173, 255, 47);
	constexpr static sf::Color HoneyDew = sf::Color(240, 255, 240);
	constexpr static sf::Color HotPink = sf::Color(255, 105, 180);
	constexpr static sf::Color IndianRed = sf::Color(205, 92, 92);
	constexpr static sf::Color Indigo = sf::Color(75, 0, 130);
	constexpr static sf::Color Ivory = sf::Color(255, 255, 240);
	constexpr static sf::Color Khaki = sf::Color(240, 230, 140);
	constexpr static sf::Color Lavender = sf::Color(230, 230, 250);//lol no this is NOT purple
	constexpr static sf::Color LavenderBlush = sf::Color(255, 240, 245);//neither is this
	constexpr static sf::Color LawnGreen = sf::Color(124, 252, 0);
	constexpr static sf::Color LemonChiffon = sf::Color(255, 250, 205);
	constexpr static sf::Color LightBlue = sf::Color(173, 216, 230);
	constexpr static sf::Color LightCoral = sf::Color(240, 128, 128);
	constexpr static sf::Color LightCyan = sf::Color(224, 255, 255);
	constexpr static sf::Color LightGoldenRodYellow = sf::Color(250, 250, 210);
	constexpr static sf::Color LightGray = sf::Color(211, 211, 211);
	constexpr static sf::Color LightGreen = sf::Color(144, 238, 144);
	constexpr static sf::Color LightPink = sf::Color(255, 182, 193);
	constexpr static sf::Color LightSalmon = sf::Color(255, 160, 122);
	constexpr static sf::Color LightSeaGreen = sf::Color(32, 178, 170);
	constexpr static sf::Color LightSkyBlue = sf::Color(135, 206, 250);
	constexpr static sf::Color LightSlateGray = sf::Color(119, 136, 153);
	constexpr static sf::Color LightSteelBlue = sf::Color(176, 196, 222);
	constexpr static sf::Color LightYellow = sf::Color(255, 255, 224);
	constexpr static sf::Color Lime = sf::Color(0, 255, 0);
	constexpr static sf::Color LimeGreen = sf::Color(50, 205, 50);
	constexpr static sf::Color Linen = sf::Color(250, 240, 230);
	constexpr static sf::Color Magenta = sf::Color(255, 0, 255);
	constexpr static sf::Color Maroon = sf::Color(128, 0, 0);
	constexpr static sf::Color MediumAquaMarine = sf::Color(102, 205, 170);
	constexpr static sf::Color MediumBlue = sf::Color(0, 0, 205);
	constexpr static sf::Color MediumOrchid = sf::Color(186, 85, 211);
	constexpr static sf::Color MediumPurple = sf::Color(147, 112, 219);
	constexpr static sf::Color MediumSeaGreen = sf::Color(60, 179, 113);
	constexpr static sf::Color MediumSpringGreen = sf::Color(0, 250, 154);
	constexpr static sf::Color MediumTurquoise = sf::Color(72, 209, 204);
	constexpr static sf::Color MediumVioletRed = sf::Color(199, 21, 133);
	constexpr static sf::Color MidnightBlue = sf::Color(25, 25, 112);
	constexpr static sf::Color MintCream = sf::Color(245, 255, 250);
	constexpr static sf::Color MistyRose = sf::Color(255, 228, 225);
	constexpr static sf::Color Moccasin = sf::Color(255, 228, 181);
	constexpr static sf::Color NavajoWhite = sf::Color(255, 222, 173);
	constexpr static sf::Color Navy = sf::Color(0, 0, 128);
	constexpr static sf::Color OldLace = sf::Color(253, 245, 230);
	constexpr static sf::Color Olive = sf::Color(128, 128, 0);
	constexpr static sf::Color OliveDrab = sf::Color(107, 142, 35);
	constexpr static sf::Color Orange = sf::Color(255, 165, 0);
	constexpr static sf::Color OrangeRed = sf::Color(255, 69, 0);
	constexpr static sf::Color Orchid = sf::Color(218, 112, 214);
	constexpr static sf::Color PaleGoldenRod = sf::Color(238, 232, 170);
	constexpr static sf::Color PaleGreen = sf::Color(152, 251, 152);
	constexpr static sf::Color PaleTurquoise = sf::Color(175, 238, 238);
	constexpr static sf::Color PaleVioletRed = sf::Color(219, 112, 147);
	constexpr static sf::Color PapayaWhip = sf::Color(255, 239, 213);
	constexpr static sf::Color PeachPuff = sf::Color(255, 218, 185);
	constexpr static sf::Color Peru = sf::Color(205, 133, 63);
	constexpr static sf::Color Pink = sf::Color(255, 192, 203);
	constexpr static sf::Color Plum = sf::Color(221, 160, 221);
	constexpr static sf::Color PowderBlue = sf::Color(176, 224, 230);
	constexpr static sf::Color Purple = sf::Color(128, 0, 128);
	constexpr static sf::Color RebeccaPurple = sf::Color(102, 51, 153);
	constexpr static sf::Color Red = sf::Color(255, 0, 0);
	constexpr static sf::Color RosyBrown = sf::Color(188, 143, 143);
	constexpr static sf::Color RoyalBlue = sf::Color(65, 105, 225);
	constexpr static sf::Color SaddleBrown = sf::Color(139, 69, 19);
	constexpr static sf::Color Salmon = sf::Color(250, 128, 114);
	constexpr static sf::Color SandyBrown = sf::Color(244, 164, 96);
	constexpr static sf::Color SeaGreen = sf::Color(46, 139, 87);
	constexpr static sf::Color SeaShell = sf::Color(255, 245, 238);
	constexpr static sf::Color Sienna = sf::Color(160, 82, 45);
	constexpr static sf::Color Silver = sf::Color(192, 192, 192);
	constexpr static sf::Color SkyBlue = sf::Color(135, 206, 235);
	constexpr static sf::Color SlateBlue = sf::Color(106, 90, 205);
	constexpr static sf::Color SlateGray = sf::Color(112, 128, 144);
	constexpr static sf::Color Snow = sf::Color(255, 250, 250);
	constexpr static sf::Color SpringGreen = sf::Color(0, 255, 127);
	constexpr static sf::Color SteelBlue = sf::Color(70, 130, 180);
	constexpr static sf::Color Tan = sf::Color(210, 180, 140);
	constexpr static sf::Color Teal = sf::Color(0, 128, 128);
	constexpr static sf::Color Thistle = sf::Color(216, 191, 216);
	constexpr static sf::Color Tomato = sf::Color(255, 99, 71);//this is a bit too light for tomato color, but whatevs
	constexpr static sf::Color Turquoise = sf::Color(64, 224, 208);
	constexpr static sf::Color Violet = sf::Color(238, 130, 238);
	constexpr static sf::Color Wheat = sf::Color(245, 222, 179);
	constexpr static sf::Color White = sf::Color(255, 255, 255);
	constexpr static sf::Color WhiteSmoke = sf::Color(245, 245, 245);
	constexpr static sf::Color Yellow = sf::Color(255, 255, 0);
	constexpr static sf::Color YellowGreen = sf::Color(154, 205, 50);
	constexpr static sf::Color allthecolors[140] = { AliceBlue,AntiqueWhite,Aqua,Aquamarine,Azure,Beige,
	Bisque,Black,BlanchedAlmond,Blue,BlueViolet,Burlywood, CadetBlue, Chartreuse, Chocolate,
	Coral,CornflowerBlue,Cornsilk,Crimson, Cyan, DarkBlue,DarkCyan,DarkGoldenrod,DarkGray,
	DarkGreen,DarkKhaki,DarkMagenta,DarkOliveGreen,DarkOrange,DarkOrchid,DarkRed,DarkSalmon,
	DarkSeaGreen,DarkSlateBlue,DarkSlateGray,DarkTurquoise,DarkViolet,DeepPink,DeepSkyBlue,
	DimGray,DodgerBlue,FireBrick,FloralWhite,ForestGreen,Fuchsia,Gainsboro,GhostWhite,
	Gold,GoldenRod,Gray,Green,GreenYellow,HoneyDew,HotPink,IndianRed,Indigo,Ivory,Khaki,
	Lavender,LavenderBlush,LawnGreen,LemonChiffon,LightBlue,LightCoral,LightCyan,
	LightGoldenRodYellow,LightGray,LightGreen,LightPink,LightSalmon,LightSeaGreen,
	LightSkyBlue,LightSlateGray,LightSteelBlue,LightYellow,Lime,LimeGreen,Linen,
	Magenta,Maroon,MediumAquaMarine,MediumBlue,MediumOrchid,MediumPurple,MediumSeaGreen,
	MediumSpringGreen,MediumTurquoise,MediumVioletRed,MidnightBlue,MintCream,MistyRose,
	Moccasin,NavajoWhite,Navy,OldLace,Olive,OliveDrab,Orange,OrangeRed,Orchid,PaleGoldenRod,
	PaleGreen,PaleTurquoise,PaleVioletRed,PapayaWhip,PeachPuff,Peru,Plum,PowderBlue,Purple,
	RebeccaPurple,Red,RosyBrown,RoyalBlue,SaddleBrown,Salmon,SandyBrown,SeaGreen,SeaShell,
	Sienna,Silver,SkyBlue,SlateBlue,SlateGray,Snow,SpringGreen,SteelBlue,Tan,Teal,Thistle,
	Tomato,Turquoise,Violet,Wheat,White,WhiteSmoke,Yellow,YellowGreen};
	//now for some transparency
	constexpr static sf::Color MostlyOpaque = sf::Color(0,0,0,191);//75% opacity
	constexpr static sf::Color TrulyTranslucent = sf::Color(0,0,0,127);//50% opacity
	constexpr static sf::Color StartlinglySeethrough =sf::Color(0,0,0,63);//25% opacity
	constexpr static sf::Color JustBarelyThere = sf::Color(0, 0, 0, 31);//10% opacity
	constexpr static sf::Color Ghastly = sf::Color(0, 0, 0, 16);//5% opacity
};
//let's try to get some gradients going
//shout out to this guy Alan Zucconi https://www.alanzucconi.com/2016/01/06/colour-interpolation/#:~:text=Interpolating%20the%20R%2C%20G%20and,Humans%20perceive%20colours%20very%20well.
//linear interpolation function: c = a + (b-a)*t
sf::Color RGBInterpolation(sf::Color _1, sf::Color _2, float t) {//t should be a number between 0 and 1
	return sf::Color(
		_1.r + (_2.r - _1.r) * t,
		_1.g + (_2.g - _1.g) * t,
		_1.b + (_2.b - _1.b) * t,
		_1.a + (_2.a - _1.a) * t
	);
}
namespace colors {
	constexpr sf::Color
}
#endif // !__CSS_COLORS_IN_SFML__