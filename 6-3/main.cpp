#include <GL/glut.h>
float angle=0;
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//備份矩陣
        //glTranslatef(0,0,0);//把正確轉動的手臂掛在肩上
        //glRotatef(angle++,0,0,1);//轉動angle每次做就angle++
        glTranslatef(-0.25,0,0);//將旋轉中心放在正中央
        glScalef(0.5,0.1,0.1);//調大小變細長
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
