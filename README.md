# opencv_bazel

Build OpenCV project with Bazel on Linux

## Environment
- Ubuntu 18.04
- OpenCV 4.5.0
- bazel 4.0.0

## Setup

 - In the `WORKSPACE` file, change the path of opencv to where you installed it. Make sure the path has files listed in `opencv.BUILD`.
 - Choose the correct lines in `opencv.BUILD` based on your opencv version. 
 - Build the project using `bazel build //main:main`
 - Run the binary with `bazel-bin/src/main`

## Credits
Referenced 
- https://github.com/ashnarayan13/opencv_bazel
- https://stackoverflow.com/questions/34984290/building-opencv-code-using-bazel
- https://google.github.io/mediapipe/getting_started/install.html#installing-on-debian-and-ubuntu.
