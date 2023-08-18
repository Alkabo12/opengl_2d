#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#include <mmsystem.h>
void timer(int);
void tree_six_line();
void tree_trangle();
void tree_trangles();
void tree_circle();
void sun();
void cloud_left();
void cloud_middle();
void cloud_right();
void sea_left();
void sea_right();
void face();
void stomach();
void nickie();
void leg();
void left_hand();
void right_hand();
void left_leg();
void right_leg();
void eye_left();
void eye_right();
void mouth();
void nose_left();
void nose_right();
void line_body();
void line_stomach();
void line_leg();
void line_left_hand();
void line_right_hand();
void background();

void display();
void reshape(int w,int h);

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH);

    glutInitWindowSize(1200,800);
glutInitWindowPosition(200,0);

    glutCreateWindow("beshoy19102706/momen19102610/reem19101002");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);

sndPlaySound("D:\\My Projects\\opengl\\7th\\music_12th.wav",SND_ASYNC);
    glutMainLoop();
}
static float x_left=0.50;
static float x_right=-0.50;
static float back_groud_move=-1;
static float rotate_move=0;

static int postion_monster=1;
static int postion_shapes=-1;
static int postion_background=1;
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(9000/60,timer,0);


rotate_move+=0.8; //rotated
if(rotate_move>360.0){
    rotate_move=rotate_move-360.0;
}
switch(postion_monster){
case 1:

    if(x_right<1.5)
        {
        x_right+=0.056;
    }
    else
        postion_monster=-1;
    break;

case -1:
 /* if(x_right>-0.8){                   // return
       x_right-=0.056;
    }
     else
    postion_monster=1;
     break;*/

   postion_monster=1;            //start
    x_right=-0.9;
    if(x_right<1.4)
        {
        x_right+=0.056;
    }
    else
        postion_monster=-1;
    break;


}
switch(postion_shapes){
case -1:

    if(x_left>-1.2)
        {
        x_left-=0.056;
    }
    else
        postion_shapes=1;
    break;

case 1:
   /*if(x_left<0.7){                // return
      x_left+=0.056;
    }
   else
    postion_shapes=-1;
  break;*/

      postion_shapes=-1;           //start
        x_left=0.9;
        if(x_left>-1.3){
          x_left-=0.056;
    }
    else
        postion_shapes=1;
    break;
}
switch(postion_background){
case 1:

    if(back_groud_move<1)
        {
        back_groud_move+=0.015;
    }
    else
        postion_background=-1;
    break;

case -1:
    if(back_groud_move>-1){
        back_groud_move-=0.056;
    }
    else
        postion_background=1;
    break;


}
}


void tree_six_line(){
    glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
     glVertex2f(x_left+0.8,-0.26);
glVertex2f(x_left+0.85,-0.26);
glVertex2f(x_left+0.85,-0.1);
 glVertex2f(x_left+0.8,-0.1);
    glEnd();
    glFlush();
    glColor3f(0.1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(x_left+0.88,-0.1);
 glVertex2f(x_left+0.77,-0.1);
 glVertex2f(x_left+0.74,-0.05);//
  glVertex2f(x_left+0.77,0);
  glVertex2f(x_left+0.88,0);
  glVertex2f(x_left+0.91,-0.05);//
     glEnd();
    glFlush();
}
void tree_trangle(){
     glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
     glVertex2f(x_left+0.6,-0.26);
glVertex2f(x_left+0.65,-0.26);
glVertex2f(x_left+0.65,-0.1);
 glVertex2f(x_left+0.6,-0.1);
    glEnd();

    glColor3f(0.1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(x_left+0.68,-0.1);
 glVertex2f(x_left+0.57,-0.1);
 glVertex2f(x_left+0.62,0);
     glEnd();
    glFlush();
}
void tree_trangles(){
     glColor3f(0.5f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
     glVertex2f(x_left+0.5,-0.26);
glVertex2f(x_left+0.45,-0.26);
glVertex2f(x_left+0.45,-0.1);
 glVertex2f(x_left+0.5,-0.1);
    glEnd();

    glColor3f(0.1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(x_left+0.53,-0.1);
 glVertex2f(x_left+0.42,-0.1);
 glVertex2f(x_left+0.47,0);
     glEnd();
     glColor3f(0.4, 1, 0);
glBegin(GL_POLYGON);
    glVertex2f(x_left+0.53,-0.03);
 glVertex2f(x_left+0.42,-0.03);
 glVertex2f(x_left+0.47,0.07);
 glEnd();
 glColor3f(x_left+0.2, 1, 0);
glBegin(GL_POLYGON);
    glVertex2f(x_left+0.53,0.04);
 glVertex2f(x_left+0.42,0.04);
 glVertex2f(x_left+0.47,0.12);
 glEnd();
    glFlush();
}
void tree_circle(){

     glColor3f(0.5f, 0.35f, 0.05f);
glBegin(GL_POLYGON);
 glVertex2f(x_left+0.2,-0.26);
glVertex2f(x_left+0.25,-0.26);
glVertex2f(x_left+0.25,-0.1);
 glVertex2f(x_left+0.2,-0.1);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.1, 1, 0);
//down
    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(x_left+0.23+x , -0.05+y); //output vertex
    }
 glEnd();
 //up
 glBegin(GL_POLYGON);
        glColor3f(0.1, 1, 0);
for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(x_left+0.23+x , 0.05+y); //output vertex
    }
 glEnd();
 //left
 glBegin(GL_POLYGON);
        glColor3f(0.1, 1, 0);
for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(x_left+0.18+x , y); //output vertex
    }
 glEnd();
 //right
  glBegin(GL_POLYGON);
        glColor3f(0.1, 1, 0);
for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(x_left+0.28+x , y); //output vertex
    }
 glEnd();
 glFlush();
}
void sun(){
    glClear(GL_DEPTH_BUFFER_BIT);

    glTranslated(0.0,0.0,0.0);
    glRotated(rotate_move,1.0,1.0,1.0);
     glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0 ,0.0);
