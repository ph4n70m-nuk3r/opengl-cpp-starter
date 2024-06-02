#pragma once

#include <string>

struct GLFWwindow;

namespace utils {

class width_height {
  public:
    int width;
    int height;
    std::string errmsg;

    width_height(int width_, int height_, std::string errmsg_) {
        width = width_;
        height = height_;
        errmsg = errmsg_;
    }
};

width_height get_w_h(int WH_INDEX);

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

void processInput(GLFWwindow* window);

}  // namespace utils
