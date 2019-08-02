
textures_skies_tim_hell_fragment_1 = 
    [glsl|
precision mediump float;

varying vec2 vTextureCoord;
varying vec2 vLightmapCoord;
varying vec4 vColor;
uniform sampler2D texture;
uniform float time;
void main(void) {
	vec4 textureColor = texture2D(texture, vTextureCoord.st);
	vec3 rgb = textureColor.rgb;
	// alphaGen
	float alpha = textureColor.a;
	gl_FragColor = vec4(rgb, alpha);
}
    |]