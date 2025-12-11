#include "Circle.h"
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <cmath>

void Circle::draw() {
    const int numSegments = 100; // Number of segments to divide the circle
    const float radius = 0.5f;    // Radius of the circle

    glBegin(GL_TRIANGLE_FAN); // Use TRIANGLE_FAN to fill the circle
    glColor3f(0.0f, 1.0f, 0.0f); // Set color to green
    glVertex2f(0.0f, 0.0f); // Center of the circle

    // Loop through to create circle points
    for (int i = 0; i <= numSegments; ++i) {
        float angle = 2.0f * 3.14159265359f * i / numSegments; // Calculate angle
        float x = radius * cos(angle); // x = radius * cos(angle)
        float y = radius * sin(angle); // y = radius * sin(angle)
        glVertex2f(x, y); // Define the vertex
    }
    glEnd();
}