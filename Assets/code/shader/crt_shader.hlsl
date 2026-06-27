float intensity = 0.5f;

float k1 = 0.85f;
float k2 = 0.65f;
float k3 = 0.30f;

float2 centerOffset = float2(0, 0);

float2 centerUV = uv * 2 - 1 - centerOffset;

float rSq = dot(centerUV, centerUV);

float model = 1  + rSq * (k1 + rSq * (k2 + rSq * k3));
float distortion = 1 + (model - 1) * intensity;

float2 distortedUV = centerUV * distortion * 0.5 + 0.5;

return distortedUV;