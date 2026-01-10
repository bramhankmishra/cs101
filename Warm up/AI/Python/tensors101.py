import torch
# from torchvision import transforms
# from PIL import Image

random_num_tensor1 = torch.zeros(3,3)
random_num_tensor2 = torch.rand(3,3)

# print(random_num_tensor)
print(random_num_tensor1)
print(random_num_tensor2)

print("ELement wise addition of tensors: \n", random_num_tensor1 @ random_num_tensor2)
