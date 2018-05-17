#include "shell.hpp"

int main( int argc, char** argv ){
	
GLFWwindow * window;
unsigned int WIDTH = 400;
unsigned int HEIGHT = 400;

// Initialise GLFW
if( !glfwInit() )
{
	cout <<  "Failed to initialize GLFW\n";
	return -1;
}

glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

window = glfwCreateWindow(WIDTH, HEIGHT, "OpenGL Window", nullptr, nullptr); // Windowed
glfwMakeContextCurrent(window);

    // Game loop
    while (!glfwWindowShouldClose(window))
    {
        // Check and call events
        glfwPollEvents();

        // Clear the colorbuffer
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
	
	// render
       
        // Swap the buffers
        glfwSwapBuffers(window);
    }

    glfwTerminate();
return 0;
}
