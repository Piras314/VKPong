#include <vulkan/vulkan.h>
#include <iostream>

int main()
{
	// Create VK info structs
	VkApplicationInfo appInfo = {};
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	appInfo.pApplicationName = "VKPong";

	VkInstanceCreateInfo instanceInfo = {};
	instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	instanceInfo.pApplicationInfo = &appInfo;

	// Instance VK
	VkInstance instance;
	VkResult result = vkCreateInstance(&instanceInfo,0, &instance);

	if (result == VK_SUCCESS)
	{
		std::cout << "Vulkan successfully instanced" << std::endl;
	}

	return 0;
}