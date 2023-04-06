#include<GL/gl.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
float x,y,r,pk;

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);

    while(x<=y){
            x=x+1;
            if(pk<0){
                pk=pk+2*x+1;
                y=y;

            }
            else{
                pk=pk+2*x-2*y+1;
                y=y-1;
            }


        glBegin(GL_POINTS);
        glVertex2i(x,y);
        glVertex2i(y,x);
        glVertex2i(x,-y);
        glVertex2i(y,-x);
        glVertex2i(-x,-y);
        glVertex2i(-y,-x);
        glVertex2i(-x,y);
        glVertex2i(-y,x);


         glEnd();



    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(40,-40);
    glVertex2i(-40,-40);
    glEnd();


      glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(-40,15);
    glVertex2i(-40,-40);

    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(40,-15);
    glVertex2i(40,-40);
    glEnd();

    glFlush();

    }

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2i(0,10);
    glVertex2i(0,-10);
    glEnd();



}
void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPointSize(5.0);
    glOrtho(-100.0,100.0,-100.0,100.0,-100.0,100.0);
}

int main(int a,char **ar)
{
     printf("Enter value of r1:" );
    scanf("%f",&r);





     printf("Enter the center(x,y): ");
    scanf("%d%d", &x, &y);
    pk=1-r;
    x=0; y=r;

    glutInit(&a,ar);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Bowl");



    init();
    glutDisplayFunc(display);




    glutMainLoop();


    return 0;

}
