#include<GL/gl.h>
#include<GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
     glVertex2i(30,30);
     glVertex2i(70,30);
     glVertex2i(70,35);
     glVertex2i(30,35);
     glEnd();

    glColor3f(1.0,0.0,1.0);
     glBegin(GL_POLYGON);
     glVertex2i(35,50);
     glVertex2i(45,50);
     glVertex2i(65,50);
     glEnd();
     glFlush();
}
void init(void)
{
    glClearColor(0.0,0.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glPointSize(10.0);
     glLoadIdentity();
      glOrtho(0.0, 100.0, 0.0, 100.0,- 100.0, 100.0);
}
int main(int a,char **ar)
{
    glutInit(&a,ar);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(200,200);
    glutCreateWindow("basic");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
