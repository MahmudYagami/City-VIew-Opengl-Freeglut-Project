#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cstdio>
using namespace std;
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080

float trainpos = 200;
float trainspeed = 0.50;

void drawGradientCircle(float cx, float cy, float radius, int numSegments) {
      glBegin(GL_TRIANGLE_FAN);

    // Center of the circle
    glVertex2f(cx, cy);

    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * M_PI * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = cx + radius * cos(theta);
        float y = cy + radius * sin(theta);

        glVertex2f(x, y);
    }

    glEnd();
}

void drawGradientCircle1(float cx, float cy, float radius, int numSegments) {
      glBegin(GL_TRIANGLE_FAN);

    // Center of the circle
    glVertex2f(cx, cy);

    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * M_PI * static_cast<float>(i) / static_cast<float>(numSegments);
        float x = cx + radius * cos(theta);
        float y = cy + radius * sin(theta);

        glVertex2f(x, y);
    }

    glEnd();
}


void building_line_first(int tx,int ty)
{
    glPushMatrix();
    glScalef(1, 1, 0);
    glTranslatef(tx, ty, 0);
    glBegin(GL_POLYGON);
    glColor4ub(92,48,232,255);
    glVertex2f(822, 713);
    glVertex2f(1024, 713);
    glVertex2f(1024, 715);
    glVertex2f(822, 715);
    glEnd();
    glPopMatrix();
}
void windows_of_first_building(int x, int y)
{
    // windows
    glPushMatrix();
    glScalef(1, 1, 0);
    glTranslatef(x, y, 0);
    glBegin(GL_POLYGON);
    glColor4ub(216, 221, 188, 255);
    glVertex2f(1016, 721);
    glVertex2f(1020, 721);
    glVertex2f(1020, 720);
    glVertex2f(1016, 720);
    glEnd();
    glPopMatrix();
}
void building_line_type1(int tx,int ty)
{
    glPushMatrix();
    glScalef(1, 1, 0);
    glTranslatef(tx, ty, 0);
    glBegin(GL_POLYGON);
    glColor4ub(113, 0, 224, 255);
    glVertex2f(1043, 465);
    glVertex2f(1143, 465);
    glVertex2f(1143, 463);
    glVertex2f(1043, 463);
    glEnd();
    glPopMatrix();
}
void draw_building_type1()
{
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1043, 457);
    glVertex2f(1143, 457);
    glColor4ub(116, 0, 212, 255);
    glVertex2f(1143, 866.01);
    glVertex2f(1043, 866.01);
    glEnd();
    for(int i=0;i<=400;i=i+10)
    {
        building_line_type1(1,i);
    }
    windows_of_first_building(100,-50);
    windows_of_first_building(102,-50);
    windows_of_first_building(100,-250);
    windows_of_first_building(110,-250);
    windows_of_first_building(113,-250);
    windows_of_first_building(50,-250);
    windows_of_first_building(80,-190);
    windows_of_first_building(90,-170);
    windows_of_first_building(80,-150);
    windows_of_first_building(83,-150);
    windows_of_first_building(85,-150);

    glBegin(GL_POLYGON);
    glColor4ub(255,186,157,255);
    glVertex2f(1043, 457);
    glVertex2f(1055.26, 457);
    glColor4ub(248,253,255,255);
    glVertex2f(1055.26, 866.01);
    glVertex2f(1043, 866.01);
    glEnd();
    

}
void building_light()
{

    glBegin(GL_POLYGON);
    glColor4ub(210,124,242,255);
    glVertex2f(1262, 510);
    glVertex2f(1282, 510);
    glColor4ub(198,63,251,255);
    glVertex2f(1282, 866.01);
    glVertex2f(1262, 866.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(210,124,242,255);
    glVertex2f(1304, 510);
    glVertex2f(1325, 510);
    glColor4ub(198,63,251,255);
    glVertex2f(1325, 866.01);
    glVertex2f(1304, 866.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(210,124,242,255);
    glVertex2f(1347, 510);
    glVertex2f(1367, 510);
    glColor4ub(198,63,251,255);
    glVertex2f(1367, 866.01);
    glVertex2f(1347, 866.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(210,124,242,255);
    glVertex2f(558, 470);
    glVertex2f(580, 470);
    glColor4ub(198,63,251,255);
    glVertex2f(580, 866.01);
    glVertex2f(558, 866.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(210,124,242,255);
    glVertex2f(600, 470);
    glVertex2f(620, 470);
    glColor4ub(198,63,251,255);
    glVertex2f(620, 670);
    glVertex2f(600, 670);
    glEnd();

}
void adjust_draw_building_type1(int tx)
{
    glPushMatrix();
    glScalef(1, 1, 0);
    glTranslatef(tx, 5, 0);
    draw_building_type1();
    glPopMatrix();
}
void draw_building_type2()
{
    //draw back building

    glBegin(GL_POLYGON);
    glColor4ub(121,16,240,255);
    glVertex2f(1351, 867);
    glVertex2f(1473, 867);
    glColor4ub(182,0,235,255);
    glVertex2f(1473, 568);
    glVertex2f(1351, 568);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(72,0,167,255);
    glVertex2f(1364, 567);
    glVertex2f(1364, 559);
    glVertex2f(1380, 559);
    glVertex2f(1411, 524);
    glVertex2f(1442, 559);
    glVertex2f(1459, 559);
    glVertex2f(1459, 567);
    glEnd();
    for (size_t i = 110; i <= 400; i=i+10)
    {
        building_line_type1(330,i);
    }
    

    glBegin(GL_POLYGON);
    glColor4ub(250,255,255,255);
    glVertex2f(1388, 867);
    glVertex2f(1398, 867);
    glColor4ub(216,55,255,255);
    glVertex2f(1398, 580);
    glVertex2f(1388, 580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(250,255,255,255);
    glVertex2f(1434, 867);
    glVertex2f(1444, 867);
    glColor4ub(216,55,255,255);
    glVertex2f(1444, 580);
    glVertex2f(1434, 580);
    glEnd();

    //draw front one
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1227, 482);
    glVertex2f(1381, 482);
    glColor4ub(116, 0, 212, 255);
    glVertex2f(1381, 866);
    glVertex2f(1227, 866);
    glEnd();
    glBegin(GL_POLYGON);
    glColor4ub(247,210,105,255);
    glVertex2f(1227, 482);
    glVertex2f(1239, 482);
    glColor4ub(247,255,254,255);
    glVertex2f(1239, 866);
    glVertex2f(1227, 866);
    glEnd();

    //draw light
    glBegin(GL_POLYGON);
    glColor4ub(255,255,210,255);
    glVertex2f(1287, 495);
    glVertex2f(1301, 495);
    glVertex2f(1301, 493);
    glVertex2f(1301, 493);
    glEnd();

    //draw 2nd front building
    glBegin(GL_POLYGON);
    glColor4ub(60,0,121,255);
    glVertex2f(1415, 867);
    glVertex2f(1550, 867);
    glVertex2f(1550, 668);
    glVertex2f(1415, 668);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(248,0,255,255);
    glVertex2f(1415, 867);
    glVertex2f(1430, 867);
    glColor4ub(201,0,254,255);
    glVertex2f(1430, 668);
    glVertex2f(1415, 668);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1452, 867);
    glVertex2f(1464, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1464, 678);
    glVertex2f(1452, 678);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1468, 867);
    glVertex2f(1472, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1472, 678);
    glVertex2f(1468, 678);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1484, 867);
    glVertex2f(1496, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1496, 678);
    glVertex2f(1484, 678);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1484+16, 867);
    glVertex2f(1496+8, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1496+8, 678);
    glVertex2f(1484+16, 678);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1516, 867);
    glVertex2f(1527, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1527, 678);
    glVertex2f(1516, 678);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(191,31,255,255);
    glVertex2f(1516+16, 867);
    glVertex2f(1527+8, 867);
    glColor4ub(212,132,241,255);
    glVertex2f(1527+8, 678);
    glVertex2f(1516+16, 678);
    glEnd();

    //draw 3rd building
    glBegin(GL_POLYGON);
    glColor4ub(108,0,172,255);
    glVertex2f(1568, 867);
    glVertex2f(1743, 867);
    glVertex2f(1743, 791);
    glVertex2f(1568, 791);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(195,46,253,255);
    glVertex2f(1526, 867);
    glVertex2f(1568, 867);
    glColor4ub(193,167,244,255);
    glVertex2f(1568, 791);
    glVertex2f(1526, 791);
    glEnd();



}

