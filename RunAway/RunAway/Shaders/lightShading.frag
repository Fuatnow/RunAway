#version 130
//The fragment shader operates on each pixel in a given polygon

in vec2 fragmentPosition;
in vec4 fragmentColor;
in vec2 fragmentUV;


out vec4 color;



void main() {
	float distance = length(fragmentUV);
    color =	vec4(fragmentColor.rgb, fragmentColor.a * (pow(0.01,distance) - 0.01));
}