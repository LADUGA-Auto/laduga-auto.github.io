/***************************************************************************
                                arrow.h
                               ---------
    begin                : Sun Nov 23 2003
    copyright            : (C) 2003 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ARROW_H
#define ARROW_H

#include "painting.h"

#include <qpen.h>


class Arrow : public Painting  {
public:
  Arrow();
 ~Arrow();

//  void paint(ViewPainter*);
  //void paintScheme(QPainter*);
  void getCenter(int&, int&);
  void setCenter(int, int, bool relative=false);

  Painting* newOne();
  //static Element* info(QString&, char* &, bool getNewOne=false);
  bool load(const QString&);
  QString save();

 // void MouseMoving(QPainter*, int, int, int, int, QPainter*, int, int, bool);
 // bool MousePressing();
 // bool getSelected(float, float, float);
 // void Bounding(int&, int&, int&, int&);
 // bool resizeTouched(float, float, float);
 // void MouseResizeMoving(int, int, QPainter*);

 // void rotate();
 // void mirrorX();
 // void mirrorY();
 // bool Dialog();

  void calcArrowHead();
  
  QPen   Pen;
  int    Style;
  double Height, Width;  // size of the arrow head
  double Length, beta;
  int    xp1, yp1, xp2, yp2;   // coordinates to paint the arrow head
};

#endif
