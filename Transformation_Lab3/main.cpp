#include <windows.h>
#include <GL/glut.h>

void display(void)
{

    glTranslatef(0.4,0.4,0);
    glRotatef(45,0,0,1);      //Z okkher sapekkhe rotate korbe
    glScalef(2,2,1);

    glBegin(GL_QUADS);

    glColor3f(1,0,0);
    glVertex2f(0.2,0.2);
    glColor3f(0,1,0);
    glVertex2f(0.2,-0.2);
    glColor3f(0,0,1);
    glVertex2f(-0.2,-0.2);
    glColor3f(0.8,0.4,0.1);
    glVertex2f(-0.2,0.2);

    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Transformation");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
