#pragma once

#include <vulkan/vulkan.h>

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

#ifdef RegisterClass
#undef RegisterClass
#endif

namespace Kore {
	class RenderTargetImpl {
	public:
		VkImage image;
		VkDeviceMemory memory;
		VkFramebuffer framebuffer;
		VkDescriptorSet desc_set;
		VkSampler sampler;
		VkImageView view;
		VkRenderPass renderPass;
	};
}