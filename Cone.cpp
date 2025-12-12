#include <GL/glut.h>
#include "Cone.h"
#include <cmath>

void Cone::draw() {
    // Draw the triangular sides of the prism
    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0); // Red
    glVertex3f(-2.0, 0.0, -1.0);
    glVertex3f(1.0, 0.0, -1.0);
    glVertex3f(-1.0, 2.0, 0.0); // Apex of the prism

    glEnd();

    const int numSegments = 100; // Number of segments to divide the circle
    const float radius = 1.0f;    // Radius of the circle

    glBegin(GL_TRIANGLE_FAN); // Use TRIANGLE_FAN to fill the circle
    glColor3f(1.0f, 0.0f, 0.0f); // Set color to green
    glVertex3f(-1.5f, 0.0f,0.0f); // Center of the circle

    // Loop through to create circle points
    for (int i = 0; i <= numSegments; ++i) {
        float angle = 2.0f * 3.14159265359f * i / numSegments; // Calculate angle
        float x = radius * cos(angle); // x = radius * cos(angle)
        float y = radius * sin(angle)/2; // y = radius * sin(angle)
        glVertex2f(x, y); // Define the vertex
    }
    glEnd();

}