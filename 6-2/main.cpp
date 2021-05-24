#include <GL/glut.h>
float angle=0;
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//備份矩陣
        glRotatef(angle++,0,0,1);//轉動angle每次做就angle++
        glutSolidCube(1);//方形
    glPopMatrix();//還原矩陣
    glutSwapBuffers();
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week06");
    glutIdleFunc(display);//一直畫
    glutDisplayFunc(display);//等一下顯示的函式
    glutMainLoop();
}
