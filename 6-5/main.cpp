#include <GL/glut.h>
float angle=0;
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);//細細長長的
        glutSolidCube(1);//方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//左半邊
        glTranslatef(-0.25,0,0);//手臂掛上肩關節
        glRotatef(angle,0,0,1);//轉動
        glTranslatef(-0.25,0,0);//將旋轉中心放在正中央
        hand();//上手臂
        glPushMatrix();//備份矩陣
            glTranslatef(-0.25,0,0);//把正確轉動的手臂掛在肩上
            glRotatef(angle,0,0,1);//轉動angle每次做就angle++
            glTranslatef(-0.25,0,0);//將旋轉中心放在正中央
            hand();//下手肘
        glPopMatrix();//還原矩陣
    glPopMatrix();
    glPushMatrix();//右半邊
        glTranslatef(+0.25,0,0);//手臂掛上肩關節
        glRotatef(-angle,0,0,1);//轉動
        glTranslatef(+0.25,0,0);//轉動
        hand();//上手臂
        glPushMatrix();//備份矩陣
            glTranslatef(+0.25,0,0);//把正確轉動的手臂掛在肩上
            glRotatef(-angle,0,0,1);//轉動angle每次做就angle++
            glTranslatef(+0.25,0,0);//將旋轉中心放在正中央
            hand();//下手肘
        glPopMatrix();//還原矩陣
    glPopMatrix();
    glutSwapBuffers();
    angle++;
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week06");
    glutIdleFunc(display);//一直畫
    glutDisplayFunc(display);//等一下顯示的函式
    glutMainLoop();
}
