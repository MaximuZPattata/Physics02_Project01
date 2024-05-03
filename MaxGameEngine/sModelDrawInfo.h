#pragma once

#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <string>

struct sVertex
{
	sVertex()
	{
		x = y = z = w = 0.f;
		r = g = b = a = 0.f;
		nx = ny = nz = nw = 0.f;
		u = v = 0.f;
	}

	float x, y, z, w;		//vPos	
	float r, g, b, a;		//vCol	
	float nx, ny, nz, nw;	//vNormal	
	float u, v;				//vTextureCoords
};

struct sTriangle
{
	glm::vec3 v1 = glm::vec3(0.f);
	glm::vec3 v2 = glm::vec3(0.f);
	glm::vec3 v3 = glm::vec3(0.f);
};

struct sModelDrawInfo
{
	sModelDrawInfo();

	std::string meshFileName;

	std::string friendlyName;

	unsigned int VAO_ID;

	unsigned int VertexBufferID;
	unsigned int VertexBuffer_Start_Index;
	unsigned int numberOfVertices;

	unsigned int IndexBufferID;
	unsigned int IndexBuffer_Start_Index;
	unsigned int numberOfIndices;
	unsigned int numberOfTriangles;

	unsigned int* pIndices;

	float maxExtent;

	sVertex* pVertices;
	sTriangle* pTriangles;

	glm::vec3 maxExtents_XYZ;
	glm::vec3 minExtents_XYZ;
	glm::vec3 deltaExtents_XYZ;

	void calcExtents(void);
	unsigned int getUniqueID(void);

private:
	unsigned int m_UniqueID;
	static const unsigned int FIRST_UNIQUE_ID = 1;
	static unsigned int m_nextUniqueID;
};