void building_line_second(int tx,int ty)
{
    glPushMatrix();
    glScalef(1, 1, 0);
    glTranslatef(tx, ty, 0);
    glBegin(GL_POLYGON);
    glColor4ub(178,0,247,255);
    glVertex2f(658, 645);
    glVertex2f(871, 645);
    glVertex2f(871, 647);
    glVertex2f(658, 647);
    glEnd();
    glPopMatrix();
}
void draw_design_building1()
{

    glBegin(GL_POLYGON);
    glColor4ub(239,0,255,255);
    glVertex2f(658, 867);
    glVertex2f(885, 867);
    glColor4ub(113,0,226,255);
    glVertex2f(885, 643);
    glVertex2f(658, 643);
    glEnd();
    for (size_t i =0; i<=220; i=i+10)
    {
        /* code */
        building_line_second(1,i);
    }

    glBegin(GL_POLYGON);
    glColor4ub(111,241,255,255);
    glVertex2f(864, 867);
    glVertex2f(885, 867);
    glColor4ub(144,152,255,255);
    glVertex2f(885, 643);
    glVertex2f(864, 643);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(822, 867);
    glVertex2f(1024, 867);
    glColor4ub(116, 0, 212, 255);
    glVertex2f(1024, 711);
    glVertex2f(822, 711);
    glEnd();
    for (size_t i = 0; i<=150; i=i+10)
    {
        /* code */
        building_line_first(1,i);
    }
    
    

    glBegin(GL_POLYGON);
    glColor4ub(107,237,240,255);
    glVertex2f(1004, 867);
    glVertex2f(1024, 867);
    glColor4ub(48,120,152,255);
    glVertex2f(1024, 711);
    glVertex2f(1004, 711);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(167,0,255,255);
    glVertex2f(552, 867);
    glVertex2f(679, 867);
    glColor4ub(97,0,209,255);
    glVertex2f(679, 455);
    glVertex2f(552, 455);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(222,14,246,255);
    glVertex2f(640, 867);
    glVertex2f(679, 867);
    glColor4ub(101,11,177,255);
    glVertex2f(679, 455);
    glVertex2f(640, 455);
    glEnd();

    //background build
    glBegin(GL_POLYGON);
    glColor4ub(69,1,136,255);
    glVertex2f(912, 709);
    glVertex2f(1017, 709);
    glColor4ub(85,0,126,255);
    glVertex2f(1017, 556);
    glVertex2f(912, 556);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(115,72,192,255);
    glVertex2f(1000, 709);
    glVertex2f(1017, 709);
    glColor4ub(188,34,253,255);
    glVertex2f(1017, 556);
    glVertex2f(1000, 556);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(133,0,228,255);
    glVertex2f(589, 867);
    glVertex2f(698, 867);
    glColor4ub(89,0,186,255);
    glVertex2f(698, 676);
    glVertex2f(589, 676);
    glEnd();
  for(int i=0;i<=180;i=i+10)
  {
    glPushMatrix();
    glTranslatef(1,i, 0);
    glBegin(GL_POLYGON);
    glColor4ub(152,0,241,255);
    glVertex2f(589, 681);
    glVertex2f(698, 681);
    glVertex2f(698, 679);
    glVertex2f(589, 679);
    glEnd();
    glPopMatrix();

  }
    
    glBegin(GL_POLYGON);
    glColor4ub(109,249,237,255);
    glVertex2f(687, 867);
    glVertex2f(698, 867);
    glColor4ub(48,123,156,255);
    glVertex2f(698, 676);
    glVertex2f(687, 676);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(165,0,255,255);
    glVertex2f(409, 867);
    glVertex2f(532, 867);
    glColor4ub(79,0,174,255);
    glVertex2f(532, 514);
    glVertex2f(409, 514);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(248,255,255,255);
    glVertex2f(498, 867);
    glVertex2f(532, 867);
    glColor4ub(232,178,114,255);
    glVertex2f(532, 514);
    glVertex2f(498, 514);
    glEnd();

for(int i=0;i<=300;i=i+10)
  {
    glPushMatrix();
    glTranslatef(1,i, 0);
    glBegin(GL_POLYGON);
    glColor4ub(116,0,237,255);
    glVertex2f(425, 538);
    glVertex2f(435, 538);
    glVertex2f(435, 536);
    glVertex2f(425, 536);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1,i, 0);
    glBegin(GL_POLYGON);
    glColor4ub(116,0,237,255);
    glVertex2f(469, 538);
    glVertex2f(479, 538);
    glVertex2f(479, 536);
    glVertex2f(469, 536);
    glEnd();
    glPopMatrix();
    building_light();


  }


}
void draw_building_type3()
{
    glBegin(GL_POLYGON);
    glColor4ub(165,0,255,255);
    glVertex2f(308, 867);
    glVertex2f(692, 867);
    glColor4ub(79,0,174,255);
    glVertex2f(692, 673);
    glVertex2f(308, 673);
    glEnd();

}
void background_shadow_type1()
{
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(815, 766.94);
    glVertex2f(855.09, 766.94);
    glVertex2f(855.09, 876.01);
    glVertex2f(815, 876.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(855.09, 680);
    glVertex2f(905.1, 680);
    glVertex2f(905.1, 876.01);
    glVertex2f(855.09, 876.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(905.1,453.71);
    glVertex2f(1005.08, 453.71);
    glVertex2f(1005.08, 876.01);
    glVertex2f(905.1, 876.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1005.08, 876.01);
    glVertex2f(1005.08, 538.65);
    glVertex2f(1023.09, 521.35);
    glVertex2f(1052.56, 555.09);
    glVertex2f(1052.56, 876.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1052.56, 876.01);
    glVertex2f(1082, 876.01);
    glVertex2f(1082, 555.09);
    glVertex2f(1052.56, 555.09);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1082, 876.01);
    glVertex2f(1119, 876.01);
    glVertex2f(1119, 633.03);
    glVertex2f(1082, 633.03);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1119, 876.01);
    glVertex2f(1158, 876.01);
    glVertex2f(1158, 626.04);
    glVertex2f(1119, 626.04);
    glEnd();

    glBegin(GL_LINES);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1158, 626.04);
    glVertex2f(1158, 588);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1158, 876.01);
    glVertex2f(1173, 876.01);
    glVertex2f(1173, 632);
    glVertex2f(1158, 632);
    glEnd();
}
void background_shadow_type2()
{
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1198, 876.01);
    glVertex2f(1229, 876.01);
    glVertex2f(1229, 659);
    glVertex2f(1198, 659);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1229, 876.01);
    glVertex2f(1258.76, 876.01);
    glVertex2f(1258.76, 653.60);
    glVertex2f(1229, 653.60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1258.76, 876.01);
    glVertex2f(1263.39, 876.01);
    glVertex2f(1263.39, 650);
    glVertex2f(1258.76, 650);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1263.39, 876.01);
    glVertex2f(1287,  876.01);
    glVertex2f(1287, 644);
    glVertex2f(1263.39, 644);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1287,  876.01);
    glVertex2f(1291.37, 876.01);
    glVertex2f(1291.37, 653);
    glVertex2f(1287, 653);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1287,  876.01);
    glVertex2f(1291.37, 876.01);
    glVertex2f(1291.37, 653);
    glVertex2f(1287, 653);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1291.37, 876.01);
    glVertex2f(1315,876.01);
    glVertex2f(1315,616);
    glVertex2f(1291.37, 616);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1315,876.01);
    glVertex2f(1329, 876.01);
    glVertex2f(1329, 639);
    glVertex2f(1315,639);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1329, 876.01);
    glVertex2f(1362,876.01);
    glVertex2f(1362,653);
    glVertex2f(1329, 653);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1362,876.01);
    glVertex2f(1370, 876.01);
    glVertex2f(1370, 647);
    glVertex2f(1362,647);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1370, 876.01);
    glVertex2f(1450,876.01);
    glVertex2f(1450,615);
    glVertex2f(1370, 615);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1450,876.01);
    glVertex2f(1484, 876.01);
    glVertex2f(1484, 587.65);
    glVertex2f(1450,587.65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1484, 876.01);
    glVertex2f(1531,876.01);
    glVertex2f(1531,578.85);
    glVertex2f(1484, 578.85);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1531,876.01);
    glVertex2f(1561, 876.01);
    glVertex2f(1561, 588);
    glVertex2f(1531,588);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1561, 876.01);
    glVertex2f(1561,775);
    glVertex2f(1580,775);
    glVertex2f(1580,783);
    glVertex2f(1602,783);
    glVertex2f(1602,792);
    glVertex2f(1616,792);
    glVertex2f(1616,807);
    glVertex2f(1649,807);
    glVertex2f(1649,876.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1649,876.01);
    glVertex2f(1649,801);
    glVertex2f(1674,801);
    glVertex2f(1674,807);
    glVertex2f(1692,807);
    glVertex2f(1692,813);
    glVertex2f(1705,813);
    glVertex2f(1705,876.01);
    glEnd();

    glBegin(GL_LINES);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1504,578);
    glVertex2f(1504,536);
    glEnd();

    glBegin(GL_LINES);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1496,578);
    glVertex2f(1496,558);
    glEnd();

}
void adjust_background_shadow_type2()
{
    glPushMatrix();
    //glScalef(1, 1, 0);
    glTranslatef(-1200, 0, 0);
    background_shadow_type2();
    glPopMatrix();
}
void adjust_background_shadow_type1()
{
    glPushMatrix();
    //glScalef(1, 1, 0);
    glTranslatef(-300, 0, 0);
    background_shadow_type1();
    glPopMatrix();
    glPushMatrix();
    //glScalef(1, 1, 0);
    glTranslatef(800, 0, 0);
    background_shadow_type1();
    glPopMatrix();
}
void small_shadow()
{
    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(0,867);
    glVertex2f(0,748);
    glVertex2f(13,748);
    glVertex2f(13,751);
    glVertex2f(29,751);
    glVertex2f(29,867);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(29,867);
    glVertex2f(66,867);
    glVertex2f(66,764);
    glVertex2f(29,764);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(66,867);
    glVertex2f(66,778);
    glVertex2f(69,778);
    glVertex2f(69,781);
    glVertex2f(84,781);
    glVertex2f(84,774);
    glVertex2f(91,774);
    glVertex2f(91,867);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(91,867);
    glVertex2f(91,764);
    glVertex2f(101,764);
    glVertex2f(101,781);
    glVertex2f(103,781);
    glVertex2f(103,777);
    glVertex2f(106,777);
    glVertex2f(106,713);
    glVertex2f(146,713);
    glVertex2f(146,748);
    glVertex2f(153,740);
    glVertex2f(166,754);
    glVertex2f(166,867);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(166,867);
    glVertex2f(166,754);
    glVertex2f(172,754);
    glVertex2f(172,758);
    glVertex2f(177,758);
    glVertex2f(177,786);
    glVertex2f(192,786);
    glVertex2f(192,783);
    glVertex2f(202,783);
    glVertex2f(202,786);
    glVertex2f(208,786);
    glVertex2f(208,867);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(208,867);
    glVertex2f(208,805);
    glVertex2f(215,805);
    glVertex2f(215,808);
    glVertex2f(217,808);
    glVertex2f(217,795);
    glVertex2f(225,795);
    glVertex2f(225,803);
    glVertex2f(229,803);
    glVertex2f(229,808);
    glVertex2f(241,808);
    glVertex2f(241,806);
    glVertex2f(243,806);
    glVertex2f(243,795);
    glVertex2f(271,795);
    glVertex2f(271,867);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4ub(10,12,74,255);
    glVertex2f(271,867);
    glVertex2f(271,785);
    glVertex2f(309,785);
    glVertex2f(309,849);
    glVertex2f(315,849);
    glVertex2f(315,852);
    glVertex2f(323,852);
    glVertex2f(323,855);
    glVertex2f(327,855);
    glVertex2f(327,867);
    glEnd();

}
void adjust_small_shadow()
{
    glPushMatrix();
    //glScalef(1, 1, 0);
    glTranslatef(1700, 0, 0);
    small_shadow();
    glPopMatrix();
}
void akash()
{
    glBegin(GL_POLYGON);
    glColor4ub(144, 37, 227, 255);
    glVertex2f(0, 869.93);
    glVertex2f(1920, 869.93);
    glColor4ub(32, 1, 131, 255);
    glVertex2f(1920, 0);
    glVertex2f(0, 0);
    glEnd();
}
void draw_train()
{

    glPushMatrix();
    glTranslatef(trainpos, 1050, 0);
    glScalef(-1,-1,0);
    // start of color and drawing

    // main body
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(440, 170);
    glVertex2i(440, 210);
    glVertex2i(0, 210);
    glEnd();

    // upperLine main body
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(5, 210);
    glVertex2i(435, 210);
    glVertex2i(435, 215);
    glVertex2i(5, 215);
    glEnd();

    glColor3ub(61, 69, 82);
    glBegin(GL_QUADS);
    glVertex2i(5, 210);
    glVertex2i(35, 210);
    glVertex2i(35, 215);
    glVertex2i(5, 215);
    glEnd();

    // face
    glColor3ub(102, 121, 134);
    glBegin(GL_QUADS);
    glVertex2i(0, 170);
    glVertex2i(40, 170);
    glVertex2i(40, 205);
    glVertex2i(0, 205);
    glEnd();

    // face stripe
    glColor3ub(106, 120, 133);
    glBegin(GL_QUADS);
    glVertex2i(0, 175);
    glVertex2i(40, 175);
    glVertex2i(40, 180);
    glVertex2i(0, 180);
    glEnd();

    // lights

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(5, 175);
    glVertex2i(10, 175);
    glVertex2i(10, 185);
    glVertex2i(5, 185);
    glEnd();

    glColor3ub(226, 225, 226);
    glBegin(GL_QUADS);
    glVertex2i(30, 175);
    glVertex2i(35, 175);
    glVertex2i(35, 185);
    glVertex2i(30, 185);
    glEnd();

    // frontWindow
    glColor3ub(146, 168, 175);
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(5, 190);
    glVertex2i(35, 190);
    glVertex2i(35, 205);
    glVertex2i(5, 205);
    glEnd();

    // long stripes
    // up
    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40, 205);
    glVertex2i(440, 205);
    glVertex2i(440, 210);
    glVertex2i(40, 210);
    glEnd();

    // down
    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(40, 175);
    glVertex2i(65, 175);
    glVertex2i(65, 180);
    glVertex2i(40, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(100, 175);
    glVertex2i(200, 175);
    glVertex2i(200, 180);
    glVertex2i(100, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(235, 175);
    glVertex2i(335, 175);
    glVertex2i(335, 180);
    glVertex2i(235, 180);
    glEnd();

    glColor3ub(148, 167, 176);
    glBegin(GL_QUADS);
    glVertex2i(370, 175);
    glVertex2i(440, 175);
    glVertex2i(440, 180);
    glVertex2i(370, 180);
    glEnd();

    // train windows and door component(1)
    // window
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(55, 185);
    glVertex2i(65, 185);
    glVertex2i(65, 200);
    glVertex2i(55, 200);
    glEnd();

    // doors
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(70, 170);
    glVertex2i(80, 170);
    glVertex2i(80, 200);
    glVertex2i(70, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(85, 170);
    glVertex2i(95, 170);
    glVertex2i(95, 200);
    glVertex2i(85, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(100, 185);
    glVertex2i(110, 185);
    glVertex2i(110, 200);
    glVertex2i(100, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(115, 185);
    glVertex2i(125, 185);
    glVertex2i(125, 200);
    glVertex2i(115, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(130, 185);
    glVertex2i(140, 185);
    glVertex2i(140, 200);
    glVertex2i(130, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(145, 185);
    glVertex2i(155, 185);
    glVertex2i(155, 200);
    glVertex2i(145, 200);
    glEnd();
    // end of window + doors component(1)

    // train windows and door component(2)
    // window
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(185, 185);
    glVertex2i(195, 185);
    glVertex2i(195, 200);
    glVertex2i(185, 200);
    glEnd();

    // doors
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(200, 170);
    glVertex2i(210, 170);
    glVertex2i(210, 200);
    glVertex2i(200, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(215, 170);
    glVertex2i(225, 170);
    glVertex2i(225, 200);
    glVertex2i(215, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(230, 185);
    glVertex2i(240, 185);
    glVertex2i(240, 200);
    glVertex2i(230, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(245, 185);
    glVertex2i(255, 185);
    glVertex2i(255, 200);
    glVertex2i(245, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(260, 185);
    glVertex2i(270, 185);
    glVertex2i(270, 200);
    glVertex2i(260, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(275, 185);
    glVertex2i(285, 185);
    glVertex2i(285, 200);
    glVertex2i(275, 200);
    glEnd();
    // end of window + doors component(2)

    // train windows and door component(3)
    // window
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(325, 185);
    glVertex2i(335, 185);
    glVertex2i(335, 200);
    glVertex2i(325, 200);
    glEnd();

    // doors
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(340, 170);
    glVertex2i(350, 170);
    glVertex2i(350, 200);
    glVertex2i(340, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(355, 170);
    glVertex2i(365, 170);
    glVertex2i(365, 200);
    glVertex2i(355, 200);
    glEnd();
    // end doors

    // more windows
    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(370, 185);
    glVertex2i(380, 185);
    glVertex2i(380, 200);
    glVertex2i(370, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(385, 185);
    glVertex2i(395, 185);
    glVertex2i(395, 200);
    glVertex2i(385, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(400, 185);
    glVertex2i(410, 185);
    glVertex2i(410, 200);
    glVertex2i(400, 200);
    glEnd();

    glColor3ub(233, 209, 102);
    glBegin(GL_QUADS);
    glVertex2i(415, 185);
    glVertex2i(425, 185);
    glVertex2i(425, 200);
    glVertex2i(415, 200);
    glEnd();
    // end of window + doors component(3)

    // end of color and drawing
    glPopMatrix();
}

void water()
{
    glBegin(GL_POLYGON);
    glColor4ub(120, 2, 136, 255);
    glVertex2f(0, 867);
    glVertex2f(1920, 867);
    glColor4ub(11, 13, 88, 255);
    glVertex2f(1920, 1080);
    glVertex2f(0, 1080);
    glEnd();
}
void shadow_light_water()
{
    glBegin(GL_POLYGON);
    glColor4ub(181,43,152,100);
    glVertex2f(601, 867);
    glVertex2f(1337, 867);
    glColor4ub(23,15,91,255);
    glVertex2f(1337, 1077);
    glVertex2f(601, 1077);
    glEnd();
}
void bridge_piler()
{
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(46, 906);
    glVertex2f(60, 906);
    glVertex2f(60, 944);
    glVertex2f(46, 944);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(206, 206, 203);
    glVertex2f(46, 985);
    glVertex2f(60, 985);
    glVertex2f(60, 944);
    glVertex2f(46, 944);
    glEnd();
}
void adjust_bridge_piler(int tx)
{
    glPushMatrix();
    glTranslatef(tx, 0, 0);
    bridge_piler();
    glPopMatrix();

}
void bridge_line()
{
    glBegin(GL_POLYGON);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(0, 906);
    glVertex2f(1920, 906);
    glColor4ub(67, 0, 151, 255);
    glVertex2f(1920, 880);
    glVertex2f(0, 880);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(206, 206, 203);
    glVertex2f(1098, 880);
    glVertex2f(1206, 638);
    glVertex2f(1217, 638);
    glVertex2f(1111, 880);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(206, 206, 203);
    glVertex2f(1320, 880);
    glVertex2f(1227, 638);
    glVertex2f(1212, 638);
    glVertex2f(1332, 880);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(206, 206, 203);
    glVertex2f(1209, 880);
    glVertex2f(1221, 880);
    glVertex2f(1221, 539);
    glVertex2f(1209, 539);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(206, 206, 203);
    glVertex2f(1200, 653);
    glVertex2f(1230, 653);
    glVertex2f(1230, 540);
    glVertex2f(1200, 540);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(1145, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(1092, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(1039, 880);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(984, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(926, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(865, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(800, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(725, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(642, 880);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1203, 542);
    glVertex2f(546, 880);
    glEnd();
    //----------------------------//
    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1286, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1286, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1338, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1392, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1446, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1505, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1564, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1632, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1705, 880);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(206, 206, 203);
    glVertex2f(1228, 540);
    glVertex2f(1791, 880);
    glEnd();
    //bridge_piler();
    adjust_bridge_piler(0);
    adjust_bridge_piler(100);
    adjust_bridge_piler(200);
    adjust_bridge_piler(300);
    adjust_bridge_piler(400);
    adjust_bridge_piler(500);
    adjust_bridge_piler(600);
    adjust_bridge_piler(700);
    adjust_bridge_piler(800);
    adjust_bridge_piler(1500);
    adjust_bridge_piler(1600);
    adjust_bridge_piler(1700);


}


void resize(int width, int height)
{
    if (height == 0)
    {
        height = 1;
    }

    float aspect = (float)width / height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0, WINDOW_WIDTH, WINDOW_HEIGHT, 0, 0, -1);

    glMatrixMode(GL_MODELVIEW);
}
void star()
{
    glColor4ub(255,210,148,255);
    drawGradientCircle1(248, 344, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(164, 184, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(400, 398, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(710, 210, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(457, 196, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(1466, 416, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(1516, 166, 1, 500);
    glColor4ub(255,210,148,255);
    drawGradientCircle1(1656, 261, 1, 500);
    
}
void update(int)
{
    glutPostRedisplay();
    glutTimerFunc(9, update, 0);

    if (trainpos <= 200)
        trainpos = 200;
    trainpos += trainspeed;

}

void displayFunc()
{
    glClearColor(0, 0, 0, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    akash();
    star();
    glColor4ub(255,210,148,255);
    drawGradientCircle(980, 600, 350, 500);
    adjust_draw_building_type1(-700);
    adjust_background_shadow_type1();
    adjust_draw_building_type1(550);
    adjust_background_shadow_type2();
    background_shadow_type2();
    background_shadow_type1();
    small_shadow();
    adjust_small_shadow();
    draw_building_type1();
    draw_building_type2();
    draw_design_building1();
    
    water();
    shadow_light_water();
    draw_train();
    bridge_line();

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);

    glutCreateWindow("CG Final Project");

    glutDisplayFunc(displayFunc);
    glutReshapeFunc(resize);
    glutTimerFunc(0, update, 0);

    glutMainLoop();

    return 0;
}