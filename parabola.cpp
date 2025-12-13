#include "Parabola.h"
#include <GL/glew.h>
#include <GL/freeglut.h>

void Parabola::draw() {
    glBegin(GL_TRIANGLE_STRIP); // Use TRIANGLE_STRIP to fill the parabola
    glColor3f(.0f, 0.0f, 1.0f); // Set color to red (or any other color of your choice)
    for (float x = -1.0f; x <= 1.0f; x += 0.01f) {
        float y = x * x; // Parabola equation y = x^2
        glVertex2f(x, y);
        glVertex2f(x, 0.0f); // Draw to the x-axis to fill the area
    }
    glEnd();
}