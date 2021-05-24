# yan0117.io
初學者 First time

我的興趣
=======
學習寫程式 聽歌 玩遊戲

我的目標
=======
嘗試把程式學好努力精進自己，並且試著把老師教我們的一些日常小工具給妥善運用ex:github、blogger
能夠在專研找到值得投入熱情的題目

[I have a blogger](https://2021graphics.blogspot.com/search/label/08160723_%E9%84%A7%E6%99%A8%E8%A8%80)

week2-1
-------
```C
#include <GL/glut.h>//使用GLUT外掛
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//GLUT的初始化
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//顯示模式
    glutCreateWindow("GLUT Shapes");//開GLUT視窗
    glutDisplayFunc(display);//顯示的函式
    glutMainLoop();//GLUT主要的迴圈 卡住不要結束
}
```
week2-2
-------
```C
#include<GL/glut.h>//使用GLUT外掛

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers

}

int main(int argc,char**argv)//以前是int main()

{

    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("08160723鄧晨言");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式

    glutMainLoop();//主要迴圈

}
```
week3-1
-------
```C
#include "glm.h"//使用glm.cpp的外掛

GLMmodel*pmodel=NULL;//pmodel指標

void drawmodel(void)//使用範例的程式

{

    if (!pmodel) {

	pmodel = glmReadOBJ("data/porsche.obj");

	if (!pmodel) exit(0);

	glmUnitize(pmodel);

	glmFacetNormals(pmodel);

	glmVertexNormals(pmodel, 90.0);

    }



    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);

}

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();

        glRotatef(180,0,1,0);

        drawmodel();//使用範例的程式

    glPopMatrix();

    glutSwapBuffers();

}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };

const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };



const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };

const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };

const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat high_shininess[] = { 100.0f };

int main(int argc,char ** argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week11");

    glEnable(GL_DEPTH_TEST);

    glDepthFunc(GL_LESS);



    glEnable(GL_LIGHT0);

    glEnable(GL_NORMALIZE);

    glEnable(GL_COLOR_MATERIAL);

    glEnable(GL_LIGHTING);



    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);

    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);

    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);



    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);

    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);

    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);

    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutDisplayFunc(display);

    glutMainLoop();

}
```
week3-2
-------
```C
#include<GL/glut.h>//使用GLUT外掛

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers

}

int main(int argc,char**argv)//以前是int main()

{

    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("08160723鄧晨言");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式

    glutMainLoop();//主要迴圈

}
```
week4-1
-------
```C
#include<GL/glut.h>//使用GLUT外掛

#include<stdio.h>//今日02

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers

}

void mouse(int button,int state,int x,int y)//今日03

{

    printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);

}

int main(int argc,char**argv)//以前是int main()

{

    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("week04");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式

    glutMouseFunc(mouse);//今日01

    glutMainLoop();//主要迴圈

}
```
week4-2
-------
```C
#include<GL/glut.h>//使用GLUT外掛

#include<stdio.h>//今日02

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空

    glutSolidTeapot(0.3);//實心茶壺

    glutSwapBuffers();//交換兩倍的buffers

}

void mouse(int button,int state,int x,int y)//今日03

{

    if(state==GLUT_DOWN){

        printf("glVertex3f((%d-150)/150.0,-(%d-150)/150.0\n",x,y);

 }

}

int main(int argc,char**argv)//以前是int main()

{

    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("week04");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式

    glutMouseFunc(mouse);//今日01

    glutMainLoop();//主要迴圈

}
```
week4-3
-------
```C
#include<GL/glut.h>//使用GLUT外掛
#include<stdio.h>//今日02
float teapotx=0,teapoty=0;//今日2-01
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空
    glPushMatrix();//今日2-03矩陣備份
    glTranslated(teapotx,teapoty,0);//今日2-04照著座標移動
    glutSolidTeapot(0.3);//實心茶壺
    glPopMatrix();//矩陣還原
    glutSwapBuffers();//交換兩倍的buffers
}
//void mouse(int button,int state,int x,int y)//今日03
//{
//   if(state==GLUT_DOWN){
//        printf("glVertex3f((%d-150)/150.0,-(%d-150)/150.0\n",x,y);
//  }
    //printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);
//}
void motion(int x,int y){//今日2-02
    teapotx=(x-150)/150.0;
    teapoty=-(y-150)/150.0;
    display();
}
int main(int argc,char**argv)//以前是int main()
{
    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("week04");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式
    //glutMouseFunc(mouse);//今日01
    glutMotionFunc(motion);//今日2-02
    glutMainLoop();//主要迴圈
}
```
week5-1
-------
```C
#include <GL/glut.h>
#include <stdio.h>
float vx[2000],vy[2000];//準備很多頂點 畫圖用的
int N=0;//N個頂點
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
        glVertex2f(vx[i],vy[i]);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse_event(int button,int state,int x,int y){
}
void motion(int x,int y){
    printf("%d %d\n",x,y);//紀錄頂點
    vx[N]=(x-150)/150.0;
    vy[N]=-(y-150)/150.0;
    N++;//做完N++後會去做display
    display();
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week05");
    glutDisplayFunc(display);//按下去彈起來
    glutMotionFunc(motion);//mouse motion拖曳or->在畫
    glutMainLoop();
}
```
week6-1
-------
```C
#include <GL/glut.h>
#include <stdio.h>
float vx[2000],vy[2000];//準備很多頂點 畫圖用的
int N=0;//N個頂點
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++){
        glVertex2f(vx[i],vy[i]);
    }
    glEnd();
    glutSwapBuffers();
}
void mouse_event(int button,int state,int x,int y){
}
void motion(int x,int y){
    printf("%d %d\n",x,y);//紀錄頂點
    vx[N]=(x-150)/150.0;
    vy[N]=-(y-150)/150.0;
    N++;//做完N++後會去做display
    display();
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week06");
    glutDisplayFunc(display);//按下去彈起來
    glutMotionFunc(motion);//mouse motion拖曳or->在畫
    glutMainLoop();
}
```
week6-2
-------
```C
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
```
week6-3
-------
```C
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
```
week6-4
-------
```C
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
    glPushMatrix();
        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();//上手臂
        glPushMatrix();//備份矩陣
            glTranslatef(-0.25,0,0);//把正確轉動的手臂掛在肩上
            glRotatef(angle,0,0,1);//轉動angle每次做就angle++
            glTranslatef(-0.25,0,0);//將旋轉中心放在正中央
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
```
week6-5
-------
```C
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
```
week8-1
-------
```C
#include <opencv/highgui.h>

int main()

{

    IplImage*img=cvLoadImage("puipui.jpg");

    cvShowImage("week08",img);

    cvWaitKey(0);



}
```
week8-2
-------
```C
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可

#include <opencv/cv.h>

#include <GL/glut.h>

void init()

{

    IplImage * img = cvLoadImage("puipui.jpg"); ///OpenCV讀圖

    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)

    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能

    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID

    glGenTextures(1, &id); /// 產生Generate 貼圖ID

    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);

}   ///最後一行最難/最重要, 所貼圖影像的資料都設定好

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON);

        glTexCoord2f(0,1);glVertex3f(-1,-1,0);

        glTexCoord2f(1,1);glVertex3f(+1,-1,0);

        glTexCoord2f(1,0);glVertex3f(+1,+1,0);

        glTexCoord2f(0,0);glVertex3f(-1,+1,0);

        glEnd();

    glutSolidTeapot(0.3);

    glutSwapBuffers();

}

int main(int argc,char**argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week08");

    init();

    glutDisplayFunc(display);

    glutMainLoop();

}
```
week10-1
-------
```C
#include<windows.h>

int main()

{

    PlaySound("shot.wav",NULL,SND_SYNC);

}
```
week10-2
-------
```C
#include<windows.h>
#include<stdio.h>
int main()
{
    char a;
    while(scanf("%c",&a)==1){

        if(a=='a')PlaySound("do.wav",NULL,SND_ASYNC);

        else if(a=='b')PlaySound("mi.wav",NULL,SND_ASYNC);

        else if(a=='c')PlaySound("fa.wav",NULL,SND_ASYNC);

        else if(a=='d')PlaySound("so.wav",NULL,SND_ASYNC);
    }
}
week10-3
-------
```C
#include<windows.h>
#include<GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='1')PlaySound("do.wav",NULL,SND_ASYNC);
    if(key=='2')PlaySound("fa.wav",NULL,SND_ASYNC);
    if(key=='3')PlaySound("so.wav",NULL,SND_ASYNC);
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week10 sound");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
```
week11-1main.cpp
-------
```C
#include "glm.h"//使用glm.cpp的外掛

GLMmodel*pmodel=NULL;//pmodel指標

void drawmodel(void)//使用範例的程式

{

    if (!pmodel) {

	pmodel = glmReadOBJ("data/porsche.obj");

	if (!pmodel) exit(0);

	glmUnitize(pmodel);

	glmFacetNormals(pmodel);

	glmVertexNormals(pmodel, 90.0);

    }



    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);

}

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    drawmodel();//使用範例的程式

    glutSwapBuffers();

}

