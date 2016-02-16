#pragma once

#include <GLFW/glfw3.h>
#include <glm/vec2.hpp>

namespace UI{
    /**
     * Represents User input as "flags". Updated in main loop.
     */
    struct UserInput{
        bool is_PRESSED_Z;
        bool is_PRESSED_Q;
        bool is_PRESSED_S;
        bool is_PRESSED_D;
        bool is_PRESSED_SPACE;
        bool is_PRESSED_ALT;
        float velocityMovement;
        float velocityRotate;
        glm::vec2 rotate;

        UserInput(float velocityRotate=0.005f);
        float& getVelocityRotate(); //imgui
        void setVelocityRotate(float v);
        void update(GLFWwindow * window);
    };
}