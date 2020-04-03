#version 430

in vec3 Position;
in vec3 Normal;

struct LightInfo{
	vec4 Position;  //vec4로 
	vec3 Intensity;
};
uniform LightInfo Light;

struct MaterialInfo{
	vec3 Ka;
	vec3 Kd;
	vec3 Ks;
	float Shininess;
};
uniform MaterialInfo Material;

out vec4 color;

vec3 phongModel(vec4 P, vec3 N)
{
	vec3 L; 
	if (Light.Position.w == 0.0) //Light
		L = normalize(Light.Position.xyz); //앞에 벡터 3개만 가져오겠다
	else 
		L = normalize((Light.Position - P).xyz); //Light.Position, P 둘다 vec4인데 .xyz해줘서 3개만 가져오기
	vec3 V = normalize(-P.xyz);
	vec3 R = reflect(-L, N);
	float lDotN = max (dot (L, N), 0.0);
	vec3 ambient = Light.Intensity * Material.Ka;
	vec3 diffuse = Light.Intensity * Material.Kd * lDotN;
	vec3 spec = vec3(0.0);
	if (lDotN >0.0)
		spec = Light.Intensity * Material.Ks * pow(max (dot(R,V), 0.0), Material.Shininess);

	return ambient+diffuse+spec;
}

void main(void)
{
	vec3 LightIntensity = phongModel(vec4(Position, 1.0), Normal);
	color = vec4(LightIntensity, 1.0);
}