int main(int argc,char ** argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week11");

    glutDisplayFunc(display);

    glutMainLoop();

}
```
week11-2maim.cpp
-------
```C
#include "glm.h"//使用glm.cpp的外掛

GLMmodel*pmodel=NULL;//pmodel指標

void drawmodel(void)//使用範例的程式

{

    if (!pmodel) {

	pmodel = glmReadOBJ("data/porsche.obj");

	if (!pmodel) exit(0);

	glmUnitize(pmodel);

	glmFacetNormals(pmodel);

	glmVertexNormals(pmodel, 90.0);

    }



    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);

}

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();

        glRotatef(180,0,1,0);

        drawmodel();//使用範例的程式

    glPopMatrix();

    glutSwapBuffers();

}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };

const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };



const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };

const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };

const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat high_shininess[] = { 100.0f };

int main(int argc,char ** argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);

    glutCreateWindow("week11");

    glEnable(GL_DEPTH_TEST);

    glDepthFunc(GL_LESS);



    glEnable(GL_LIGHT0);

    glEnable(GL_NORMALIZE);

    glEnable(GL_COLOR_MATERIAL);

    glEnable(GL_LIGHTING);



    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);

    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);

    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);



    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);

    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);

    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);

    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutDisplayFunc(display);

    glutMainLoop();

}
```
week12-1
-------
```C
#include <Gl/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week12");


    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutDisplayFunc(display);
    glutMainLoop();

}
```
week12-2
-------
```C
#include <Gl/glut.h>
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
	return id;
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week12");


    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    myTexture("Diffuse.jpg");

    glutDisplayFunc(display);
    glutMainLoop();

}
```
week13-1
-------
```C
 #include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可

