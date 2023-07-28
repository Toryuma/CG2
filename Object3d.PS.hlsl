#include "object3d.hlsli"

struct Material {
	float32_t4 color;
};

ConstantBuffer<Material>gMaterial : register(b0);

struct PixelShaderOutput {
	float32_t4 color : SV_TARGET0;

};

Texture2D<float32_t4> gTexture : register(t0);
SamplerState gSampler : register(s0);

PixelShaderOutput main(VertexShaderOutput input) {
	float32_t4 textureColor = gTexture.Sample(gSampler, input.texcoord);//Textureを読む部分を指定
	PixelShaderOutput output;
	output.color = gMaterial.color * textureColor;//色の乗算
	/*output.color = gMaterial.color;*/

	return output;
}