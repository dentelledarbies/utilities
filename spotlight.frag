#version 130
precision mediump float;
uniform sampler2D thet;
out vec4 fragmentColor;
void main()
{
	vec4 color = texture(thet,gl_TexCoord[0].xy);
	vec2 position = gl_TexCoord[0].xy;
	if((position.y*position.y)+(position.x*position.x)<0.25){//position.x<0.5
		color.a =0.0;
	}
	//color.xyz = vec3(1,1,1)-color.xyz;
	fragmentColor = color;//vec4(st.x,st.y,0.,1.);
}