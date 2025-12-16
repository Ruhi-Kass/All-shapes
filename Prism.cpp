#include <GL/glut.h>
#include "Prism.h"

void Prism::draw() {
    // Draw the triangular sides of the prism
    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0); // Red
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(1.0, 0.5, -1.0);
    glVertex3f(0.0, 2.0, 0.0); // Apex of the prism

    glColor3f(0, 1, 0); // Green
    glVertex3f(-1.0, 0.0, -1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(0.0, 2.0, 0.0); // Apex of the prism

  
   
    glEnd();

}