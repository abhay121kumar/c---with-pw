import numpy as np
import matplotlib.pyplot as plt
from skimage import feature, color
from skimage.transform import resize
from sklearn.datasets import load_sample_image

def load_custom_dataset():
     
    image_filenames = ['/content/1.jpg']
    labels = [0, 1]   
    images = [plt.imread(filename) for filename in image_filenames]
    return np.array(images), np.array(labels)

image_dataset, labels = load_custom_dataset()

# Adjust the target size for resizing the images based on your dataset requirements
target_size = (64, 64)
image_dataset_resized = [resize(image, target_size) for image in image_dataset] 

# Convert the images to grayscale for some feature extraction methods
image_dataset_gray = [color.rgb2gray(image) for image in image_dataset_resized]

# Step 1: Histogram of Oriented Gradients (HOG) feature extraction
def extract_hog_features(image):
    hog_features, hog_image = feature.hog(image, visualize=True)
    return hog_features

hog_features_dataset = np.array([extract_hog_features(image) for image in image_dataset_gray])

# Step 2: Local Binary Pattern (LBP) feature extraction
def extract_lbp_features(image):
    lbp_features = feature.local_binary_pattern(image, P=8, R=1, method='uniform')
    histogram, _ = np.histogram(lbp_features.ravel(), bins=np.arange(0, 10), range=(0, 9))
    return histogram

lbp_features_dataset = np.array([extract_lbp_features(image) for image in image_dataset_gray])

# Step 3: Color Histogram feature extraction (for color images)
def extract_color_histogram(image):
    color_hist, _ = np.histogram(image, bins=8, range=(0, 1))
    return color_hist

color_histogram_features_dataset = np.array([extract_color_histogram(image) for image in image_dataset_resized])

# Display some example images and their features
sample_indices = [0, 10, 20]
fig, axes = plt.subplots(len(sample_indices), 4, figsize=(12, 6))

for i, idx in enumerate(sample_indices):
    axes[i, 0].imshow(image_dataset[idx])
    axes[i, 0].axis('off')
    axes[i, 0].set_title('Original')

    axes[i, 1].imshow(image_dataset_gray[idx], cmap='gray')
    axes[i, 1].axis('off')
    axes[i, 1].set_title('Grayscale')

    axes[i, 2].plot(hog_features_dataset[idx])
    axes[i, 2].set_title('HOG Features')
    axes[i, 2].set_ylim(0, 1)

    if len(image_dataset[idx].shape) == 3:  # Color image
        axes[i, 3].bar(range(8), color_histogram_features_dataset[idx])
        axes[i, 3].set_title('Color Histogram')
    else:  # Grayscale image
        axes[i, 3].plot(lbp_features_dataset[idx])
        axes[i, 3].set_title('LBP Features')
        axes[i, 3].set_ylim(0, 8)

plt.tight_layout()
plt.show()