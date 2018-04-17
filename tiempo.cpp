#include <iostream>
using std::cout;
using std::endl;
float solucion(float c, float dt, float dx, float h, float g, float j );
float uf(float c, float x, float dx, int i);
int main()
{
	float c = 1.0;
	float dt = 0.01;
	float dx = 0.1;
	float T = 0.5;
	float t = 0.0;
	float u;
	float h;
	float g;
	
	return 0;
}
float uf(float c, float x, float dx, int i)
{
	if (x <= (0.75 + dx*i) && t >= (0.0 + dx*i))
	{
		u = 0.0;
	}
	if (x <=(1.25 + dx*i) && t > (0.75 + dx*i)) 
	{
		u = 1.0;
	}
	if (x >(1.25 + dx*i))
	{
		u=0.0;
	}
	return u;
} 
float solucion (float c, float dt, float dx, float h, float g, float j)
{
	int u = j - (c*dt/dx)*(h-g)  
}
