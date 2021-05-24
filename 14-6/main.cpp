

#include <GL/glut.h>
int angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//step02-1
    glRotatef(angle,0,0,1);//step02-1
        glutSolidCube(0.3);
    glPopMatrix();//step02-1
    glutSwapBuffers();
}
int diff=2;
void timer(int t)//step02-1鬧鐘響了 timer叫了
{
    glutTimerFunc(20,timer,t+1);//step02-1設定下一個鬧鐘別睡太久
    angle+=diff;//step02-1上廁所
    if(angle>90||angle<0)diff=-diff;
    display();//step02-1喝水
}//又睡著了
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week14");
    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);//step02-1睡前第一個鬧鐘
    glutMainLoop();
}
