#version 130
precision mediump float;
uniform sampler2D thet;
uniform float scalefactor;
uniform mat4 matrix;
in vec2 aTexCoord;
out vec2 vTexCoord;
void main(){
	vTexCoord = scalefactor* aTexCoord;
}