for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.1*cos(angle);
        float y = 0.13*sin(angle);
        glVertex2f(-0.88+x , 0.85+y);
    }
 glEnd();
 //mouse
 glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);

    for (int i = 180; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.06*cos(angle);
        float y = 0.06*sin(angle);
        glVertex2f(-0.88+x , 0.82+y);
    }
 glEnd();
 //eye left
 glBegin(GL_POLYGON);
    glColor3f(1,1,1);
     for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.02*cos(angle);
        float y = 0.03*sin(angle);
        glVertex2f(-0.92+x , 0.89+y);
    }
    glEnd();
    //eye right
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
     for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.02*cos(angle);
        float y = 0.03*sin(angle);
        glVertex2f(-0.84+x , 0.89+y);
    }
    glEnd();
 glFlush();
}

void cloud_left(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(-0.1+x+x_left , 0.88+y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(-0.01+x+x_left , 0.88+y);
    }
    glEnd();
    glFlush();
}
void cloud_middle(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(0.3+x+x_left , 0.88+y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(0.39+x+x_left , 0.88+y);
    }
    glEnd();
    glFlush();
}
void cloud_right(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(0.7+x+x_left , 0.88+y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.08*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(0.79+x+x_left , 0.88+y);
    }
    glEnd();
    glFlush();
}
void sea_left(){
    glBegin(GL_POLYGON);
    glColor3f(0,0.5,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.3*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(-0.6+x+x_left , -0.7+y);
    }
    glEnd();
    glFlush();
}
void sea_right(){
    glBegin(GL_POLYGON);
    glColor3f(0,0.5,1);
    for (int i = 0; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.3*cos(angle);
        float y = 0.1*sin(angle);
        glVertex2f(0.6+x+x_left, -0.7+y);
    }
    glEnd();
    glFlush();
}
void face(){
     glColor3f(1.0 ,0.5 ,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5+x_right,0.1);
    glVertex2f(-0.2+x_right,0.1);
   glVertex2f(-0.2+x_right,0.5);
   glVertex2f(-0.5+x_right,0.5);
    glEnd();
    glFlush();
}

void stomach(){
    glColor3f(0.7f, 0.35f, 0.05f);
    glBegin(GL_POLYGON);
 glVertex2f(-0.5+x_right,0.1);
    glVertex2f(-0.2+x_right,0.1);
    glVertex2f(-0.2+x_right,-0.1);
glVertex2f(-0.5+x_right,-0.1);
    glEnd();
    glFlush();
}
void nickie(){
   glBegin(GL_POLYGON);
glVertex2f(-0.37+x_right,0.1);
glVertex2f(-0.33+x_right,0.1);
glVertex2f(-0.34+x_right,0.07);
 glVertex2f(-0.36+x_right,0.07);
 glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-0.36+x_right,0.07);
    glVertex2f(-0.34+x_right,0.07);
glVertex2f(-0.33+x_right,-0.03);
glVertex2f(-0.37+x_right,-0.03);
  glEnd();
    glFlush();
    glBegin(GL_POLYGON);
    glVertex2f(-0.37+x_right,-0.03);
    glVertex2f(-0.33+x_right,-0.03);
    glVertex2f(-0.35+x_right,-0.06);
     glEnd();
    glFlush();
}
void leg(){
  glColor3f(1.0 ,0.6 ,0.0);
glBegin(GL_POLYGON);
glVertex2f(-0.5+x_right,-0.1);
    glVertex2f(-0.2+x_right,-0.1);
    glVertex2f(-0.2+x_right,-0.25);
glVertex2f(-0.5+x_right,-0.25);
    glEnd();
    glFlush();
}
void left_hand(){
    glColor3f(1.0 ,0.6 ,0.0);
    glBegin(GL_TRIANGLES);
 glVertex2f(-0.5+x_right,0.1);
 glVertex2f(-0.53+x_right,0);
 glVertex2f(-0.5+x_right,-0.03);
    glEnd();
    glFlush();
}

