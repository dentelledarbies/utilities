#version 130
//inspired by: https://godotshaders.com/shader/animated-stripes/ and https://www.shadertoy.com/view/ltKSRy
precision mediump float;
uniform sampler2D thet;
uniform vec2 spreadsize;
uniform vec4 stripecolor;
uniform float angle_degs;
uniform float milltime;
uniform float speed;
uniform float stripenum;
uniform float bias;
out vec4 fragmentColor;
float degs_to_rads(float a){
	float PI = 3.1415;
	return a*(PI/180.f);
}
void main(){
	vec4 color = texture(thet,gl_TexCoord[0].xy);
	vec2 position = gl_TexCoord[0].xy;///spreadsize.xy;
	vec2 truspot = position/spreadsize;
	float angle = degs_to_rads(angle_degs);
	float slant = cos(angle)*position.x+sin(angle)*position.y-speed*milltime/1000;//position.x position.y
	//float stripestep = slant ;
	if(floor(mod(slant*stripenum,bias))<0.0001){
		color.xyz = stripecolor.xyz;
	}//else{color =color;}
	fragmentColor = color;
}