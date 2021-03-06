#pragma once

struct ID3D11Buffer;

namespace Kore {
	class VertexBuffer;

	class VertexBufferImpl {
	public:
		ID3D11Buffer* _vb;
		int myStride;

	protected:
		VertexBufferImpl(int count);
		int myCount;
		float* vertices;
	};
}