void right_hand(){
    glColor3f(1.0 ,0.6 ,0.0);
    glBegin(GL_TRIANGLES);
 glVertex2f(-0.2+x_right,0.1);
 glVertex2f(-0.17+x_right,0);
 glVertex2f(-0.2+x_right,-0.03);
    glEnd();
    glFlush();
}
void left_leg(){
     glBegin(GL_POLYGON);
     glColor3f(0, 0, 0);
    for (int i = 180; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = -0.08*cos(angle); //lenth
        float y = -0.13*sin(angle); //wedth
        glVertex2f(-0.42+x+x_right , -0.25+y); //output vertex
    }
 glEnd();
}
void right_leg(){
     glBegin(GL_POLYGON);
       glColor3f(0, 0, 0);
    for (int i = 180; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = -0.07*cos(angle); //lenth
        float y = -0.13*sin(angle); //wedth
        glVertex2f(-0.27+x+x_right , -0.25+y); //output vertex
    }
 glEnd();
}
void eye_left(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(-0.42+x+x_right , 0.35+y); //output vertex
    }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.04*cos(angle); //lenth
        float y = 0.05*sin(angle); //wedth
        glVertex2f(-0.42+x+x_right , 0.35+y); //output vertex
    }
 glEnd();
}
void eye_right(){
     glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.07*cos(angle); //lenth
        float y = 0.08*sin(angle); //wedth
        glVertex2f(-0.28+x+x_right , 0.35+y); //output vertex
    }
 glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0,0,0);

    for (int i = 0; i < 360; i++)   {
        float angle = i*3.14/180;
        float x = 0.04*cos(angle); //lenth
        float y = 0.05*sin(angle); //wedth
        glVertex2f(-0.28+x+x_right , 0.35+y); //output vertex
    }
 glEnd();
}
void mouth(){
  glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for (int i = 180; i < 360; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.08*sin(angle);
        glVertex2f(-0.35+x+x_right , 0.2+y);
    }
 glEnd();
}
void nose_left(){
  glLineWidth(4);
   glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    for (int i = 0; i < 130; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.2*sin(angle);
        glVertex2f(-0.5+x+x_right ,0.5+y);
    }
 glEnd();
}
void nose_right(){
      glLineWidth(4);
   glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    for (int i = 65; i < 180; i++){
        float angle = i*3.14/180;
        float x = 0.07*cos(angle);
        float y = 0.2*sin(angle);
        glVertex2f(-0.2+x+x_right,0.5+y);
    }
 glEnd();
}
void line_body(){
    glLineWidth(4);
   glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(-0.2+x_right,0.5);
   glVertex2f(-0.5+x_right,0.5);
   glVertex2f(-0.5+x_right,-0.25);
   glVertex2f(-0.2+x_right,-0.25);

 glEnd();
    glFlush();
}
void line_stomach(){
     glLineWidth(4);
   glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.5+x_right,0.1);
    glVertex2f(-0.2+x_right,0.1);
    glEnd();
    glFlush();
}
void line_leg(){
     glLineWidth(4);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex2f(-0.5+x_right,-0.1);
    glVertex2f(-0.2+x_right,-0.1);
    glEnd();
    glFlush();
}
void line_left_hand(){
    glLineWidth(4);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex2f(-0.5+x_right,0.1);
 glVertex2f(-0.53+x_right,0);
   glEnd();
    glLineWidth(4);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
   glVertex2f(-0.53+x_right,0);
    glVertex2f(-0.5+x_right,-0.03);
     glEnd();

}
void line_right_hand(){
     glLineWidth(4);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
  glVertex2f(-0.2+x_right,0.1);
 glVertex2f(-0.17+x_right,0);

 glEnd();
 glLineWidth(4);
   glBegin(GL_LINES);
   glColor3f(0,0,0);
    glVertex2f(-0.17+x_right,0);
 glVertex2f(-0.2+x_right,-0.03);
 glEnd();
}
void background(){
    glBegin(GL_POLYGON); //dark blue
      glColor3f(0,0,0.5);
     glVertex2f(1,0.99);
 glVertex2f(-1,0.99);
 glVertex2f(-1,-0.26);
  glVertex2f(1,-0.26);

  glEnd();
     glBegin(GL_POLYGON);  //cyan
      glColor3f(0,1,1);
     glVertex2f(1,0.99+back_groud_move);
 glVertex2f(-1,0.99+back_groud_move);
 glVertex2f(-1,-0.26+back_groud_move);
  glVertex2f(1,-0.26+back_groud_move);

  glEnd();
    glBegin(GL_POLYGON);//green
      glColor3f(0.3,1,0);
     glVertex2f(-1,-0.26);
  glVertex2f(1,-0.26);
  glVertex2f(1,-1);
  glVertex2f(-1,-1);
   glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
background();
face();
stomach();
leg();
left_hand();
right_hand();
left_leg();
right_leg();
eye_left();
eye_right();
mouth();
nose_left();
nose_right();
line_body();
line_stomach();
line_leg();
line_left_hand();
line_right_hand();
nickie();
tree_six_line();
tree_trangle();
tree_trangles();
tree_circle();
cloud_left();
cloud_middle();
cloud_right();
sea_left();
sea_right();
sun();
glFlush();
}
void reshape(int w,int h)
{
 glViewport(1,1,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
}
