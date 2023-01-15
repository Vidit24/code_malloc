import os

# Open the first file
file1 = open("file1.txt", "r")

# Open the second file
file2 = open("file2.txt", "r")

# Print the number of open file descriptors
print(len(os.listdir("/proc/self/fd")))