#include <opencv/cv.h>

#include <GL/glut.h>

GLuint id1, id2; ///TODO:增加2個 貼圖ID

int myTexture(char * filename)

{

    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖

    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)

    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能

    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID

    glGenTextures(1, &id); /// 產生Generate 貼圖ID

    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);

    return id;

}

void display()

{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



    glBindTexture(GL_TEXTURE_2D, id1);

    glutSolidTeapot(0.3);



    glBindTexture(GL_TEXTURE_2D, id2);

    glBegin(GL_POLYGON);

        glTexCoord2f( 0, 0 ); glVertex2f( -1, -1 );

        glTexCoord2f( 0, 1 ); glVertex2f( -1, +1 );

        glTexCoord2f( 1, 1 ); glVertex2f( +1, +1 );

        glTexCoord2f( 1, 0 ); glVertex2f( +1, -1 );

    glEnd();

    glutSwapBuffers();

}

int main(int argc, char** argv)

{

    glutInit( &argc, argv );

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow(" Week08 ");

    glutDisplayFunc(display);



    id1 = myTexture("Diffuse.jpg");

    id2 = myTexture("bg.jpg");

    glEnable(GL_DEPTH_TEST);

    glutMainLoop();

}
```
week13-2
-------
```C
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
#include "glm.h"//使用外掛
GLMmodel*pmodel=NULL;//glm模型指標
void
drawmodel(void)
{
    if (!pmodel) {
	pmodel = glmReadOBJ("gundam.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_TEXTURE);
}
GLuint id1, id2; ///TODO:增加2個 貼圖ID
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBindTexture(GL_TEXTURE_2D, id1);
    drawmodel();

    glBindTexture(GL_TEXTURE_2D, id2);
    glBegin(GL_POLYGON);
        glTexCoord2f( 0, 0 ); glVertex2f( -1, -1 );
        glTexCoord2f( 0, 1 ); glVertex2f( -1, +1 );
        glTexCoord2f( 1, 1 ); glVertex2f( +1, +1 );
        glTexCoord2f( 1, 0 ); glVertex2f( +1, -1 );
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow(" Week08 ");
    glutDisplayFunc(display);

    id1 = myTexture("Diffuse.jpg");
    id2 = myTexture("bg.jpg");
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}
```
week13-3
-------
```C
#include <GL/glut.h>
int angle=0;
void drawarm1()
{
    glPushMatrix();
        glScalef(1,0.5,0.5);
        glColor3f(1,0,0);
        glutSolidCube(0.3);//左手紅
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//step02-1
        glColor3f(1,1,1);
        glutSolidCube(0.4);//身體白
        glPushMatrix();
            glTranslatef(-0.2,+0.2,0);//掛到右上角
            glRotatef(angle,0,0,1);//2轉動
            glTranslatef(-0.15,0,0);//1把旋轉中心的關節軸放在正中心
            drawarm1();
        glPopMatrix();
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
```
week13-4
-------
```C
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>
#include "glm.h"//使用外掛
GLMmodel*pmodel=NULL;//glm模型指標
GLMmodel*body=NULL;
GLMmodel*arm1=NULL;
GLMmodel*arm2=NULL;

void
drawmodel(void)
{
    if (!pmodel) {
	pmodel = glmReadOBJ("gundam.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_TEXTURE);
}
GLuint id1, id2; ///TODO:增加2個 貼圖ID
int myTexture(char * filename)
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
    return id;
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBindTexture(GL_TEXTURE_2D, id1);
    glPushMatrix();
        glTranslatef(0,-1,0);
        //glRotatef(angle,0,1,0);
        //drawmodel();
        glmDraw(body,GLM_SMOOTH|GLM_TEXTURE);
        glPushMatrix();
            glTranslatef(-0.35,+0.68+1,0);
            glRotatef(angle,0,0,1);
            glTranslatef(+0.35,-0.68-1,0);
            glmDraw(arm1,GLM_SMOOTH|GLM_TEXTURE);
        glPopMatrix();
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, id2);
    glBegin(GL_POLYGON);
        glTexCoord2f( 0, 0 ); glVertex3f( -1, -1,+0.8 );
        glTexCoord2f( 0, 1 ); glVertex3f( -1, +1,+0.8 );
        glTexCoord2f( 1, 1 ); glVertex3f( +1, +1,+0.8 );
        glTexCoord2f( 1, 0 ); glVertex3f( +1, -1,+0.8 );
    glEnd();
    glutSwapBuffers();
    angle++;
}
int main(int argc, char** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow(" Week08 ");
    glutDisplayFunc(display);
    glutIdleFunc(display);

    id1 = myTexture("Diffuse.jpg");
    id2 = myTexture("bg.jpg");
    body=glmReadOBJ("body.obj");
    arm1=glmReadOBJ("arm1.obj");
    arm2=glmReadOBJ("arm2.obj");

    pmodel=glmReadOBJ("gundam.obj");
    float dimensions[3];
    glmDimensions(pmodel,dimensions);
    glmScale(pmodel,dimensions[1]);
    glmScale(body,2.0/dimensions[1]);
    glmScale(arm1,2.0/dimensions[1]);
    glmScale(arm2,2.0/dimensions[1]);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}
```
week14-1
-------
```C
#include <GL/glut.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.3,30,30);//實心圓球 半徑 縱切 橫切

    glutSwapBuffers();

}

void timer(int t)

{

    glClearColor(1,0,0,0);//清除背景的顏色 改紅色

    display();

}

int main(int argc,char **argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);

    glutCreateWindow("week14");

    glutDisplayFunc(display);

    glutTimerFunc(4000,timer,0);//等多久 叫誰 參數

    glutMainLoop();

}
```
week14-2
-------
```C
#include <GL/glut.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glutWireSphere(0.3,30,30);

    glutSwapBuffers();

}

