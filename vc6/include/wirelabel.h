/***************************************************************************
                                wirelabel.h
                               -------------
    begin                : Sun Feb 29 2004
    copyright            : (C) 2004 by Michael Margraf
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

#ifndef WIRELABEL_H
#define WIRELABEL_H

#include "element.h"

#include <qpainter.h>
#include <qstring.h>
#include <qptrlist.h>

class Wire;
class Node;


class WireLabel : public Element {
public:
  WireLabel(const QString& _Name=0, int _cx=0, int _cy=0,
            int _x1=0, int _y1=0, int _Type=isNodeLabel);
  ~WireLabel();

  void setCenter(int x, int y, bool relative=false);
  bool getSelected(int, int);
  void setName(const QString& Name_);

  Conductor *pOwner;  // Wire or Node where label belongs to
  QString Name, initValue;

  QString save();
  bool    load(const QString& s);
  bool    isHorizontal();
};

#endif
