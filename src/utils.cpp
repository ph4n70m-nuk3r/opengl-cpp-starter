#include "../include/utils.h"

#include <glad/glad.h>
// Must come after glad.h.
#include <GLFW/glfw3.h>

namespace utils {

width_height get_w_h(int WH_INDEX) {
    const int MAX_IDX = 15;

    if (WH_INDEX < 0 || WH_INDEX > MAX_IDX) {
        auto errmsg = "utils::get_w_h(WH_INDEX) -> Invalid argument: " + std::to_string(WH_INDEX) +
            ". Accepted range is 0-" + std::to_string(MAX_IDX) + ".";
        return {0, 0, errmsg};
    }
    const int aspect_ratio_array[2][MAX_IDX + 1] = {
        { 240, 480, 720, 960, 1200, 1440, 1680, 1920, 2160, 2400, 2640, 2880, 3120, 3360, 3600, 3840 },
        { 135, 270, 405, 540, 675,  810,  945,  1080, 1215, 1350, 1485, 1620, 1755, 1890, 2025, 2160 }
    };

    const int W_INDEX = 0;
    const int H_INDEX = 1;

    const int width  = aspect_ratio_array[W_INDEX][WH_INDEX];
    const int height = aspect_ratio_array[H_INDEX][WH_INDEX];

    const width_height value = {width, height, ""};

    return value;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

}  // namespace utils