void timer(int t)

{

    glClearColor(1,0,0,0);//清除背景的顏色 改紅色

    display();

}

int main(int argc,char **argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);

    glutCreateWindow("week14");

    glutDisplayFunc(display);

    glutTimerFunc(4000,timer,0);//等多久 叫誰 參數

    glutMainLoop();

}
```
week14-3
-------
```C
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

void timer(int t)//step02-1鬧鐘響了 timer叫了

{

    glutTimerFunc(30,timer,t+1);//step02-1設定下一個鬧鐘別睡太久

    angle++;//step02-1上廁所

    display();//step02-1喝水

}//又睡著了

int main(int argc,char **argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);

    glutCreateWindow("week14");

    glutDisplayFunc(display);

    glutTimerFunc(4000,timer,0);//step02-1睡前第一個鬧鐘

    glutMainLoop();

}

```
week14-4
-------
```C
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
    if(angle>180)diff=-diff;
    if(angle<0)diff=-diff;
    display();//step02-1喝水
}//又睡著了
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week14");
    glutDisplayFunc(display);
    glutTimerFunc(4000,timer,0);//step02-1睡前第一個鬧鐘
    glutMainLoop();
}
```
week14-5
-------
```C
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
    if(angle>180)diff=-diff;
    if(angle<0)diff=-diff;
    display();//step02-1喝水
}//又睡著了
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week14");
    glutDisplayFunc(display);
    glutTimerFunc(4000,timer,0);//step02-1睡前第一個鬧鐘
    glutMainLoop();
}
```
week14-6
-------
```C


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
```
week14-7
-------
```C
#include <GL/glut.h>
int angle=0;
void drawarm1()
{
    glPushMatrix();
        glScalef(1,0.5,0.5);
        glColor3f(1,0,0);
        glutSolidCube(0.3);//左手紅
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//step02-1
        glColor3f(1,1,1);
        glutSolidCube(0.4);//身體白
        glPushMatrix();
            glTranslatef(-0.2,+0.2,0);//掛到右上角
            glRotatef(angle,0,0,1);//2轉動
            glTranslatef(-0.15,0,0);//1把旋轉中心的關節軸放在正中心
            drawarm1();
        glPopMatrix();
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
```
